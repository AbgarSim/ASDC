//
// Created by user on 09.03.2019.
//

#ifndef TABLEACCESS_DATAMODEL_H
#define TABLEACCESS_DATAMODEL_H

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
using namespace std;

class DataModel {
public:
    DataModel(int key, string name, string surname, int age, char gender, float grade);
    ~DataModel();

    int key;
    string name;
    string surname;
    int age;
    char gender;
    float grade;
};


#endif //TABLEACCESS_DATAMODEL_H
