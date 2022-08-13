#include <bits/stdc++.h>
using namespace std;


int XOR(int n)
{
    if(n%4==0)  return (n);
    if(n%4==1)  return(1);
    if(n%4==2)  return(n+1);
    if(n%4==3)  return(0);
   
}
int main()
{
  
    // if(n%4==0) cout<<n<<"\n";
    // if(n%4==1) cout<<"1"<<"\n";
    // if(n%4==2) cout<<n+1<<"\n";
    // if(n%4==3) cout<<"0"<<"\n";
    int x= XOR(5);
     cout<<x;

}