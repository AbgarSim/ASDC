cmake_minimum_required(VERSION 3.13)
project(TableAccess)

include_directories("${PROJECT_SOURCE_DIR}/searchingAlgorithms","${PROJECT_SOURCE_DIR}/sortingAlgorithms")
set(CMAKE_CXX_STANDARD 14)

add_executable(TableAccess main.cpp DataService.cpp DataService.h DataModel.cpp DataModel.h BubbleSort.cpp BubbleSort.h sortingAlgorithms/SelectionSort.cpp sortingAlgorithms/SelectionSort.h sortingAlgorithms/InsertionSort.cpp sortingAlgorithms/InsertionSort.h sortingAlgorithms/QuickSort.cpp sortingAlgorithms/QuickSort.h searchingAlgorithms/SequentialSearch.cpp searchingAlgorithms/SequentialSearch.h sortingAlgorithms/ShellSort.cpp sortingAlgorithms/ShellSort.h sortingAlgorithms/HeapSort.cpp sortingAlgorithms/HeapSort.h searchingAlgorithms/BinarySearch.cpp searchingAlgorithms/BinarySearch.h searchingAlgorithms/HashTableSearch.cpp searchingAlgorithms/HashTableSearch.h)