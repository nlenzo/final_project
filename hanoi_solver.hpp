/// @file 
///

#ifndef __HANOI_SOLVER_H__
#define __HANOI_SOLVER_H__

/// @brief Print solution of the game
/// @param start The starting rod
/// @param middle The buffer rod
/// @param end The final rod 
/// @param ndisks The number of disk to solve
/// @return 1 if successful and 0 if failed

int hanoi_solver(int start, int middle, int end , int ndisks);

#endif
