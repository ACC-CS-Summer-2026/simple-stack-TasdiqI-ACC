/* *************************************************
*  Name: Tasdiq Islam
*  Assignment: Assignment 4, Simple Int Stack
*  Purpose: Contains the driver and testing code
*           for the stack ADT.
************************************************* */

#include "main.h"

int main() {
    /* *********************************
    * Tests all stack operations and states.
    *
    * @param na : na
    * @return int : application exit code
    * @exception na : na
    * @note na
    * *********************************/

    Stack stack;

    std::cout << "New stack created." << std::endl;
    std::cout << "Stack empty: " << stack.isEmpty() << std::endl;

    std::cout << "\nTesting underflow with pop." << std::endl;

    try {
        stack.pop();
        std::cout << "ERROR: pop allowed on empty stack." << std::endl;
    } catch (std::underflow_error &error) {
        std::cout << "SUCCESS: pop blocked on empty stack." << std::endl;
    }

    std::cout << "\nTesting underflow with peek." << std::endl;

    try {
        stack.peek();
        std::cout << "ERROR: peek allowed on empty stack." << std::endl;
    } catch (std::underflow_error &error) {
        std::cout << "SUCCESS: peek blocked on empty stack." << std::endl;
    }

    return 0;
}