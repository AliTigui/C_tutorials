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
```
### Enum
enum are type of data that can hold multiple value like colors; choises.... we create enum same way as creating structure ; but enum differ is that it can have value represent a number for each choice
or it can be empty that mean enums value start from 0 and increase
#### Example
