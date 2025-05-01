#include <cassert>
#include <iostream>
#include "Q2.h"

void runTests() {
    TextEditor editor;
    Invoker invoker;

    // Test 1: Insert text "Hello, World!"
    invoker.execute(new InsertTextCommand(editor, "Hello, World!", 0));
    assert(editor.getText() == "Hello, World!");
    
    // Test 2: Delete text "Hello"
    invoker.execute(new DeleteTextCommand(editor, 0, 5));
    assert(editor.getText() == ", World!");

    // Test 3: Undo deletion
    invoker.undo();
    assert(editor.getText() == "Hello, World!");

    // Test 4: Undo insertion
    invoker.undo();
    assert(editor.getText() == "");

    // Test 5: Multiple operations and undo
    invoker.execute(new InsertTextCommand(editor, "Hello", 0));
    invoker.execute(new InsertTextCommand(editor, ", ", 5));
    invoker.execute(new InsertTextCommand(editor, "World!", 7));
    assert(editor.getText() == "Hello, World!");

    invoker.undo();
    assert(editor.getText() == "Hello, ");

    invoker.undo();
    assert(editor.getText() == "Hello");

    invoker.undo();
    assert(editor.getText() == "");

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}