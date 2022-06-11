# Sorting Searching Library In C Language

A library containing various searching and sorting functions to search and sort a list according to the given comparator function.

## GOALS
* To provide flexibility to use sorting and searching algorithms in various projects and coding problems in c language.
* To search and sort list of any datatype.

## How To Install And Use Library

### Install
   Keep all file in one directory.<br>
   In Linux Terminal run command    **make**<br>
   (This will automatically compile the files and make static library( _mylib.a ) )<br>
- - - -   
### How To Use Sorting Functions ? ###
   To use the sorting functions you have to write **[comparator function](https://github.com/Aniket505/Project/blob/main/Comparator_functions)**(Open link to see example) for the datatype you have to sort.<br>
   **Make a double pointer array and store the addresses of the elements of the array to be sorted in it.**<br>
   Pass that array through the functions listed below to sort the array
   
   * **Merge Sort**      :  merge_sort((void **)a, int starting_index, int ending_index, (void **)b, int(*cmp)(void *, void *));** 
   * **Quick Sort**      :  q_sort((void **)a, int starting_index, int ending_index, int(*cmp)(void *, void *));**
   * **Bubble Sort**     :  bubble_sort((void **)a, int size, int(*cmp)(void *, void *));**
   * **Insertion Sort**  :  insertion_sort((void **)a, int size, int(*cmp)(void *, void *));**
### How To Use Searching Functions ? ###
   To use the searching functions you have to write **[comparator function](https://github.com/Aniket505/Project/blob/main/Comparator_functions_2)**(open link to see example) for the datatype you have to search.
   Pass the array through the functions listed below to search any element from the list.
   * **Binary Search**   :  binary_search(void *a, void *key, int starting_index, int ending_index, int(*cmp)(void *, void *, int));
   * **Linear Search**   :  linear_search(void *a, void *key, int size, int(*cmp)(void *, void *, int))
   
## How To Compile ##
   To compile the program in which the sorting or searching functions are used <br>
   Run Command  :  &nbsp;&nbsp; **gcc _filename_ -L. -l_mylib**

## Description

### SORTING
**Sorting** is a process of ordering individual elements of a list according to their proper rank, either in ascending or descending order.<br>
* A programming logic with few steps which can sort a bunch of elements are called sorting algorithms.<br>
* There are different types of sorting algorithms like<br>
   * **Bubble Sort** - A sorting algorithm which compares one element to its next element and if requires it swaps like a bubble.<br>
   * **Selection Sort** - A sorting algorithm which selects a position in the elements and compares it to the rest of the positions one by one.<br>
   * **Insertion Sort** - A sorting algorithm which selects one element from the array and is compared to the one side of the array. Element is inserted to the proper position while shifting others.<br>
   * **Merge Sort** - A sorting algorithm which divides the elements to subgroups and then merges back to make a sorted.<br>
   * **Quick Sort** - A sorting algorithm which divides the elements into two subsets and again sorts recursively.<br>
 
#### Time & Space Complexity
Algorithm | | Time Complexity | | Space Complexity
| :--- | ---: | ---: | ---: | ---:
| | Best Case | Average Case | Worst Case |
Bubble Sort  | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1)
Selection Sort | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1)
Insertion Sort  | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(n<sup>2</sup>) | O(1)
Merge Sort | O(nlogn) | O(nlogn) | O(nlogn) | O(n)
Quick Sort  | O(nlogn) | O(nlogn) | O(n<sup>2</sup>) | O(logn)

### SEARCHING
**Searching** is an operation or a technique that helps finds the place of a given element or value in the list. Any search is said to be successful or unsuccessful depending upon whether the element that is being searched is found or not.
* Some of the standard searching technique that is being followed in the data structure is listed below :
   * **Linear Search** or **Sequential Search**
   * **Binary Search**

#### Linear Search
This is the **simplest** method for searching. In this technique of searching, the element to be found in searching the elements to be found is searched sequentially in the list. This method can be performed on a **sorted** or an **unsorted** list.<br> 
* In case of a **sorted list** searching starts from 0th element and continues until the element is found from the list or the element whose value is greater than (assuming the list is sorted in ascending order), the value being searched is reached.
* Searching in case of **unsorted list** also begins from the 0th element and continues until the element or the end of the list is reached.

#### Binary Search
Binary search is a **very fast** and **efficient** searching technique. **It requires the list to be in sorted order.** In this method, to search an element you can compare it with the present element at the center of the list. If it matches, then the search is successful otherwise the list is divided into two halves : one from the 0th element to the middle element which is the center element (first half) another from the center element to the last element (which is the 2nd half) where all values are greater than the center element.<br>
The searching mechanism proceeds from either of the two halves depending upon whether the target element is greater or smaller than the central element. If the element is smaller than the central element, then searching is done in the first half, otherwise searching is done in the second half.

#### Time & Space Complexity
Algorithm | | Time Complexity | | Space Complexity |
| :--- | ---: | ---: | ---: | ---:
| | Best Case | Average Case | Worst Case | |
Linear Search  | O(1) | O(n) | O(n) | O(1)
Binary Search | O(1) | O(logn) | O(logn) | O(1)

## Specifications
* **_mylib.a** is the library which contains the functions of various sorting and searching algorithms.
* **sort.h** is the header file.
* **Makefile** is the file which will automatically compile the sorting and searching files and make a library (_mylib.a).
* **qsort.c** file which contains the code of quick sort.
* **bsort.c** file which contains the code of bubble sort.
* **isort.c** file which contains the code of insertion sort.
* **msort.c** file which contains the code of merge sort.
* **lsearch.c** file which contains the code of linear search.
* **bsearch.c** file which contains the code of binary search.

## Design
* Used function pointers and void pointers to make code generic.
* Used comparator functions to compare various datatypes and structures.

## Requirements
* Any C/C++ Compiler would work.

## Implementation
* All files are implemented using C language.
