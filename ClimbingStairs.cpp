#include <iostream>

int climbStairs(int n) {
    if (n <= 1) return 1; // Base case
    int first = 1, second = 2; // First two steps
    for (int i = 3; i <= n; ++i) {
        int current = first + second; // Current ways to reach step i
        first = second; // Update for the next iteration
        second = current; // Update for the next iteration
    }
    return second; // Return the total ways to reach the top
}
