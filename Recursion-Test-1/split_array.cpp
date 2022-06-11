Sample Input 1 :
2
1 2
Sample Output 1 :
false
Sample Input 2 :
3
1 4 3
Sample Output 2 :
true

#include <iostream>
#include "solution.h"
using namespace std;

int main() {

	int size;
	cin>>size;
	int *input=new int[1+size];	
	
	for(int i=0;i<size;i++)
		cin>>input[i];
	
    if(splitArray(input, size)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }

	
	return 0;

}


bool helper(int *arr, int n, int idx, int sum1, int sum2) {
    if(idx == n) {
        return sum1 == sum2;
    }
    
    if(arr[idx] % 5 == 0) {
        sum1 += arr[idx];
    }
    
    else if(arr[idx] % 3 == 0) {
        sum2 += arr[idx];
    }
    
    // special case
    else{
    	return helper(arr, n, idx + 1, sum1 + arr[idx], sum2) or helper(arr, n, idx + 1, sum1, sum2 + arr[idx]);
    }
    
    return helper(arr, n, idx + 1, sum1, sum2);
    
}


bool splitArray(int *input, int size) 
{
    helper(input, size, 0 , 0, 0);
}
