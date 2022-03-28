/*
 * 6 find the sum of digits of a number using recursion.
 */

#include <stdlib.h>
#include <stdio.h>
/*  returns the sum of digit.
 *  let number be 123
 *  then 
 *  123 % 10 = 3 and 123 / 10 = 12
 *  12  % 10 = 2 and 12  / 10 = 1
 *  1   % 10 = 1 and 1   / 10 = 0.1
 *  therefore 3 + 2 + 1 = 6
 *  */
int get_sum_of_digit(int n){
    if(n <= 0){
        return 0;
    }
    return n % 10 + get_sum_of_digit(n / 10);
}

int main(void){
    int sum;
    int n = 123;
    sum = get_sum_of_digit(n);
    printf("sum of digit of %d is %d.\n", n, sum);

}
