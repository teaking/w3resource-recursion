/*
 * find lcm of two numbers.
 * lcm : find smallest common multiple between given two numbers
 * e.g. let two number be 16 and 20 then 80 is the smallest common multiple of 16 and 20. 
 *
 * lcm formula using gcd.
 *  lcm(a, b) = (a * b)/gcd(a, b).
 */

#include <stdlib.h>
#include <stdio.h>


int get_gcd(int a, int b){
    if(b == 0)
        return a;
    return get_gcd(b, a % b);
}
/*  get lcm using the gcd. 
 *  lcm(a, b) = (a * b) / gcd(a, b)
 *  returns lcm value
 *  */
int get_lcm_gcd(int a, int b){
    return ((a * b) / get_gcd(a, b));
}

/* search the common multiples of a and b.
 * returns the first common multiples i.e. lcm
 *  */
int get_lcm(int a, int b){
    static int x = 0;
    x += b; 
    if((x % a) == 0 && (x % b) == 0){ /*  find the common multiple */
        return x;
    }
    return get_lcm(a, b);
}

int main(void){
    int lcm, a, b;
    a = 4;
    b = 6;
    lcm = (a < b) ? get_lcm(a, b) : get_lcm(b, a);
    printf("lcm of %d and %d is %d.\n", a, b, lcm);
    printf("lcm of %d and %d using gcd %d.\n", a, b, get_lcm_gcd(a,b));
}
