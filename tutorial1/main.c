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
    printf("hello world\n");
    scanf("%i",&a);
    printf("%i\n",a);
    return 0;
}