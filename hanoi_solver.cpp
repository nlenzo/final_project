#include <stdio.h>
#include "hanoi_solver.hpp"

int hanoi_solver(int start, int middle, int end, int ndisk){
    if(ndisk <= 0) {
        printf("The number of disks should be a positive integer! \n");
        return 0; // Error occured
    }
    if(start == middle || middle == end || start == end){
        printf("Start, middle, and end should all be different\n");
        return 0; // Error occured
    }
    if(ndisk == 1){
        printf("Move a disk from rod %d to rod %d\n",start,end);
    } else {
        hanoi_solver(start,end,middle,ndisk-1);
        printf("Move a disk from rod %d to rod %d\n",start,end); //Move the bottom-most disk
        hanoi_solver(middle,start,end,ndisk-1);
    }
    return 1;
}
