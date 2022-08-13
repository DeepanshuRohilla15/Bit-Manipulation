#include<bits/stdc++.h>
using namespace std;

int Xor(int n)
{
    if(n%4==0)  return (n);
    if(n%4==1)  return(1);
    if(n%4==2)  return(n+1);
    if(n%4==3)  return(0);
   
}
int main()
{
    int l,r;
    cin>>l>>r;

     Xor(l-1);
     Xor(r);
     return Xor(l-1)^Xor(r);

}