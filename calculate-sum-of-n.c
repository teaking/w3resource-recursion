/*
 * 2. calculate the sum of numbers from 1 to n using recursion.
 */

#include <stdlib.h>
#include <stdio.h>

/*  sums from start to nth number recursively using stack. 
 */
int get_sum(int start, int n, int depth){
    int address = 1;
    printf("\n[depth %d] stack address %p", depth, &address); // stack address where the get_sum is kept.
    if(start == n){
        return start;
    }
    return start + get_sum(start + 1, n, ++depth);
}
int main(void){
    int n = 5;
    printf("\nSum of numbers from 1 to %d is %d.\n", n, get_sum(1, n, 0));

}
