//
// Created by user on 31.03.2019.
//

#include "HeapSort.h"

void HeapSort::sort(DataService *service) {

    std::cout << "Prepare Heap sort" << std::endl;

    DataModel *unsorted[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Heap sort for " << n << " records" << std::endl;

    heapSort(unsorted, n);

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Heap sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for (int i = 0; i < n; i++) {
        service->dataArray[i] = unsorted[i];
    }
}

void HeapSort::heapify(DataModel *array[], int left, int right) {

    DataModel *temp;
    int largest = right;

    int l = 2 * right + 1;
    int r = 2 * right + 2;

    if (l < left && array[l]->key > array[largest]->key)
        largest = l;
    if (r < left && array[r]->key > array[largest]->key)
        largest = r;

    //If left elem is larger
    if (largest != right) {
        temp = array[right];
        array[right] = array[largest];
        array[largest] = temp;
        heapify(array, left, largest);
    }

}

void HeapSort::heapSort(DataModel *array[], int arrayLength) {

    DataModel *temp;
    for (int i = arrayLength / 2 - 1; i >= 0; i--)
        heapify(array, arrayLength, i);
    for (int i = arrayLength - 1; i >= 0; i--) {
        temp = array[0];
        array[0] = array[i];
        array[i] = temp;
        heapify(array, i, 0);
    }
}

