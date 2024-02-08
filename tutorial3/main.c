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
    // loops
    for (int i=0;i<10;i++){
        printf("%d \n",i*i);
    }
    char answer;
    while(answer!='q'){
        printf("hello\n");
        scanf("%c",&answer);

    }
    int d=10;
    do{
        printf("%d",d);
        d++;
    }while(d<10);
    return 0;
}