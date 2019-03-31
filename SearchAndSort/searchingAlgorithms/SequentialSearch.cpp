//
// Created by user on 30.03.2019.
//

#include "SequentialSearch.h"

DataModel *SequentialSearch::search(DataService *service, int searchFor) {

    std::cout << "Prepare Sequential Search" << std::endl;

    DataModel *foundElem;
    DataModel *array[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        array[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start SequentialSearch search for " << n << " records" << std::endl;



    for (int i = 0; i < service->recordCount; i++) {
        if (array[i]->key == searchFor) {
            foundElem = array[i];
            found = true;
            break;
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done SequentialSearch sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    if (found)
        return foundElem;
    else
        return nullptr;
}
