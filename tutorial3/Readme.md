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
### Short hand of else statement
sometime we want use if statement only to return value based on condition we can use that with nrml `if` `else` but we will just write big block of code for simple functionality , the other aproch is to use **ternary operator** and it work like this `testCondition ? expression1 : expression 2;`
#### Example 
(age >= 18) ? printf("Can Vote") : printf("Cannot Vote");
### Switch case
Sometimes we want chose defferent statement to excute based on value of a **char** or **int** we can do that using `if` `else` but there is another aproch faster then this it by using switch case statement  
switch case work only with char and int first we pass the variable to the switch then we make defferent case each one have statement and branch to of code that we want to excute when the variable value match the case 
at the end of each case we need to use break so our problem will not jumt to the next case if we want to match many case we just write them inside each others without the break  
we can add the default and that mean the  code inside it will work when value don't match any of the cases  
#### Exemple
```C
    char c='6';
    // switch case work only with char or int
    switch(c){
        case '1':
        printf("one\n");
        break;
        case '2':
        printf("two\n");
        break;
        case '3':
        printf("three\n");
        break;
        case '4':
        printf("four\n");
        break;
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        printf("digit bigger then 4\n");
        break;
        default:
        printf("not digit\n");
    }
```
