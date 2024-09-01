# Final Project -  SetLang Compiler 

**Welcome to my Compiler!**
The project involves creating a programming language called SetLang, which compiles to C . SetLang introduces unique data types such as set and collection to handle sets of integers and strings, allowing operations like union, difference, and intersection similar to traditional mathematical sets. The language supports typical control structures like if, while, and for, along with input/output operations. The project showcases practical applications through example programs, demonstrating SetLang’s capabilities in managing and manipulating sets, making it suitable for tasks that involve complex data manipulation with a focus on simplicity and readability​


 > **Before you start**
** make sure :
- GNU Bison (version 3.8.2 or later)
- Flex
- GCC 
- Make

1. [x] Download the code from Git-Hub https://github.com/deanitzhak/EZWait.git
2. [x] Cd to the working directory and start the server using the following command in the
3. [x] open an ubuntu enviroment
4. [x] Make sure to install all the dependencies by the action sudo apt-get install bison flex gcc make
5. [x]   Build the project by running the action make
 
> **Instructions**
Files explenation
setlang.y:          The Bison file defining the grammar.
setlang.l:          The Flex file defining the lexical analysis.
ALL_Data.h:      Handles data structures for variables and operations.
statement.h:        Manages statements and control flow.
helpers.h:          Contains helper functions for processing input and managing memory.
errors_handler.h:   Handles error reporting and recovery.
Makefile:           for automatioc build.



> **How to Use**

  1.  for running example called example_program_1.txt run the action:
    ./setlang example_program_1.txt

2.  for running example called example_program_2.txt run the action:
    ./setlang example_program_2.txt


**License** 
This project is licensed under the MIT License - see the LICENSE file for details.



> **Created By: **

* Shir Amar


