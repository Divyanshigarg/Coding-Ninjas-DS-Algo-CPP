#include<iostream>
using namespace std;

int main() {
    
	int n;
    cin>>n;
    
    int i=1;
    for(;i*i<=n;i++)
    {
        if(i*i>n)
          break;
    }
    cout<<i-1;
    
}

