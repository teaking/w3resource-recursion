/*
 * 8 largest element of an array using recursion.
 */

#include <stdlib.h>
#include <stdio.h>
/*  return largest element in array. 
 *  check element witht he current largest element. 
 *  let arr be {7, 13, 8} then:
 *      @ index = 0, 7 is the current largest
 *      @ index = 1, 13 is the current largest
 *      @ index = 2, 13 is the current largest
 *      therefore return 13 as the largest element in array.
 *  */
void get_largest_elm(int *a, int *largest, int index, int arr_length){
    if(index < arr_length){ // check all the element until the size of the arr
        if(a[index] > *largest) // check if element is the current largest
            *largest = a[index];
        get_largest_elm(a, largest, ++index, arr_length);
    }
}

int main(void){
    int a[] = {1, 2, 19, 4, 5, 6, 7, 8, 9, 0};
    int largest;
    largest = *a;
    get_largest_elm(a, &largest, 0, sizeof(a) / sizeof(int));
    printf("largest value in arr is %d.\n", largest);
}
