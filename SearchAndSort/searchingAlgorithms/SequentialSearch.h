//
// Created by user on 30.03.2019.
//


#include "../DataModel.h"
#include "../DataService.h"

#include <chrono>
#include <iostream>

class SequentialSearch {
public:
    bool found = false;

    DataModel *search(DataService *service, int searchFor);

};


