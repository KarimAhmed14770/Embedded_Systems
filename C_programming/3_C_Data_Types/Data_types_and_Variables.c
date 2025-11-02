#include <stdio.h> 

/*There is no string datatype in C, only array of characters*/

/*Variable declaration:
extern datatype variable_name;*/

/*Variable defintion:
datatype variablename=value;*/

/*what is the difference between variable definition and variable declaration?
a variable definition means that there is a space in memory allocated for this variable, 
variable declaration tells the compiler that there is a variable by this name, but does not allocate 
for it a place in memory*/

unsigned short test;/*when the compiler hits this line, it goes in memory and reserve a place of 2 bytes,
for the variable test, test is then the identifier for this place in memory, and it holds the value stored
in binary format*/

/*extern:The extern keyword is a storage class specifier used to declare a variable or function that is
defined in another file (or another part of the current file).
What it does: It tells the compiler, "The actual memory for this variable has been allocated elsewhere.
Don't worry about allocating memory here; just remember its name and type so I can use it."
Purpose: It allows you to share global variables between different source files in a multi-file C project
without causing multiple definition errors during the linking stage.*/

/*example*/
extern unsigned int data;//this variable is defined in file2.c,but here it is only declared
int main(){


    printf("%d\n",data);
    
    /*sizeof operator: when dealing with a compiler you should know the size it sets for each datatype*/
    printf("sizeof(char):%d\n",sizeof(char));
    printf("sizeof(short int):%d\n",sizeof(short int));
    printf("sizeof(int):%d\n",sizeof(int));
    printf("sizeof(long int):%d\n",sizeof(long int));
    printf("sizeof(long long int):%d\n",sizeof(long long int));
    printf("sizeof(float):%d\n",sizeof(float));
    //there is nothing called long float or short float, this will give syntax error
    printf("sizeof(double):%d\n",sizeof(double));
    printf("sizeof(long double):%d\n",sizeof(long double));
    

    /*Format specifiers: in memory data is always represented in binary form, format specifiers, is just
    the way the data will be represented*/

    signed char number =-100;/*the compiler sees char and reserves 1 byte in memory, sees
    signed and indicates a 2's complement method for representation,so in memory it is stored as
    0b10011100 which is 0x9C 0o234 and 156 in decimal and ascii code for a charcter*/
    printf("%d\n",number);/*read it as a signed integer*/ 
    printf("%i\n",number);/*read it as a signed integer*/
    printf("%u\n",(unsigned char)number);/*read it as an unsigned integer*/
    printf("%x\n",(unsigned char)number);/*read it as a hexadecimal*/
    printf("%o\n",(unsigned char)number);/*read it as an octal*/
    printf("%c\n",number);/*read it as a character*/
    /*we used explicit casting, with %u and %o and %x,because integer promotion is automatically 
    done by printf so it upgrades the signed char of 1 byte, to signed int of 4 bytes, and this makes a
    problemm when displaying %u or %x or %o because they depend on the bit size, so we explicitly type-cast
    the value that is interpreted by the format specifier*/
    
    /*Integer promotion:Integer promotion in C is a set of implicit conversion rules that automatically 
    convert certain small integer types to a standard integer type (int or unsigned int) before 
    arithmetic operations or function calls are performed.*/
    signed char Num1=0XF2;
    unsigned char Num2=0XF2;
    if(Num1==Num2) 
        printf("Equal\n");
    else
    printf("not equal\n");
    /*why does it print not equal?
    The core issue is that the comparison Num1 == Num2 is performed using int data types, not the 
    original char types.1. Initial Values in Memory (1 Byte)Both Num1 and Num2 hold the same 8-bit 
    pattern:Hex value 0XF2 is binary 11110010.Num1 (signed char): The leading 1 indicates a negative 
    number. Its decimal value is -14.
    Num2 (unsigned char): The 8 bits are read as a positive number. Its decimal value is 242.
    Before the comparison (Num1 == Num2) is executed, the C standard requires both operands to be promoted to the common type of int.
    This promotion determines the final values being compared:
    Num1 (Signed)Sign Extension: The leading sign bit (1) is copied to fill the upper 24 bits.0xFFFFFFF2
    Num2 (Unsigned)Zero Extension: The upper 24 bits are filled with zeros.	0x000000F2
    The if statement compares the two 32-bit integer values
    to make them equal explicit cast one of them*/

    /*variable list*/
    char num3=2,num4=5;
    printf("%d %i",num3,num4);
    

    
    return 0;
}