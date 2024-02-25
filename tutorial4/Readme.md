## Tutorial 4

In this tutorial we will see dynamic memmory allocation

### Pointers dynamic allocation 
pointers are special data type that used to store memorie adress of variable, we can have pointer to any data type in C to make pointer we just use `*` after the variable type example `int* p`  
pointer are useful when we want to create  variable with dynamic size like growing array , to make this type of variable we first need to create pointer for it then we use `malloc` or `calloc` to get space from the memory for variable 
* calloc will return space full of 0
* malloc will just give use random free space from memory  
then if we can access this mermory and changing it using deferencing operateur ,and if we want resize it and get more memory we use `realloc`  
always after finishing work with allocated memory we have to free it and return it so other programes can use it and we do that using `free`
#### Example 
```C
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
    free(arr);
```
### String
string are just array of character in C we can create string by creaating pointer for `char` type and then we give it size that we want our string to fit then we just iterate over it end assigne the characters we want to it 
#### Example
```C
    char* s;
    int l=2;
    s=malloc(sizeof(char)*l);
    *s='a';
    *(s+l-1)='\0';
    l=10;
    s=realloc(s,sizeof(char)*(l+1));
    *(s+1)='l';
    *(s+2)='i';
    *(s+3)=' ';
    *(s+4)='g';
    *(s+5)='h';
    *(s+6)='a';
    *(s+7)='n';
    *(s+8)='o';
    *(s+9)='o';
    printf("%s\n",s);
    free(s);
```