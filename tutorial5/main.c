#include<stdio.h>
/* 
 * in this tutorial we will see
 * how to make structure
 * how to define type
 * how to use structure with pointers
 * */
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
};

int main(){

struct MyStructure s;
struct myStructure s1 = {13, 'B'};
s.myNum=4;
s.myLetter='C';

printf("structur letter is %c",s.myLetter);


    return 0;
}