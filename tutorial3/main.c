/* 
 * in this tutorial we will see control branch loops and match switch
 * we can control how our code work using if else if else
 * we make different statement work based in different case of a value using switch
 * we repeate a branch of code using loops (while ,for ,do while)
 * */
#include <stdio.h>
int main(){
    // conditions
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if (a>b){
        printf("a bigger then b\n");

    }else if(a==b){
printf("number equal \n");
    }else{
printf("b bigger then a\n");
    }
    char c='1';
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
        default:
        printf("other digit\n");
    }
    // loops
}