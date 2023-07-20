#include <stdio.h>

/**
 * main - Start from 2 as we already have the first two Fibonacci numbers.
 *
 * Return: Always 0 (Success)
 */

void print_fibonacci_sequence(int n) {
    int first = 1, second = 2, next;
    int count = 2;  // Start from 2 as we already have the first two Fibonacci numbers
    
    printf("%d, %d, ", first, second);
    
    while (count < n) {
        next = first + second;
        
        // Print the number without a comma if it's the last one
        if (count == n - 1) {
            printf("%d\n", next);
        } else {
            printf("%d, ", next);
        }
        
        first = second;
        second = next;
        count++;
    }
}

int main() {
    print_fibonacci_sequence(98);
    return 0;
}
