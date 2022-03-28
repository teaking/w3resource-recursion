/*
 * 5 count the digits of a given number using recursion
 */

#include <stdlib.h>
#include <stdio.h>
/* 
 * counts the digit of given number. 
 * divides 10 on each recursive iteration 
 * let digit be 1299 then:
 *  1299 / 10 = 129
 *  129  / 10 = 12
 *  12   / 10 = 1
 *  1   /  10 = 0.1
 *  therefore 4 digits
 * */
int doCount(int cnt, int n){
    if(n  <= 0){ 
        return cnt;
    }
    return doCount(++cnt, n / 10);
}
int main(void){
    int cnt;
    int num;
    num = 50000;
    cnt = doCount(0, num);
    printf("\nCounting the digit of %d. There are %d Digit.", num, cnt);

}
