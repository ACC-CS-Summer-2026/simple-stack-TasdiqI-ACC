/* *************************************************
*  Name: Tasdiq Islam
*  Assignment: Assignment 4, Simple Int Stack
*  Purpose: Implements the methods for a simple
*           array-based integer stack ADT.
************************************************* */

#include "stack.h"

Stack::Stack() {
    /* *********************************
    * Sets the stack to an empty state.
    *
    * @param na : na
    * @return na : na
    * @exception na : na
    * @note top is set to -1 because top < 0 means empty.
    * *********************************/
    top = -1;
}

bool Stack::isEmpty() {
    /* *********************************
    * Tests whether the stack is empty.
    *
    * @param na : na
    * @return bool : true if the stack is empty, false otherwise
    * @exception na : na
    * @note na
    * *********************************/
    return top < 0;
}

bool Stack::push(int value) {
    /* *********************************
    * Pushes a value onto the stack.
    *
    * @param int value : value to push
    * @return bool : true if successful, false if full
    * @exception na : na
    * @note na
    * *********************************/
    if (top == STACK_SIZE - 1) {
        return false;
    }

    top++;
    stack[top] = value;

    return true;
}

int Stack::pop() {
    /* *********************************
    * Removes and returns the top value.
    *
    * @param na : na
    * @return int : top value
    * @exception underflow_error : stack is empty
    * @note na
    * *********************************/
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty");
    }

    int value = stack[top];
    top--;

    return value;
}

int Stack::peek() {
    /* *********************************
    * Returns the top value without removing it.
    *
    * @param na : na
    * @return int : top value
    * @exception underflow_error : stack is empty
    * @note na
    * *********************************/
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty");
    }

    return stack[top];
}