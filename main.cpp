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



    std::cout << "\nTesting normal push operations." << std::endl;

    std::cout << "Push 10: " << stack.push(10) << std::endl;
    std::cout << "Push 20: " << stack.push(20) << std::endl;
    std::cout << "Push 30: " << stack.push(30) << std::endl;

    std::cout << "\nTesting peek." << std::endl;
    std::cout << "Top value: " << stack.peek() << std::endl;

    std::cout << "\nTesting pop operations." << std::endl;
    std::cout << "Pop: " << stack.pop() << std::endl;
    std::cout << "Pop: " << stack.pop() << std::endl;
    std::cout << "Pop: " << stack.pop() << std::endl;

    std::cout << "\nStack empty after pops: "
              << stack.isEmpty() << std::endl;


    std::cout << "\nTesting overflow." << std::endl;

    int i;

    for (i = 0; i < STACK_SIZE; i++) {
        std::cout << "Push " << i << ": "
                  << stack.push(i) << std::endl;
    }

    std::cout << "Overflow push: "
              << stack.push(999) << std::endl;

    std::cout << "\nTesting operations while stack is full." << std::endl;
    std::cout << "Peek full stack: " << stack.peek() << std::endl;
    std::cout << "Pop full stack: " << stack.pop() << std::endl;
    std::cout << "Push after one pop: " << stack.push(1000) << std::endl;


    std::cout << "\nRandom testing." << std::endl;

    srand(time(0));

    int operation;

    for (i = 0; i < STACK_SIZE * 100; i++) {
        operation = rand() % 3;

        if (operation == 0) {
            stack.push(rand() % 1000);
        }
        else if (operation == 1) {
            try {
                stack.pop();
            }
            catch (std::underflow_error &error) {
            }
        }
        else {
            try {
                stack.peek();
            }
            catch (std::underflow_error &error) {
            }
        }
    }

    std::cout << "Random testing complete." << std::endl;

    return 0;
}