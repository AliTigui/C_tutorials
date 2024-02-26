#include<stdio.h>
#include<string.h>
/* 
 * in this tutorial we will see
 * how to make structure
 * how to define type
 * how to use structure with pointers
 * */
 
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
};
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
int main(){

struct MyStructure s;
enum Level myv=MEDIUM;
s.myNum=4;
s.myLetter='C';

printf("enum %d",myv);

   Book book;
 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
 
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);


    return 0;
}