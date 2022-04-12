#include<iostream>
using namespace std;

int main(){
  
   int n;
   cin>>n;
    
    int i=1;
    for(;i<=n;i++)
    {
        for(int spaces=1;spaces<=n-i;spaces++)
        {
            cout<<" ";              //for the left half triangle
        }
        for(int j=i;j>=1;j--)
        {
            cout<<j;
        }
    
    for(int k=2;k<=i;k++)
    {
        cout<<k;                //for the right half triangle
    }
    cout<<endl;
    }
  
}

