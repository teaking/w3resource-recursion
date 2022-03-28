/*
 * 9 reverse a string using recursion
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/*  print reverse of provided string using recursion
 *  traverse to the end of the string using recursion so that each traverse
 *   elemenet is stored in individual stack frame.
 *  then before returning from each stack frame print the value at the index
 *  */
void print_reverse_str(char *a, int arr_len, int index, char *rev){
    if(a[index] != '\0'){
        print_reverse_str(a, arr_len, index + 1, rev);
    }
    rev[arr_len - index] = a[index];
    printf("%c", a[index]);
}

int main(void){
    char *a = "Hello World!";
    int len = strlen(a);
    char rev[len];
    print_reverse_str(a, len, 0, rev);
    rev[len + 1] = '\0'; // instead of moving element by 1 position instead simply add
        // null character to the end which is length of array + 1.  
    printf("\nreverse string of %s is %s.\n", a, rev + 1); // do not read from 1st value of 
        // array since it is '\0' null character, from reversing the original array.
}
