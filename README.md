# Fibonacci
first 50 Fibonacci numbers using recursive and iterative approach

Please explain in brief which approach is better and why and any other issues you have to deal with.

Here in the case of fibonacci number iteration became faster and recursion became slower as we are trying to print the value 
of large number. Although for the smaller number, recursion is faster but we are moving toward the large number, it is becoming slower.

When you keep calling the function again itself, the compiler will keep allocates new stack for new functions. That 
stack would be using to keep function states, variables and addresses. And this process is keep going till the compiler
meet the base condition and then return from the base condition. In the process section, data size becomes larger, 
compiler needs large stack segment to complete the process need of memory. Even, Compiler does not know about the how much 
memory is remaining during the compile time.

Aforementioned that reaching and returning from the base condition, will require store and load instruction and also, doing to/from 
memory is always slower. That's why recursion is slower that iteration here.
