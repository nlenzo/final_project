# Final project - Tower of Hanoi

## Description
A code that solves the Tower of Hanoi game for the final project

## Algorithm
Classic tower of hanoi algorithm using recursion. If `T(s,m,e,n)` be the solution of the tower of hanoi problem with starting rod `s`, ending rod `e`, and buffer rod `m` with disk `n`. Then the solution for `n+1` disk can be constructed with 

```
T(s,m,e,n+1) :=
    T(s,e,m,n)
    Move the bottom-most disk from s to e
    T(m,e,s,n)
```
The program must terminate, and the only limitation is `ndisk` being too large, causing a stack overflow in the recursive function call.

## Input
An integer `ndisk` that specify the number of disk to solve for. 

## Output
Step-by-step instruction on how to solve the puzzle.

## Compile 
Run `make all` to make all

To clean the object files, run `make clean`


## Testing 
To compile the unit test module
`make unit_test`

To run the test
`make testing`

