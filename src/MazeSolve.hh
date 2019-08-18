#pragma once
#include<iostream>

class MazeSolve
{
private:
    void printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi);
public:
    MazeSolve(/* args */);
    ~MazeSolve();
    void printAllPaths(int *mat, int m, int n);
};

MazeSolve::MazeSolve(/* args */)
{
}

MazeSolve::~MazeSolve()
{
}

void MazeSolve::printAllPathsUtil(int *mat, int i, int j, int m, int n, int *path, int pi) 
{ 
	
	if (i == m - 1) 
	{ 
		for (int k = j; k < n; k++) 
			path[pi + k - j] = *((mat + i*n) + k); 
		for (int l = 0; l < pi + n - j; l++) 
			std::cout << path[l] << " "; 
		std::cout << std::endl; 
		return; 
	} 

	
	if (j == n - 1) 
	{ 
		for (int k = i; k < m; k++) 
			path[pi + k - i] = *((mat + k*n) + j); 
		for (int l = 0; l < pi + m - i; l++) 
			std::cout << path[l] << " "; 
		std::cout << std::endl; 
		return; 
	} 

	path[pi] = *((mat + i*n) + j); 

	printAllPathsUtil(mat, i+1, j, m, n, path, pi + 1); 

	printAllPathsUtil(mat, i, j+1, m, n, path, pi + 1); 
} 

void MazeSolve::printAllPaths(int *mat, int m, int n) 
{ 
	int *path = new int[m+n]; 
	printAllPathsUtil(mat, 0, 0, m, n, path, 0); 
} 

