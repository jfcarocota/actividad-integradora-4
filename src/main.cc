
#include<iostream> 
#include "MazeSolve.hh"

using namespace std; 

int main() 
{ 
	MazeSolve mazeSolve = *new MazeSolve();

	int mat[3][2] = 
	{ 
		{1, 2}, 
		{4, 5}, 
		{3, 6} 
	}; 
	
	mazeSolve.printAllPaths(*mat, 3, 2); 
	
	getchar();
	return 0; 
} 
