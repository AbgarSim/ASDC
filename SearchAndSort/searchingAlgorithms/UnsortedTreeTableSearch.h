//
// Created by user on 31.03.2019.
//


#include "../DataModel.h"
#include "../DataService.h"

#include <chrono>
#include <iostream>


class UnsortedTreeTableSearch {
public:
    bool found = false;
    struct TreeTable *rootNode;

    DataModel *search(DataService *service, int searchFor);
    void populateTreeTableStruct(DataModel *array[], int recordCount);
};

