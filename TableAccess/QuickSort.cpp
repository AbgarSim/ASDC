//
// Created by user on 30.03.2019.
//

#include "QuickSort.h"

void QuickSort::sort(DataService *service) {
    std::cout << "Prepare bubble sort" << std::endl;

    DataModel* unsorted[100];
    int n = service->recordCount;
    for(int i = 0; i< n; i++){
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Quick sort for " << n << " records" << std::endl;

    quickSort(unsorted, 0, sizeof(&unsorted)/ sizeof(&unsorted[0]));

    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Quick sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for(int i = 0; i< n; i++){
        service->dataArray[i] = unsorted[i];
    }
}

void QuickSort::quickSort(DataModel* array[], int lowerTreshHold, int higherTreshHold) {

    if(lowerTreshHold < higherTreshHold){

        DataModel* pivot = array[higherTreshHold];    // pivot
        int i = (lowerTreshHold - 1);  // Index of smaller element

        for (int j = lowerTreshHold; j <= higherTreshHold- 1; j++)
        {
            // If current element is smaller than or
            // equal to pivot
            if (array[j]->key <= pivot->key)
            {
                i++;    // increment index of smaller element
                auto *temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        auto *temp = array[i+1];
        array[i+1] = array[higherTreshHold];
        array[higherTreshHold] = temp;

        int pivotIndex = i + 1;

        quickSort(array, lowerTreshHold, pivotIndex - 1);
        quickSort(array, pivotIndex + 1, higherTreshHold);
    }
}
