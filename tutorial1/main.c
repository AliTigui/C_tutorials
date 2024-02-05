#include <stdio.h>
#include <stdlib.h>
/*
 * data type in C are int, float, char
 * arithmitic operations are +, -, *, /, %
 * logical operator are && || !
 * array used to store many value of same size
 * we get input using scanf
 * we print using printf
 * 
*/
const int CONSTANT=4;// we declare constant using const
// code must have main() it the starting point 
int main(){
    int a=4;
    float b=4;
    char c='A';
    char string[20];
    int arr1[100]={0};// initialize array with 0 
    int arr2[]={0,4,5,8,9}; // create array with element
    int arr3[100]={[1 ... 99]=1};// create array size 100 and initialize value with index from 1 to 99 with 1
   
    printf("hello world\n");
    scanf("%i",&a);
    printf("%i\n",a);

    // get string from user 
    /* 
     * to get string we can use scanf() but it will not read string with spaces 
     * we can fix that using regular expression in scanf() %[^\n]%*c
     * to make this work we need add scanf("\n")
    */
    scanf("\n");
    scanf("%[^\n]%*c",string);
    printf("%s\n",string);
    return 0;
}