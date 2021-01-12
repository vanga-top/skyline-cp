#include <iostream>
#include "../include/Server.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "start the server? (y/n)\n";
    char answer = 0;
    std::cin >> answer;

    if (answer == 'y') {
        Server server;
        server.Start();
    }

    return 0;
}
