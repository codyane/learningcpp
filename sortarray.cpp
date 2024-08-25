#include <iostream>

// Function declaration for sorting an array
void sort(int array[], int size);

int main() {
    // Initialize an array of integers
    int array[] = {10, 1, 9, 2, 8, 3, 7, 4, 6, 5};
    
    // Calculate the size of the array
    int size = sizeof(array)/sizeof(array[0]);

    // Call the sort function to sort the array
    sort(array, size);

  // Loop to print the sorted array
    for (int element : array) {
        std::cout << element << " ";  // Output each element followed by a space
  }

    return 0;
}

// Function definition to perform Bubble Sort
void sort(int array[], int size) {
    int temp; // Temporary variable to hold values during swapping

    // Outer loop: moves through the entire array
    for (int i = 0; i < size - 1; i++) {
        // Inner loop: compares adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            // Swap elements if they are in the wrong order
            if (array[j] > array[j + 1]) {
                temp = array[j];        // Store the current element in temp
                array[j] = array[j + 1]; // Move the next element to the current position
                array[j + 1] = temp;     // Move temp to the next position
            }
        }
    }
}
