/* 
 * in this tutorial we will see different types of functions 
 * function that don't return value or get parametre
 * function that get parametre
 * function thet get parametre and return value
 * recursive function
 * also passing real value to functionswith pointer
 */
#include <stdio.h>
void greeting(void);
void sum(int a,int b);
void swap(int*a,int* b);
int max(int a,int b);
int main(){
    int a=4;
    int b=5;
    greeting();
    sum(a,b);
    printf("a= %d b =%d before swap",a,b);
    swap(&a,&b);
    printf("a= %d b =%d after swap",a,b);
    printf("%d",max(a,b));

}
void greeting(void){
printf("hello");
}
void sum(int a,int b){
    printf("sum equal to",a+b);
}
void swap(int*a,int* b){
    int t=*(a);
    *a=*b;
    *b=t;
}