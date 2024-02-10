
## Tutorial 1

In this tutorial we will see C data types we will see:
### Data types 
* ``char`` it represent single character, it cost 1 byte in memory and use **Ascii** encoding 
* ``int`` it represent Integer using it in operations will generate interger
  for exemple if we devide 4/3 we get1
* ``float`` it used to represent floated point number like 3.14 
* ``long`` it same as int but it store more data that mean we can represent bogger number
* ``double`` floating point number with double precision it represents floating number with more precision and use more memory 
* array exemple ``int a[4];`` ,``int arr[]={4,5,7}`` or ``char a[]="hello";``.Array used to store multiple value of same type in one variable there is two type of arrays , fixed size like those two or dynamic size array we will see it later when we see pointer. we access element of array using indexing first element is index 0 ``arr[0]``
### Arithmetic Operators

Arithmetic operators used to make formula or do some math with our variables ,the way of how those operator change depend on the data type , the operators that we can have in C are :
* Addition **+** used to add 2 operand together but one we have ``char`` it add them by their ASCII encoding and return char with this acsii encoding
* Soustraction **-** work with same logice as addition
* Multiplication **\*** multiply two number together this opeeator don't work with ``char``
* Division **\\** . division for ``float`` or ``double`` give the exact result but for ``int`` or ``long`` it return natural number ir remove numbers after the floating point **it doesn't round the result**
* Modulo **%** it return the rest of divition it work only with ``int`` and ``long``
### Comparison Operators
those operator used to compare tow operand
* Equality we can check equality usong ``==``
* Inequality we can check inequality using ``!=``
* Greater then we can check if operand 1 greater then operand 2 using ``>``
* Smaller then we can check if operand 1 smaller then operand 2 using ``<``
* Smaller then or equal and greater then or equal we can check those using ``<=``, ``>=`` respectively 

### Logical Operators
logical operator used ro chain many conditions or logic result together 
* Logical **and** we can exprim that using ``&&`` , it return true only if all oprands are true 
* Logical **or** we can exprim it using ``||`` , it return false only if all oprand are false 
* Negation ``!``  it flip the result if it true we get false if it false we get true 
### Comments
Comment are line of code that the compiler will skip and don't compile. we write comment for use and other developers . they can be as todo list or hint to use to remember how the code work . in C there is 2 type of comment 
* One line comment we can make that usong ``\\this will be comment untile end of the line``
* Multiple line comment we can write that using ``\* the comment line here*\``
* 
