#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    int i=1;
    for(;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {                                //for left half triangle
            cout<<j;
        }
      
        for(int k=3;k<=2*i;k++)
        {
            cout<<"*";                 //for the middle traingle
        }
        
    
        for(int j=n-i+1;j>=1;j--)
        {
            cout<<j;                   //for the right half triangle
        }                                    
    
    cout<<endl;
    }
   
}
