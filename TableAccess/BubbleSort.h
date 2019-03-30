//
// Created by user on 30.03.2019.
//

#ifndef TABLEACCESS_BUBBLESORT_H
#define TABLEACCESS_BUBBLESORT_H


#include "DataModel.h"
#include "DataService.h"
#include <chrono>

class BubbleSort{
public:

    void prepareSort(DataService *service) ;
    void sort(DataService *service);

};


#endif //TABLEACCESS_BUBBLESORT_H
