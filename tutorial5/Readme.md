## Tutorial 5
In this tutorial we will see structur and enum and how to make our  type

### Structure
sometimes when working in complexe programme we need data type that can store collection od data which arn't in same type to do that we use structure  
we create structure outside the main function using `struct` keyword then we add the name of the structe and then inside `{}` we create the variables that our structure will use
#### Example
```C
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
};
int main(){

struct MyStructure s;
s.myNum=4;
s.myLetter='C';
return 0;
}
```
### Enum
enum are type of data that can hold multiple value like colors; choises.... we create enum same way as creating structure ; but enum differ is that it can have value represent a number for each choice
or it can be empty that mean enums value start from 0 and increase
#### Example
```C
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};
int main(){

enum Level myv=MEDIUM;

printf("enum %d",myv);
return 0;
}
```
### C typedef
The C programming language provides a keyword called typedef, which you can use to give a type a new name  
By convention, uppercase letters are used for these definitions to remind the user that the type name is really a symbolic abbreviation, but you can use lowercase   
You can use typedef to give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly 
```C
#include <stdio.h>
#include <string.h>
 
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
 
int main( ) {

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
```
