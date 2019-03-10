#include <iostream>
#include "DataService.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    DataService *service = new DataService;

    service->readDataFromFile();



    return 0;
}