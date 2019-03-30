//
// Created by user on 30.03.2019.
//

#ifndef TABLEACCESS_SEQUENTIALSEARCH_H
#define TABLEACCESS_SEQUENTIALSEARCH_H


#include "../DataModel.h"
#include "../DataService.h"

#include <chrono>
#include <iostream>

class SequentialSearch {
public:
    DataModel* search(DataService *service, int searchFor);
};


#endif //TABLEACCESS_SEQUENTIALSEARCH_H
