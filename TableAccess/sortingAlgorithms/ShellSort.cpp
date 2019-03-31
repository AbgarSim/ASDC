//
// Created by user on 31.03.2019.
//

#include "ShellSort.h"

void ShellSort::sort(DataService *service) {

    std::cout << "Prepare Shell sort" << std::endl;

    DataModel *unsorted[100];
    int n = service->recordCount;
    for (int i = 0; i < n; i++) {
        unsorted[i] = service->dataArray[i];
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::cout << "Start Shell sort for " << n << " records" << std::endl;

    for (int gap = n / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < n; i++) {
            DataModel *temp = unsorted[i];
            int j;
            for (j = i; j >= gap && unsorted[j - gap]->key > temp->key; j -= gap) {
                unsorted[j] = unsorted[j - gap];
            }
            unsorted[j] = temp;
        }
    }


    auto end = std::chrono::high_resolution_clock::now();
    std::cout << "Done Shell sort" << std::endl;

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Duration " << duration.count() << "msc" << std::endl;

    for (int i = 0; i < n; i++) {
        service->dataArray[i] = unsorted[i];
    }

}
