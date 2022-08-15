//bubble.c
//famous bubble sort
//implement the swap algorithm with pointers

#include <stdio.h>
#define MAX 9

//function prototypes
void printValues();
void sort();
void swap(int*, int*);

// these are the values used throughout the program that are used to be put in the correct numerical order.
int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

// the main function is the poweer behind the entire program.
// this calls the printValues and sort funtions which use all fuctions to power this program.
int main(){
  printf("Before: \n");
  printValues();
  sort();
  printf("After: \n");
  printValues();

  return(0);
} //  end main

// swap function uses pointers to swap the values
// only swaps numbers that are not in the correct order
void swap(int *x, int *y) { 
    int temp = *x; 
    *x = *y; 
    *y = temp;
    printValues(); 
} // end swap

// printValues function prints the values in the order they are in
// every step and swap is represented until the values are in complete order
// this function is used 2 times during the main... once as the values are being sorted, and once when the values are completely sorted.
void printValues() {
	int i;
	printf("[");
  for(i = 0; i < MAX; i++){
    printf("%d ", values[i]);}
    printf("]"); 
    printf("\n");
} // end printValues

// sort function is used to identify the values that are not in the correct order
// the sort function calls the swap function to swap the numbers that are not in the correct order
// shuffles through all of the values in order to ensure all values are in the correct order
void sort(){
 int i,j;
 for(i = 0; i < (MAX-1); i++){
 for (j = 0; j < (MAX-i-1); j++){
   if (values[j] > values[j+1])
      swap(&values[j]  , &values[j+1]);}
}} // end sort




