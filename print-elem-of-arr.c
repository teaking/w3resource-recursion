
/*
 * 4 print the array elements using recursion. 
 */

#include <stdlib.h>
#include <stdio.h>

/*  print element stored inside array using recursive call.*/
void print_arr_elm(int *a, int index, int size){
    if(index < size){
        printf("\t %d", *(a + index));
        ++index;
        print_arr_elm(a, index , size);
    }

}
int main(void){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int size = sizeof(a) / sizeof(int);
    print_arr_elm(a, 0, size);
}
