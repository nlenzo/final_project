#include <stdio.h>
#include <cassert>
#include "hanoi_solver.hpp"

int main(){
    /* Performing unit test */
    printf("Testing the validity of ndisk argument\n");
    assert(hanoi_solver(1,2,3,-1) == 0); // Make sure ndisk negative gives an error 

    printf("Testing repetition of rod index\n");
    printf("First two indices\n");
    assert(hanoi_solver(1,1,2,3) == 0); // First two are the same gives error
    printf("Last two indicies\n");
    assert(hanoi_solver(2,1,1,3) == 0); // Last two equal => error
    printf("First and third indicies\n");
    assert(hanoi_solver(1,2,1,3) == 0); // First and third equal => error 
    return 0;
}