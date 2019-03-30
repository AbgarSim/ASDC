#include <iostream>
#include "DataService.h"
#include "BubbleSort.h"

int main() {

    std::cout << "Hello, World!" << std::endl;

    auto *service = new DataService;

    service->readDataFromFile();

    int sort = 0;

    while (true) {
        std::cout << "Choose 1 to sort or 2 not to sort";
        std::cin >> sort;
        if (sort == 1 || sort == 2)
            break;
        else
            std::cout << "Choose again";
    }

    //sort branch
    if(sort == 1){
        int sortingAlg = 0;
        while (true) {
            std::cout << "Choose sorting method" << std::endl;
            std::cout << "1.Bubble sort";
            std::cin >> sortingAlg;
            if(sortingAlg == 1)
                break;
        }

        auto bubbleSort = new BubbleSort;
        bubbleSort->sort(service); //Sort
        delete bubbleSort;         //Dispose


        service->printData();
    }
    else {

    }
    delete service;

    return 0;
}