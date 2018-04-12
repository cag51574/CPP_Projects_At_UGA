Cameron Garratt (810-382-829)

## Instructions

To compile this code, simply type:

$ make compile

To run the code with the sample test cases, type:

$ make run

To clean the directory, type:

$ make clean

This program takes input from the command line and interprets it to produce a list of
   all possible combinations, the 5 input integers could be put together
   without repeating, using either arethmetic or bitwise operators,
   to equal the end result (also input from the command line). 

There are several flags that are recognized from the command line.
The "-a" flag tells the program to use arethmetic operators.
The "-b" flag tells the program to use bitwise operators.
The "-v" flag tells the program to take the next 5 inputs as the integers
   to be used in the calculation.
The "-e" flag tells the program to take the next integer from the command line and
   use that as the number the five integers should equal after the operators
   have been applied.
The flags can be input on the command line in any order, and the program will
   still work, assuming that the integers are input correctly after the correct flag. 


## Quote

There are 10 types of people in this world.
Those who understand binary and those who don't.