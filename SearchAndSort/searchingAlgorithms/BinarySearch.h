//
// Created by user on 31.03.2019.
//


#include "../DataModel.h"
#include "../DataService.h"

#include <chrono>
#include <iostream>

class BinarySearch {
public:
    bool found = false;

    DataModel* search(DataService *service, int searchFor);

private:
    DataModel* binarySearch(DataModel* array[], int left, int right, int searchFor);

};


