//
// Created by user on 30.03.2019.
//

#include "QuickSort.h"

void QuickSort::sort(DataService *service) {
    std::cout << "Prepare Quick sort" << std::endl;

    DataModel *unsorted[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Quick sort for " << n << " records" << std::endl;

    quickSort(unsorted, 0, n-1);

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Quick sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for (int i = 0; i < n; i++) {
        service->dataArray[i] = unsorted[i];
    }
}

void QuickSort::quickSort(DataModel* array[], int left, int right) {

    int i = left, j = right;

    DataModel* tmp;
    DataModel* pivot = array[(left + right) / 2];

    /* partition */
    while (i <= j) {
        while (array[i]->key < pivot->key)
            i++;
        while (array[j]->key > pivot->key)
            j--;
        if (i <= j) {
            tmp = array[i];
            array[i] = array[j];
            array[j] = tmp;
            i++;
            j--;
        }
    };

    /* recursion */
    if (left < j)
        quickSort(array, left, j);
    if (i < right)
        quickSort(array, i, right);
}
