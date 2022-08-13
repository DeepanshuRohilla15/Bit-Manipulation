#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=15,ct=0;
    
    while(n!=0)
    {
        n = n&(n-1);
        ct++;
    }
    cout<<ct;

}