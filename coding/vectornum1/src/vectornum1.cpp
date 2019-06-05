//============================================================================
// Name        : vectornum1.cpp
// Author      : Sruthy Krishnan
// Version     :
// Copyright   : Your copyright notice
// Description : Bubble sort using vectors for int types in C++, Ansi-style
//============================================================================
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool bubbleSort(int i, int j)
{
	return i>j;
}
int main()
{
	vector<int>num={10,0,2,-3,56,9};
	sort(num.begin(), num.end(), bubbleSort);
	for(int i : num)
		cout<<i<<" ";
	return 0;
}

