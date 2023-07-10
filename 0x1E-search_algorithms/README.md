# Search Algorithms

This repository contains implementations of common search algorithms, including the linear search and binary search. The purpose of these algorithms is to efficiently find a specific target value within a given dataset.

## Linear Search

The linear search algorithm, also known as a sequential search, is a simple yet straightforward method of searching for a target value in a collection of elements. It iterates through each element in the dataset, comparing it with the target value until a match is found or the entire dataset has been traversed.

### Algorithm Steps:
1. Start from the beginning of the dataset.
2. Compare the current element with the target value.
3. If a match is found, return the index of the current element.
4. If no match is found, move to the next element.
5. Repeat steps 2-4 until the target value is found or the end of the dataset is reached.

Linear search is suitable for small datasets or unsorted data. However, its time complexity is O(n), where n is the number of elements in the dataset, which means it may become inefficient for large datasets.

## Binary Search

The binary search algorithm is a more efficient search method, applicable to sorted datasets. It repeatedly divides the dataset in half and compares the middle element with the target value. By discarding the half in which the target value cannot be present, it significantly reduces the search space with each comparison.

### Algorithm Steps:
1. Start with a sorted dataset.
2. Set the left and right boundaries to the first and last indices of the dataset, respectively.
3. Calculate the middle index as (left + right) / 2.
4. Compare the value at the middle index with the target value.
5. If they match, return the middle index.
6. If the target value is less than the middle element, update the right boundary to be one index less than the middle index.
7. If the target value is greater than the middle element, update the left boundary to be one index more than the middle index.
8. Repeat steps 3-7 until the target value is found or the left boundary becomes greater than the right boundary.

Binary search has a time complexity of O(log n), where n is the number of elements in the dataset. It is efficient for large sorted datasets and allows for faster retrieval of the target value.
