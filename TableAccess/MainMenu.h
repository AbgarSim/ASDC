//
// Created by user on 21.03.2019.
//

#ifndef TABLEACCESS_MAINMENU_H
#define TABLEACCESS_MAINMENU_H

#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
#include "DataModel.h"

class MainMenu {
public:
    MainMenu();
    ~MainMenu();

    bool dataSort;
    int dataSearchMethod; //1. Linear 2. Tree search 3.Binary search 4.Hash table search

    int chooseIfDataSorted();
    int chooseSearchMethod();
};


#endif //TABLEACCESS_MAINMENU_H
