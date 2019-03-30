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

    std::vector<DataModel> people;
    DataModel* dataArray[5];
    int recordCount;


    void readDataFromFile();
    void printData();

};


