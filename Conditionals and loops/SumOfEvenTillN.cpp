#include<iostream>
using namespace std;


int main(){

       	/*  
		Read input as specified in the question.
		Print output as specified in the question.
	*/
  int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        sum=sum+i;
    }
    cout<<sum;
    
    
}
