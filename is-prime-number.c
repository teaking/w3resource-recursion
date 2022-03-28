/*
 * check a number is a prime number or not
 * prime number should not be multiples of any number except 1.
 */

#include <stdlib.h>
#include <stdio.h>
/*  test if the provided num is prime number. 
 *  primality: number is prime if and only if the number can be perfectly 
 *      divisible by 1 or itself.
 *
 *  test if the num is perfectly divisible by any number below num/2 
 *      (any value above num/2 will result higher values which are not in our range)
 *  if there is such number (let be x) that perfectly divides num then 
 *      it shows x * (num % x) = num therefore is not prime number.
 *
 *  return 0 if the provided num is prime number 
 *  return 1 if the provided num is not prime number.
 *  */
int isPrime(int x, int num){
    if(x <= 1)
        return 0;
    else if((num % x) == 0)
        return 1;
    return isPrime(--x, num);
}

int main(void){
    int n;
    /*  test if 'n' is prime number */
    for(n = 1; n < 100; ++n){
        if(isPrime(n/2, n) == 0){
            printf("%d is prime number.\n", n);
        }else{
            printf("%d is not prime number.\n", n);
        }
    }

}
