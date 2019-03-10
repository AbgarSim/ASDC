//
// Created by user on 09.03.2019.
//

#ifndef TABLEACCESS_DATASERVICE_H
#define TABLEACCESS_DATASERVICE_H

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
#include "DataModel.h"

using namespace std;

class DataService {
public:

    DataService();
    ~DataService();

    ifstream inFile;
    string fileName;
    vector<DataModel> records;
    int recordCount;

    void readDataFromFile();
    void countRecords();
    void resetIfStreamToBegining();
};


#endif //TABLEACCESS_DATASERVICE_H
