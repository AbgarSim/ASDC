//
// Created by user on 09.03.2019.
//

#include <iostream>
#include <vector>
#include "DataService.h"
#include "Person.h"
#include "DataModel.h"

DataService::DataService() {

    this->fileName = R"(D:\University\ADSC\TableAccess\dataFile.txt)";
    this->inFile.open(fileName);

    //Check that the file is available and was opened
    if (!inFile) {
        cerr << "Unable to open file datafile.txt";
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
    string name;
    string surname;
    int age;
    char gender;
    float grade;

    vector<DataModel> people;

    while (inFile >> key >> name >> surname >> age >> gender >> grade) {
        people.push_back(DataModel(key, name, surname, age, gender, grade));
    }

    for (int i = 0; i < people.size(); i++) {
        cout <<
        people[i].key << ".\t" <<
        people[i].name << "\t" <<
        people[i].surname << "\t" <<
        people[i].age << "\t" <<
        people[i].gender << "\t" <<
        people[i].grade << "\t"<< endl;
    }

    this->records = people;
}

void DataService::resetIfStreamToBegining() {
    inFile.clear();
    inFile.seekg(0, ios::beg);
}

void DataService::countRecords() {

    int count = 0;
    int fieldCount = 5;
    char nextChar;
    bool lineStart = true;

    string name;
    string surname;
    int age;
    char gender;
    float grade;

    while (inFile >> nextChar) {
        if (lineStart) {
            cout << "New Line" << endl;
            lineStart = false;
            count++;
            fieldCount = 5;
        } else {
            if (nextChar == ';' && fieldCount > 0) {
                fieldCount--;
            } else if (nextChar == ';') {
                lineStart = true;
                fieldCount = 5;
            }
        }
    }
    cout << count;
    this->recordCount = count;

}

