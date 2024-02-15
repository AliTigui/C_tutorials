## Tutorial 1

In this tutorial we will work with functions:
### define function
to define functiom in C we need function to declare the function return type and if it take paremetre we need to declare the paremeter types  
to return value frome function we use the return keyword 
#### Exemple
``void greeting(void){  
    printf("hello");  
}  ``  
this function don't take parametre or return a value  
#### Remarque 
when we create function we have to declare them before the main function  
sometime that make it hard to read the code so we can declare just the name and return type and parametre type before main and rest of the function after main
### Function that parametre and return value
to make function take parametre we use type of parametre and then the name of parametre then our code will make copy of data that we send to the function and use it in the function body  
to return value from function we declare type that the function should return before the function name then when we want to return the value we just use the return keyword 
#### Exemple
``int max(int a,int b){  
    if (a>b){  
        return a;  
    }  
    else{  
        return b;  
    }  
}``  
### Pass argument to function by reference
when we pass variable to a function we get just a copy of them if we change them inside the function body the change will not apply after the function and , to fix that we have to use pointer and pass value to function by reference that mean we pass pointer that have reference to the variable  
#### Exemple 
``int max(int a,int b){  
    int tmp=a;  
    a=b;  
    b=tmp;  
}``  
this code will change the the variable and swap them only inside the function cuz code make copy of the variables and don't take the real variable to make it work we use reference and pointer  
``void swap(int*a,int* b){  
    int t=*(a);  
    *a=*b;  
    *b=t;  
}``  
and to call the function we use ``swap(&a,&b) ``  
