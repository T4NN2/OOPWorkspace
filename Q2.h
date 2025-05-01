#ifndef Q2_1_H
#define Q2_1_H

#include <string>
#include <stack>
#include <memory>
#include <stdexcept>

// Command Interface: pure abstract class
class Command {
public:
    virtual ~Command() = default;
    virtual void execute() = 0;
    virtual void undo() = 0;
};

// TextEditor class
class TextEditor {
private:
    std::string text;
public:
    TextEditor() = default;
    const std::string& getText() const { return text; }
    void insert(size_t pos, const std::string& str) {
        if (pos > text.size()) {
            throw std::out_of_range("Insert position out of range");
        }
        text.insert(pos, str);
    }
    void erase(size_t pos, size_t length) {
        if (pos > text.size()) {
            throw std::out_of_range("Erase position out of range");
        }
        if (pos + length > text.size()) {
            length = text.size() - pos; // adjust length to erase till end
        }
        text.erase(pos, length);
    }
};

// InsertTextCommand class
class InsertTextCommand : public Command {
private:
    TextEditor& editor;
    std::string textToInsert;
    size_t position;
    bool executed;
public:
    InsertTextCommand(TextEditor& editor, const std::string& str, size_t pos)
        : editor(editor), textToInsert(str), position(pos), executed(false) {}

    void execute() override {
        editor.insert(position, textToInsert);
        executed = true;
    }

    void undo() override {
        if (executed) {
            editor.erase(position, textToInsert.size());
            executed = false;
        }
    }
};

// DeleteTextCommand class
class DeleteTextCommand : public Command {
private:
    TextEditor& editor;
    size_t position;
    size_t length;
    std::string deletedText;
    bool executed;
public:
    DeleteTextCommand(TextEditor& editor, size_t pos, size_t len)
        : editor(editor), position(pos), length(len), executed(false) {}

    void execute() override {
        const std::string& currentText = editor.getText();
        if (position > currentText.size()) {
            throw std::out_of_range("Delete position out of range");
        }
        size_t actualLength = length;
        if (position + length > currentText.size()) {
            actualLength = currentText.size() - position;
        }
        deletedText = currentText.substr(position, actualLength);
        editor.erase(position, actualLength);
        executed = true;
    }

    void undo() override {
        if (executed) {
            editor.insert(position, deletedText);
            executed = false;
        }
    }
};

// Invoker class
class Invoker {
private:
    std::stack<Command*> commandStack;
public:
    void execute(Command* cmd) {
        cmd->execute();
        commandStack.push(cmd);
    }

    void undo() {
        if (!commandStack.empty()) {
            Command* cmd = commandStack.top();
            commandStack.pop();
            cmd->undo();
            delete cmd;
        }
    }

    ~Invoker() {
        // Clean up any remaining commands
        while (!commandStack.empty()) {
            delete commandStack.top();
            commandStack.pop();
        }
    }
};

#endif // Q2_1_H
