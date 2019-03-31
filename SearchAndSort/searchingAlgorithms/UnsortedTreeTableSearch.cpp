//
// Created by user on 31.03.2019.
//

#include "UnsortedTreeTableSearch.h"

struct TreeTable {

    int key;
    DataModel *data;

    struct TreeTable *left, *right;
};


DataModel *UnsortedTreeTableSearch::search(DataService *service, int searchFor) {

    std::cout << "Prepare Unsorted Tree Table Search Search" << std::endl;

    DataModel *foundElem;
    DataModel *array[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        array[i] = service->dataArray[i];
    }

    populateTreeTableStruct(array, n);

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Unsorted Tree Table Search search for " << n << " records" << std::endl;


    int i = 0;
    TreeTable *searchPoint = rootNode;

    bool search = true;

    while (search) {

        if (searchPoint->key == searchFor) {
            search = false;
            foundElem = searchPoint->data;
            this->found = true;
        } else if (searchPoint->key >= searchFor) {
            if (searchPoint->right != nullptr) {
                searchPoint = searchPoint->right;
            } else {
                search = false;
            }
        } else {
            if (searchPoint->left != nullptr) {
                searchPoint = searchPoint->left;
            } else {
                search = false;
            }
        }
        i++;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Unsorted Tree Table Search sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    if (found)
        return foundElem;
    else
        return nullptr;

}

void UnsortedTreeTableSearch::populateTreeTableStruct(DataModel *array[], int recordCount) {

    for (int i = 0; i < recordCount; i++) {
        if (i == 0) {
            // Allocate memory for new node
            struct TreeTable *initialPoint = (struct TreeTable *) malloc(sizeof(struct TreeTable));

            // Assign data to this node
            initialPoint->key = array[i]->key;
            initialPoint->data = array[i];

            // Initialize left and right children as NULL
            initialPoint->left = nullptr;
            initialPoint->right = nullptr;

            this->rootNode = initialPoint;
        } else {
            TreeTable *searchPoint = rootNode;
            int key = array[i]->key;
            bool searching = true;
            bool left = true;

            while (searching) {
                if (searchPoint->key < key) {
                    if (searchPoint->left != nullptr) {
                        searchPoint = searchPoint->left;
                    } else {
                        searching = false;
                        left = true;
                    }
                } else {
                    if (searchPoint->right != nullptr) {
                        searchPoint = searchPoint->right;
                    } else {
                        searching = false;
                        left = false;
                    }
                }
            }

            // Allocate memory for new node
            struct TreeTable *newPoint = (struct TreeTable *) malloc(sizeof(struct TreeTable));

            // Assign data to this node
            newPoint->key = array[i]->key;
            newPoint->data = array[i];

            // Initialize left and right children as NULL
            newPoint->left = nullptr;
            newPoint->right = nullptr;
            if (left) {
                searchPoint->left = newPoint;
            } else {
                searchPoint->right = newPoint;
            }

        }

    }
}
