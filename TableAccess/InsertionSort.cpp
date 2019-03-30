//
// Created by user on 30.03.2019.
//


#include <iostream>
#include "InsertionSort.h"

void InsertionSort::sort(DataService *service) {


    std::cout << "Prepare bubble sort" << std::endl;

    DataModel* unsorted[100];
    int n = service->recordCount;
    for(int i = 0; i< n; i++){
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start insertion sort for " << n << " records" << std::endl;


    for (int i = 1; i < n; i++) {
        auto *keyElement = unsorted[i];
        int j = i - 1;

        while (j >= 0 && unsorted[j]->key > keyElement->key) {
            unsorted[j + 1] = unsorted[j];
            j = j - 1;
        }
        unsorted[j + 1] = keyElement;
    }


    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done insertion sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for(int i = 0; i< n; i++){
        service->dataArray[i] = unsorted[i];
    }
}
