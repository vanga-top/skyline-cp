#include <iostream>
#include "../include/Server.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Server server;
    server.Start();
    return 0;
}
