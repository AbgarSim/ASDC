//
// Created by user on 31.03.2019.
//

#include "../DataModel.h"
#include "../DataService.h"
#include <chrono>
#include <iostream>

class HeapSort {
public:
    void sort(DataService *service);

private:
    void heapify(DataModel* array[], int left, int right);
    void heapSort(DataModel* array[], int arrayLength);
};


