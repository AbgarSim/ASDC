//
// Created by user on 31.03.2019.
//

#include "../DataModel.h"
#include "../DataService.h"

#include <chrono>
#include <iostream>

class HashTableSearch {
public:
    bool found = false;
    int hashTable[100];

    DataModel *search(DataService *service, int searchFor);

private:
    void hashData(DataModel *array[], int amountOfRecordsToHash);

};


