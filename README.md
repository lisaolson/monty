# C - Stacks, Queues
The goal for this project is to understand stacks and queues through use of monty code byte files.

### Project Concepts
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables
- How to work with git submodules

### Requirements
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called monty.h
- All your header files should be include guarded

### Installation
``` git clone git@github.com:lisaolson/monty.git ```

### Compilation
``` gcc -Wall -Werror -Wextra -pedantic *.c -o monty ```


### File Descriptions
| File | Description |
| ------------- |:-------------:|
| monty.h | header file containing all file prototypes |
| main.c | Entry point |
| add.c | adds the top two elements of the stack |
| div.c | divides the second top element of the stack by the top element |
| free_dlist.c | fress doubly linked list
| mod.c | computes the rest of the division of the second top element of the stack by the top element |
| mul.c | multiplies the second top element of the stack with the top element |
| nop.c | blank return |
| opcodes.c | Loops through struct to find command |
| pall.c | prints all values on the stack, starting from the top |
| pint.c | prints the value at the top of the stack |
| pop.c | removes the top element of the stack |
| push.c | pushes an element to the stack |
| sub.c | subtracts the top element from the stack from the second top element |
| swap.c | swaps the top two elements of the stack |

#### Author
Lisa Olson
