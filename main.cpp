#include <assert.h>
#include "src/calculator.h"

int main() {
    // Simple addition
    assert(calculator(2, '+', 2) == 4);
    // Addition with negative integers
    assert(calculator(-2, '+', -2) == -4);
    // Addition with a negative and a positive integer
    assert(calculator(2, '+', -2) == 0);

    // Simple subtraction
    assert(calculator(4, '-', 2) == 2);
    // Subtracting zero
    assert(calculator(2, '-', 0) == 2);
    // Subtracting from zero
    assert(calculator(0, '-', 2) == -2);
    // Subtracting positive from negative
    assert(calculator(-2, '-', 2) == -4);
    // Subtracting negative from positive
    assert(calculator(2, '-', -2) == 4);
    // Subtracting negative from negative
    assert(calculator(-2, '-', -2) == 0);

    // Simple multiplying
    assert(calculator(5, '*', 2) == 10);
    // Multiplying by zero
    assert(calculator(2, '*', 0) == 0);
    // Multiplying with a negative number
    assert(calculator(2, '*', -2) == -4);
    // Multiplying a negative with a negative
    assert(calculator(-2, '*', -2) == 4);

    // Division resulting in remainder
    assert(calculator(5, '/', 3) == 1);
    // Division by one
    assert(calculator(5, '/', 1) == 5);
    // Dividing a negative number
    assert(calculator(-4, '/', 2) == -2);
    // Dividing by a negative number
    assert(calculator(4, '/', -2) == -2);
    // Dividing zero
    assert(calculator(0, '/', 2) == 0);
    // Dividing by zero
    assert(calculator(2, '/', 0) == 1);

    // Invalid operator
    assert(calculator(2, 'a', 0) == 1);

    return 0;
}
