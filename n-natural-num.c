/*
 * Write a program in C to print first 50 natural numbers using recursion.
 */

#include <stdlib.h>
#include <stdio.h>

/*  recusively call n_natural() until reach start == 50 */
void n_natural(int start, int n){
    if(start <= n){  // until 50 
        printf("\t %d", start);
        n_natural(++start, n);
    }
}

int main(void){
   n_natural(1, 50); 
}
