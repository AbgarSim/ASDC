//
// Created by user on 31.03.2019.
//

#include "BinarySearch.h"

DataModel *BinarySearch::search(DataService *service, int searchFor) {
    std::cout << "Prepare Sequential Search" << std::endl;

    DataModel *foundElem;
    DataModel *array[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        array[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start SequentialSearch search for " << n << " records" << std::endl;

    foundElem = binarySearch(array, 0, n - 1, searchFor);

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done SequentialSearch sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    if (found)
        return foundElem;
    else
        return nullptr;
}

DataModel *BinarySearch::binarySearch(DataModel *array[], int left, int right, int searchFor) {

    if (right >= left) {
        int mid = left + (right - left) / 2;

        // If the element is present at the middle
        // itself
        if (array[mid]->key == searchFor) {
            this->found = true;
            return array[mid];
        }

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (array[mid]->key > searchFor)
            return binarySearch(array, left, mid - 1, searchFor);

        // Else the element can only be present
        // in right subarray
        return binarySearch(array, mid + 1, right, searchFor);
    }

    // We reach here when element is not
    // present in array
    std::cout << "Nothing found" << std::endl;
    return nullptr;
}
