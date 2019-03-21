#include <iostream>
#include "DataService.h"
#include "MainMenu.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    auto *service = new DataService;

    service->readDataFromFile();

    auto *mainMenu = new MainMenu;


    delete mainMenu;
    delete service;

    return 0;
}