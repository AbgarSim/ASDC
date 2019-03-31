//
// Created by user on 09.03.2019.
//

#include "DataModel.h"

DataModel::DataModel(int key, std::string name, std::string surname, int age, char gender, float grade) {
    this->key = key;
    this->name = name;
    this->surname = surname;

    if(age >= 0 && age < 100){
        this->age = age;
    } else{
        this->age = 20;
    }

    if(gender == 'M' || gender == 'F' || gender == 'm' || gender == 'f'){
        this->gender = gender;
    } else{
        this->gender = 'M';
    }

    if(grade >= 0  && grade <= 10){
        this->grade = grade;
    } else{
        this->grade = 8;
    }


}

DataModel::~DataModel() {

}