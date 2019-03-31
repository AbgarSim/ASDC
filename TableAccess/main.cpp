#include <iostream>
#include <SequentialSearch.h>
#include <BinarySearch.h>
#include <HashTableSearch.h>
#include "DataService.h"
#include "BubbleSort.h"
#include "sortingAlgorithms/SelectionSort.h"
#include "sortingAlgorithms/InsertionSort.h"
#include "sortingAlgorithms/QuickSort.h"
#include "sortingAlgorithms/ShellSort.h"
#include "sortingAlgorithms/HeapSort.h"

void sortData(DataService *service, int method);

void searchData(DataService *service, int method, int key);

int main() {

    std::cout << "Hello, World!" << std::endl;

    auto *service = new DataService;

    service->readDataFromFile();

    int sort = 0;

    while (true) {
        std::cout << "Choose 1 to sort or 2 not to sort\n";
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
            std::cout << "1.Bubble sort\n2.Selection sort\n3.Insertion sort\n4.Quick sort\n5.Shell sort\n6.Heap sort\n";
            std::cin >> sortingAlg;
            if (sortingAlg == 1 || sortingAlg == 2 || sortingAlg == 3 || sortingAlg == 4 || sortingAlg == 5 ||
                sortingAlg == 6)
                break;
        }

        sortData(service, sortingAlg);

        service->printData();
    }


    int searchMethod = 0;
    while (true) {
        std::cout << "Choose search method" << std::endl;
        std::cout << "1.Sequential search\n";
        if (service->sorted) {
            std::cout << "2.Binary search\n";
        }
        std::cout << "3.Hash table search\n";
        std::cin >> searchMethod;
        if (searchMethod == 1 || searchMethod == 2 || searchMethod == 3)
            break;
    }


    int key;
    std::cout << "Input search key\n";
    std::cin >> key;

    searchData(service, searchMethod, key);

    delete service;

    return 0;
}

void sortData(DataService *service, int method) {
    if (method == 1) {
        auto sortingAlgorithm = new BubbleSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if (method == 2) {
        auto sortingAlgorithm = new SelectionSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if (method == 3) {
        auto sortingAlgorithm = new InsertionSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if (method == 4) {
        auto sortingAlgorithm = new QuickSort;
        sortingAlgorithm->sort(service); //Sort
        delete sortingAlgorithm;         //Dispose
    } else if (method == 5) {
        auto sortingAlgorithm = new ShellSort;
        sortingAlgorithm->sort(service);
        delete sortingAlgorithm;
    } else if (method == 6) {
        auto sortingAlgorithm = new HeapSort;
        sortingAlgorithm->sort(service);
        delete sortingAlgorithm;
    }

    service->sorted = true;
}

void searchData(DataService *service, int method, int key) {
    if (method == 1) {
        auto searchMethod = new SequentialSearch;
        DataModel *found = searchMethod->search(service, key);
        if (found == nullptr) {
            std::cout << "Data not found" << std::endl;
        } else {
            std::cout << "Found record \n" <<
                      found->key << ".\t" <<
                      found->name << "\t" <<
                      found->surname << "\t" <<
                      found->age << "\t" <<
                      found->gender << "\t" <<
                      found->grade << "\t" << std::endl;
        }
    } else if (method == 2) {
        if (service->sorted) {
            auto searchMethod = new BinarySearch;
            DataModel *found = searchMethod->search(service, key);
            if (found == nullptr) {
                std::cout << "Data not found" << std::endl;
            } else {
                std::cout << "Found record \n" <<
                          found->key << ".\t" <<
                          found->name << "\t" <<
                          found->surname << "\t" <<
                          found->age << "\t" <<
                          found->gender << "\t" <<
                          found->grade << "\t" << std::endl;
            }
        }
    } else if (method == 3) {
        auto searchMethod = new HashTableSearch;
        DataModel *found = searchMethod->search(service, key);
        if (found == nullptr) {
            std::cout << "Data not found" << std::endl;
        } else {
            std::cout << "Found record \n" <<
                      found->key << ".\t" <<
                      found->name << "\t" <<
                      found->surname << "\t" <<
                      found->age << "\t" <<
                      found->gender << "\t" <<
                      found->grade << "\t" << std::endl;
        }
    }
}