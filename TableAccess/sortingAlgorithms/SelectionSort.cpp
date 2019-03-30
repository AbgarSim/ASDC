//
// Created by user on 30.03.2019.
//


#include <iostream>
#include "SelectionSort.h"

void SelectionSort::sort(DataService *service) {

    std::cout << "Prepare bubble sort" << std::endl;

    DataModel* unsorted[100];
    int n = service->recordCount;
    for(int i = 0; i< n; i++){
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start selection sort for " << n << " records" << std::endl;


    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        int minElementPosition = i;
        for (int j = i+1; j < n; j++)
            if (unsorted[j]->key < unsorted[minElementPosition]->key)
                minElementPosition = j;

        // Swap the found minimum element with the first boundry element of unsorted array
        auto *temp = unsorted[i];
        unsorted[i] = unsorted[minElementPosition];
        unsorted[minElementPosition] = temp;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done selection sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for(int i = 0; i< n; i++){
        service->dataArray[i] = unsorted[i];
    }
}
