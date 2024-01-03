C - Stacks, Queues - LIFO, FIFO

Project Overview
This project, C - Stacks, Queues - LIFO, FIFO, is part of Holberton School's curriculum and is meant to be done in teams of 2 people. The team for this project consists of Sarah Boutier and Jonathan Huybrechts. The purpose of this project is to create an interpreter for Monty ByteCodes files.

Table of Contents
Project Overview
Table of Contents
Project Description
Learning Objectives
Requirements
GitHub Repository
Data Structures
Compilation & Output
Tests
The Monty Language
Tasks
Project Description
Monty 0.98 is a scripting language that is first compiled into Monty byte codes, similar to Python. It relies on a unique stack with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

Monty Byte Code Files
Files containing Monty byte codes usually have the .m extension. Each line in the file corresponds to an instruction, and there can be any number of spaces before or after the opcode and its argument. Blank lines are allowed in the file.

Example of Monty byte code file (bytecodes/000.m):

plaintext
Copy code
push 0
push 1
push 2
push 3
pall
Monty byte code files can contain blank lines (empty or spaces only), and any additional text after the opcode or its required argument is not taken into account.

Example of Monty byte code file with blank lines (bytecodes/001.m):

plaintext
Copy code
push 0 Push 0 onto the stack
push 1 Push 1 onto the stack

push 2
  push 3
                   pall

                           
push 4

    push 5    push    6        
pall This is the end of our program. Monty is awesome!
The Monty Program
The monty program is used to run Monty byte code files. Its usage is as follows:

plaintext
Copy code
monty file
file is the path to the file containing Monty byte code instructions.
The following rules apply when using the monty program:

If the user does not provide a file or provides more than one argument, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE.

If the file cannot be opened, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE, where <file> is the name of the file.

If the file contains an unknown instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE, where <line_number> is the line number where the unknown instruction appears.

If malloc fails to allocate memory, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.

The monty program runs the byte codes line by line and stops if any of the following conditions is met:

It executed every line of the file.
It encounters an error in the file.
An error occurs during execution.
Compilation & Output
The monty program is compiled using the following command:

plaintext
Copy code
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
Any output from the program must be printed to stdout.
Any error messages must be printed to stderr.
Tests
Collaboration between team members is encouraged for creating a set of tests to ensure the correctness of the program.

Learning Objectives
By the end of this project, you should be able to explain the following concepts without the help of external resources:

What LIFO and FIFO mean
What a stack is and when to use it
What a queue is and when to use it
Common implementations of stacks and queues
Common use cases of stacks and queues
The proper way to use global variables
Requirements
Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic
All your files should end with a new line
A README.md file, at the root of the folder of the project, is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are allowed to use a maximum of one global variable
No more than 5 functions per file
You are allowed to use the C standard library
The prototypes of all your functions should be included in your header file called monty.h
Don't forget to push your header file
All your header files should be include guarded
GitHub Repository
There should be one project repository per group. If you clone, fork, or create a project repository with the same name before the second deadline, you risk receiving a score of 0%.
Data Structures
Please use the following data structures for this project





