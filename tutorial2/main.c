/* 
 * in this tutorial we will see different types of functions 
 * function that don't return value or get parametre
 * function that get parametre
 * function thet get parametre and return value
 * recursive function 
 * function that take another function
 * also passing real value to functionswith pointer
 * and in last function with unfixed size of argument 
 */
#include <stdio.h>
#include <stdarg.h>
void greeting(void);
void sum(int a,int b);
void swap(int*a,int* b);
int max(int a,int b);
int poww(int n,int b);
int do_fun(int a,int b,int (* fun)(int a,int b));
int min(int count ,...);
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
    printf("min is %d \n",min(6,1,0,3,4,1,5));
    printf("min is %d",do_fun(a,b,max));
    return 0;

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
// function with unfixed size of argument
/* 
 * to create iw we need make last parametre of our function ...
 * then touse those parametre we need to include stdarg.h
 * we create pointer to our argument using va_list
 * we initialise it using va_start(ptr,size)
 * then every time we call va_arg(ptr, int) we will acces to the next value of our argment list
 * at the end we add va_end(ptr)
 * */
int min(int count,...) {
    
        va_list ptr;
        va_start(ptr, count);
        int min = va_arg(ptr, int);
        int tmp;
    for (int i = 0; i < count; i++){
        tmp=va_arg(ptr, int);
        if(min>tmp){
            min=tmp;
        }

        
 }
    va_end(ptr);
    return min;
}
int do_fun(int a,int b,int (* fun)(int a,int b)){
    return fun(a,b);
}

