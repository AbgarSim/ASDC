//
// Created by user on 30.03.2019.
//

#include "../DataModel.h"
#include "../DataService.h"
#include <chrono>
#include <iostream>

class QuickSort {
public:
    void sort(DataService *service);

private:
    void quickSort(DataModel* array[], int left, int right);

};

