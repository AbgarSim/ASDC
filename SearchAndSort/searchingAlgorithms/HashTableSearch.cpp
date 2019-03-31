//
// Created by user on 31.03.2019.
//

#include "HashTableSearch.h"

DataModel *HashTableSearch::search(DataService *service, int searchFor) {

    std::cout << "Prepare Hash Table Search" << std::endl;

    DataModel *foundElem;
    DataModel *array[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        array[i] = service->dataArray[i];
    }

    hashData(array, n);

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Hash Table Search search for " << n << " records" << std::endl;

    for(int i = 0; i < n; i++){
        if(searchFor == this->hashTable[i]){
            foundElem = array[i];
            this->found = true;
            break;
        }
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Hash Table Search sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    if (found)
        return foundElem;
    else
        return nullptr;
}

void HashTableSearch::hashData(DataModel *array[], int amountOfRecordsToHash) {

    std::cout << "Hashing data" << std::endl;

    for (int i = 0; i < amountOfRecordsToHash; i++) {
        this->hashTable[i] = array[i]->key;
    }

    std::cout << "Done" << std::endl;

}
