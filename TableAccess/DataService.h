//
// Created by user on 09.03.2019.
//

#pragma once

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
#include <vector>
#include "DataModel.h"


class DataService {
public:

    DataService();

    ~DataService();

    std::ifstream inFile;
    std::string fileName;


    bool sorted;
    int recordCount;
    std::vector<DataModel> people;
    DataModel *dataArray[100];


    void readDataFromFile();

    void printData();

};


