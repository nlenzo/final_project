#include <stdio.h>
#include <iostream>
#include "hanoi_solver.hpp"

int main() {
    printf("Enter the number of disks to solve: ");
    /* Get user input */
    int ndisk; 
    std::cin >> ndisk;
    /* Print solution */
    hanoi_solver(1,2,3,ndisk);
    return 0;
}

