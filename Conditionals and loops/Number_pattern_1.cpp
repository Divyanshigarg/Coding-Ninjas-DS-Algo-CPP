#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
  int n,k=0,i=1;
    cin>>n;
   
    while(i<=n)
    { 
        int spaces=1;
        while(spaces<=n-i)
        {
          cout<<" ";
            spaces++;
        }
        int j=1;
        while(j<=i)
        {
            cout<<k+j;
            j++;
        }
       k=k+1;
        cout<<endl;
        i=i+1;
    }
    
}



