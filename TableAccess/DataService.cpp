#include <utility>

//
// Created by user on 09.03.2019.
//


#include <iostream>
#include "DataService.h"


DataService::DataService() {

    this->fileName = R"(D:\University\ADSC\TableAccess\dataFile.txt)";
    this->inFile.open(fileName);


    //Check that the file is available and was opened
    if (!inFile) {
        std::cerr << "Unable to open file datafile.txt";
        exit(1);   // call system to stop
    }
}

DataService::~DataService() {
    //Close the stream
    if (inFile) {
        inFile.close();
    }
}

void DataService::readDataFromFile() {


    int key;
    std::string name;
    std::string surname;
    int age;
    char gender;
    float grade;


    while (inFile >> key >> name >> surname >> age >> gender >> grade) {
        people.push_back(DataModel(key, name, surname, age, gender, grade));
    }

    for (int i = 0; i < people.size(); i++) {
        this->dataArray[i] = &people[i];
    }

    this->recordCount = people.size();


    this->printData();
}

void DataService::printData() {

    std::cout << "Print Table data \n";
    for (int i = 0; i < recordCount; i++) {
        std::cout <<
                  this->dataArray[i]->key << ".\t" <<
                  this->dataArray[i]->name << "\t" <<
                  this->dataArray[i]->surname << "\t" <<
                  this->dataArray[i]->age << "\t" <<
                  this->dataArray[i]->gender << "\t" <<
                  this->dataArray[i]->grade << "\t" << std::endl;
    }
}



