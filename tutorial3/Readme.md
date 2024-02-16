## Tutorial 3

In this tutorial we will see control flow , switch case and loops:

### Control flow
we can control how our program should work and define many ways that our code follow depend in some condition using `if` `if else` statement  
when we use `if` `else if` statement if the condition for the first if is true the programe will excute what inside it then exit else it will check next `else if` and do that again and again until it find one that evaluate as true or until it reach the `else`  
#### Exemple
```C
if (a>b){
        printf("a bigger then b\n");
    }else if(a==b){
        printf("number equal \n");
    }else{
        printf("b bigger then a\n");
    }
```  
### Pass argument to function by reference
when we pass variable to a function we get just a copy of them if we change them inside the function body the change will not apply after the function and , to fix that we have to use pointer and pass value to function by reference that mean we pass pointer that have reference to the variable  
#### Exemple 
```C
int max(int a,int b){  
    int tmp=a;  
    a=b;  
    b=tmp;  
}
```  
this code will change the the variable and swap them only inside the function cuz code make copy of the variables and don't take the real variable to make it work we use reference and pointer  
```C
void swap(int*a,int* b){  
    int t=*(a);  
    *a=*b;  
    *b=t;  
}
```  
and to call the function we use `swap(&a,&b) `  
### Recursive function
recursive function are special function that have ability to call theirself to make recursive function we just need to call the function inside it self  
for recursive function we need to make a bsae case it describe what the code should return when it hit special condition if we don't do that 
code will keep calling it self and that will cuz stack overflow and our programe will crash

#### Example
```C
int poww(int n,int b){
    if(b==1){
        return n;
    }
    else{
        return n*poww(n,b-1);
    }
}
```
### Function with arbitrary number of parametre
sometimes when we make function we don't know number of parametre that function should take or we want the function work with many parametre  (unlimited) we can make that with array reference but we have always to send with it number of element inside it also with this aproche those parametre should be same type to pass them ass array  
to solve this we create number function that accept arbitrary number of parametre ,to do that first we include `#include <stdarg.h>` then
we create function that accept arbitrary number of parametre using `int min(int count,...) ` first parametre here is number of arbitrary parametre and the second is `...` and that represent that after the parametre count we will pass arbitraty number of parametre  
then to access those parametre we initialize the pointer  `va_list ptr;` and `va_start(ptr, count);` that will initialize our pointer
then we start acceccing those parametre using `int min = va_arg(ptr, int);` we can create loop to access all those parametre and work with them 
and after we end we can close that pointer `using va_end(ptr);`

#### Example
```C
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
```
### Function that take other function as parametre 
we can make function that take other function as parametre for example we want make function that sort a collection of value but it sort in deferente way to avoid making big function with defferent flag and condition or to make defferent function for all case
we can make a sorting function that sort our collection and also functions that define how the sort will work  
#### Example 
```C
int do_fun(int a,int b,int (* fun)(int a,int b)){
    return fun(a,b);
}
```
this code take 2 parametre a and b and take a function that define what we want to do to those 2 parametre
then we just call the function and we pass to it the 2 variable ad the functio  
`printf("min is %d",do_fun(a,b,max));`