## Bubble Sort with Pointers in C

### Overview
This C program demonstrates the implementation of the bubble sort algorithm using pointers. The program takes an array of integers and sorts them in ascending order. Throughout the sorting process, the program prints each step to visualize how the array elements are rearranged.

### Technologies Used
- **C Programming Language**: The program is written in C, emphasizing the use of pointers for efficient manipulation of array elements.
- **Bubble Sort Algorithm**: The bubble sort algorithm is employed to sort the array. This algorithm iterates through the array, comparing adjacent elements and swapping them if they are in the wrong order.

### Concepts Demonstrated
- **Pointers**: The program extensively utilizes pointers to efficiently manipulate array elements. Pointers are passed to functions to modify array values and achieve sorting.
- **Sorting Algorithms**: The implementation of the bubble sort algorithm demonstrates the concept of sorting arrays in computer science.
- **Function Prototypes**: The program employs function prototypes to declare functions before they are defined, ensuring proper function usage.

### Usage
- **Compilation**: Compile the program using the provided Makefile by running `make`.
- **Execution**: After compilation, execute the compiled program by running `./pointers_and_bubbles`.
- **Output**: The program will display the original array, followed by each step of the sorting process, and finally, the sorted array.

### Functions Overview
- **`main()`**: The entry point of the program. Initializes the array, calls sorting functions, and prints the array before and after sorting.
- **`printValues(const int*)`**: Prints the current state of the array. Called before and after sorting to visualize the sorting process.
- **`swap(int*, int*)`**: Swaps the values of two integers using pointers. Utilized by the sorting function to rearrange array elements.
- **`sort(int*)`**: Implements the bubble sort algorithm to sort the array elements in ascending order. Calls the `swap()` function to perform element swaps.

### Inputs and Outputs
- **Inputs**: The program does not accept any user inputs. The array to be sorted is pre-defined within the program.
- **Outputs**: The program outputs each step of the sorting process, displaying the array elements at each iteration. After sorting, the final sorted array is displayed.

### Conclusion
This program provides hands-on experience with C-style pointers and the bubble sort algorithm. By visualizing the sorting process, users can better understand how pointers are used to manipulate data efficiently. The program serves as an educational tool for learning about pointers, sorting algorithms, and array manipulation in C programming.