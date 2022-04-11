#include<iostream>
using namespace std;

int main() {
	
	int x;
	int i=1,res;
	int flag = 1;
	cin >>x;
	
	while(flag<=x && flag<=1000)
	{ 
		res = ((3*i) + 2);
		if(res % 4 != 0 ) 
		{
				cout <<res<<" ";
				flag++;
		}	
        i++;
	}
    
}
