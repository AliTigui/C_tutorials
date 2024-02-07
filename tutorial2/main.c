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
int poww(int n,int b);
int main(){
    int a=4;
    int b=5;
    greeting();
    sum(a,b);
    printf("a= %d b =%d before swap\n",a,b);
    swap(&a,&b);
    printf("a= %d b =%d after swap\n",a,b);
    printf("max is %d \n",max(a,b));
    printf("the number %d to power of %d is %d \n",a,b,poww(a,b));

}
void greeting(void){
printf("hello\n");
}
void sum(int a,int b){
    printf("sum equal to %d \n",a+b);
}
void swap(int*a,int* b){
    int t=*(a);
    *a=*b;
    *b=t;
}
int max(int a,int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}
// recursive function
int poww(int n,int b){
    if(b==1){
        return n;
    }
    else{
        return n*poww(n,b-1);
    }
}