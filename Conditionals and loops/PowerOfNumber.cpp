#include<iostream>
using namespace std;

int main() {
	// Write your code here
	int x,n,power=1;
    cin>>x>>n;
    for(int i=0;i<n;i++)
    {
        power=power*x;
    }
    cout<<power;
}

