//============================================================================
// Name        : wordcount.cpp
// Author      : Sruthy Krishnan
// Version     :
// Copyright   : Your copyright notice
// Description : word count in C++, Ansi-style
//============================================================================

#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    cout<<"enter some words"<<endl;
    string token;
    vector<string>word;
    while(cin>>token)
    {
        word.push_back(token);
    }
sort (word.begin(),word.end());
int vsize=word.size();
if(vsize==0)
{
    cout<<"NO WORDS"<<endl;
    return 1;
}
int count=1;
token=word[0];
for(int i=1; i<vsize; i++)
{
    if(token!=word[i])
    {
        cout<<token<<" appeared "<<count<<" times"<<endl;
    count =0;
    token=word[i];
    }
    count++;
}
cout<<"words appeared "<<count<<" number of times"<<endl;
return 0;
}
