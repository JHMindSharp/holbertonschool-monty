![MONTY](https://image.noelshack.com/fichiers/2024/01/4/1704324197-dall-e-2024-01-04-00-22-34-a-4k-resolution-image-featuring-monty-bytecode-in-a-neon-style-the-image-showcases-a-large-bright-neon-sign-with-the-words-monty-bytecode-in-bol.jpg)


# Monty Bytecode Interpreter

This project is a Monty bytecode interpreter written in C. Monty 0.98 is a scripting language that is first compiled into Monty bytecodes, which are then interpreted by this program. This interpreter can handle a variety of operations such as pushing, popping, and performing calculations on a data structure known as a "stack".

## Team Members

- Sarah Boutier
- Jonathan Huybrechts

## Features

- Stack (LIFO) and Queue (FIFO) Modes
- Monty bytecode support
- Implementation of opcodes: 
  - `push`: Pushes an element to the stack
  - `pall`: Prints all the values on the stack
  - `pint`: Prints the value at the top of the stack
  - `pop`: Removes the top element of the stack
  - `swap`: Swaps the top two elements of the stack
  - `add`: Adds the top two elements of the stack
  - `nop`: Does nothing

## Requirements

- Ubuntu 20.04 LTS
- gcc, using the options `-Wall -Werror -Wextra -pedantic`
- Max one global variable
- All functions must be included in `monty.h`

## Installation

Clone this repository:
git clone [https://github.com/Miniknacky/holbertonschool-monty.git]

## Compilation

Your code will be compiled this way:

$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty


## Usage

./monty file

Where `file` is the path to the file containing Monty byte code.

## Data Structures

The following data structures are used in this project:

### stack_s
Doubly linked list representation of a stack (or queue).

### instruction_s
Opcode and its function.

## Testing

Extensive testing is recommended to ensure all parts of the program function as expected.

## Acknowledgments

- Julien Barbier, for the project requirements and guidance.
- Holberton School, for the project framework and support.
