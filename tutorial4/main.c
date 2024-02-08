/*
 * in this tutorial we will see
 * pointer and how to use them
 * dynamic memory allocation
 * growing list 
 * 
 */
#include <stdlib.h>
#include <stdio.h>
int main(){
    // simple pointer and malloc exemple
    int* a ;
    a=malloc(sizeof(int));
    *(a)=4;
    int* b=a;
    *(b)=6;
    printf("%d \n",*a);
    free(a);
    // growing list withdynamic alocation
    int size = 1;
    int* arr=calloc(size,sizeof(int));//calloc will initialize valeus to 0
    *(arr)=1;
    size=10;
    arr=realloc(arr,size*sizeof(int));
    for (int i=0;i<10;i++){
        *(arr+i)=i+1;
    }
    printf("%d \n",*(arr+4));
    free(arr);
}