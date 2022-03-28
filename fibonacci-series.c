/*
 *  3 print Fibonacci Series using recursion. 
 */

#include <stdlib.h>
#include <stdio.h>

/*  print fibonacci sequence
 *  in fibonacci sequence next number is sum of previous two terms.
 *  fibonnaci sequence:
 *  1
 *  (0 + 1) = 1
 *  (1 + 1) = 2
 *  (1 + 2) = 3
 *  ...
 *  (n - 1) + (n) = ?
 *
 *  */
void fibo(int s1, int s2, int count, int end){
    if(count <  end){
        printf("\t %d", s2);
        fibo(s2, s1 + s2, ++count, end);
    } 
}

int main(void){
    /* printf("\t 1"); */
    fibo(0, 1, 0, 10);


}
