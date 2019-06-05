//============================================================================
// Name        : vectorname.cpp
// Author      : Sruthy Krishnan
// Version     :
// Copyright   : Your copyright notice
// Description : Bubble sort using vector for string types in C++, Ansi-style
//============================================================================

#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
	vector<string>names={"Sruthy", "Stephy", "Bibin", "Joyal", "Kiran"};
	sort(names.begin(), names.end());
	for(string &s :names)
		cout<<s<<" ";
	return 0;
}
