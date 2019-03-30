#include <iostream>
#include "DataService.h"
#include "BubbleSort.h"
#include "SelectionSort.h"
#include "InsertionSort.h"
#include "QuickSort.h"

void sortData(DataService *service, int method);

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
    if (sort == 1) {
        int sortingAlg = 0;
        while (true) {
            std::cout << "Choose sorting method" << std::endl;
            std::cout << "1.Bubble sort\n2.Selection sort\n3.Insertion sort\n4.Quick sort\n";
            std::cin >> sortingAlg;
            if (sortingAlg == 1 || sortingAlg == 2 || sortingAlg == 3 || sortingAlg == 4)
                break;
        }

        sortData(service, sortingAlg);

        service->printData();
    } else {

    }
    delete service;

    return 0;
}

void sortData(DataService *service, int method) {
    if (method == 1) {
        auto sortingAlgorithm = new BubbleSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if(method == 2){
        auto sortingAlgorithm = new SelectionSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if(method == 3){
        auto sortingAlgorithm = new InsertionSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if(method == 4){
        auto sortingAlgorithm = new QuickSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    }
}