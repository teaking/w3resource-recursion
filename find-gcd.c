/*
 * 7 find GCD of two numbers using recursion and euclidean algorithm.
 */

#include <stdlib.h>
#include <stdio.h>
/*  get gcd of two number using euclidean algorithm
 *  let two number be 'a' and 'b' then, 
 *      gcd(a, b) function should replace:
 *          1) a with b
 *          2) b with (a mod b)
 *      do until gcd(b, 0), where a = b and b = 0
 */
int get_gcd(int a, int b){
    if(b == 0)
        return a;
    return get_gcd(b, a % b); // eculidean algorithm
}

int main(void){
    int a = 10;
    int b = 50;
    printf("gcd of %d and %d is %d.\n", a, b, get_gcd(a, b));
}
