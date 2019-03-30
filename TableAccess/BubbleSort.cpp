//
// Created by user on 30.03.2019.
//

#include <iostream>
#include "BubbleSort.h"

void BubbleSort::sort(DataService *service){


    std::cout << "Prepare bubble sort" << std::endl;

    DataModel* unsorted[100];
    int n = service->recordCount;
    for(int i = 0; i< n; i++){
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start bubble sort for " << n << " records" << std::endl;

    int iter = 0;
    for(int i = 0; i <  n - 1; i++){
        for(int j = 0; j <  n - i - 1; j++){
            if(unsorted[j]->key > unsorted[j+1]->key){
                auto *temp = unsorted[j];
                unsorted[j] = unsorted[j+1];
                unsorted[j+1] = temp;
            }
        }
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done bubble sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for(int i = 0; i< n; i++){
        service->dataArray[i] = unsorted[i];
    }
}




