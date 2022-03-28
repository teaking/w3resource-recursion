/*
 * 11 convert a decimal number to binary using recursion
 */

#include <stdlib.h>
#include <stdio.h>
#define SIZE 8 // store n bits 
/*  
 *  converts decimal value to binary. 
 *  stores the bits into the bin array 
 *  and returns the array with binary digit.
 *  */
void decimal_to_binary(int dec, int *bin, int bits){
    if(dec >= 1){
        bin[bits] = dec % 2;
        decimal_to_binary(dec / 2, bin, --bits);
    }

}
/*  display element stored inside array */
void print_arr(int *a, int size){
    static int index = 0;
    if(index <= size){
        printf("\t %d", a[index]);
        ++index;
        print_arr(a, size);
    }
}

int main(void){
    int dec = 66;
    int bin[SIZE] = {0}; // stores converted decimal in binary
    decimal_to_binary(dec, bin, SIZE);
    print_arr(bin, SIZE);

}
