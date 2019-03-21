//
// Created by user on 21.03.2019.
//

#include "MainMenu.h"
#include <iostream>
#include "DataService.h"

MainMenu::MainMenu() {

    while (true){
        int choice = chooseIfDataSorted();
        if(choice == 1 || choice == 2){
            dataSort = choice == 1;
            break;
        }
    }

    while (true){
        int  choice = chooseSearchMethod();
        if(choice == 1 || choice == 2 || choice == 3 || choice == 4){
            dataSearchMethod = choice;
            break;
        }
    }


}

MainMenu::~MainMenu() {

}

int MainMenu::chooseIfDataSorted() {
    cout << "Please choose if you want data to be sorted or not";
    cout << "1.Yes\n2.No\n";
    int choose;
    cin >> choose;
    if (choose == 1) {
        cout << "Data will be sorted";
    } else if(choose == 2){
        cout << "Data won't be sorted";
    } else {
        cout << "Please choose 1 or 2";
    }

    return choose;
}

int MainMenu::chooseSearchMethod() {
    cout << "Please choose search method";

    if(!dataSort){
        cout << "1.Linear Search\n2.Tree search]\n";
        int choice;
        cin >> choice;
        if(choice == 1 || choice == 2){
            return choice;
        } else{
            cout << "Please choose 1 or 2";
        }
    }else{
        cout << "1.Binary search\n2.Hash search\n";
        int choice;
        cin >> choice;
        if(choice == 1 || choice == 2){
            return choice + 2;
        } else{
            cout << "Please choose 1 or 2";
        }
    }

    return 0;

}