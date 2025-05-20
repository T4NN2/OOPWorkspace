#ifndef USBCONNECTION_H
#define USBCONNECTION_H

#include <stack>
#include <vector>

class USBConnection {
private:
    int ID;

    USBConnection(int id) : ID(id) {}

public:
    static std::stack<int> ids;

    ~USBConnection() {
        ids.push(ID);
    }

    static USBConnection* CreateUsbConnection() {
        if (ids.empty()) {
            return nullptr;
        }
        int id = ids.top();
        ids.pop();
        return new USBConnection(id);
    }

    int get_id() const {
        return ID;
    }
};

std::stack<int> USBConnection::ids;

struct USBConnectionInitializer {
    USBConnectionInitializer() {
        USBConnection::ids.push(3);
        USBConnection::ids.push(2);
        USBConnection::ids.push(1);
    }
};

static USBConnectionInitializer usbConnectionInitializer;

#endif
