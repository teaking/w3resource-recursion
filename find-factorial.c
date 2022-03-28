/*
 * find factorial using recursion.
 * let find the factorial of 5 then,
 * 5! =  5 * 4 * 3 * 2 * 1 = 120
 * therefore 5! = 120
 */

#include <stdlib.h>
#include <stdio.h>

/*  returns the factorial of the given number.
 *  */
int factorial(int n){
    if(n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}
int main(void){
    int a;
    a = 5;
    printf("Factioal of %d is %d.", a, factorial(a));
}
