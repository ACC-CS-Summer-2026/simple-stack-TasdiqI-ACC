/* *************************************************
*  Name: Tasdiq Islam
*  Assignment: Assignment 4, Simple Int Stack
*  Purpose: Defines the interface for a simple
*           array-based integer stack ADT.
************************************************* */

#ifndef STACK_H
#define STACK_H

#include <stdexcept>

#define STACK_SIZE 10

class Stack {
public:

    /**********************
    * Constructors/Destructor
    ***********************/
    Stack();

    /**********************
    * Getters/Accessors
    ***********************/

    /**********************
    * Setters/Mutators
    ***********************/

    /**********************
    * Printing Methods
    ***********************/

    /**********************
    * Methods
    ***********************/
    bool push(int);
    int pop();
    int peek();
    bool isEmpty();

private:

    /**********************
    * Attributes
    ***********************/
    int stack[STACK_SIZE];
    int top;

};

#endif //STACK_H