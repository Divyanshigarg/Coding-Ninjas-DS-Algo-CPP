Sample Input:
3
15 20 12
Sample Output:
[] (this just represents an empty array, don't worry about the square brackets)
12 
20 
20 12 
15 
15 12 
15 20 
15 20 12


#include <iostream>
using namespace std;
#include "solution.h"

int main() {
  int input[1000],length;
  cin >> length;
  for(int i=0; i < length; i++)
  	cin >> input[i];
  printSubsetsOfArray(input, length);
}


void print_Subs(int *input, int n, int *output, int count) {
    //base case 
	if(!n) {
       for(int i=0;i<count;i++){
            cout << output[i] << " ";  
       }
        cout << endl;
        return;
    }
    
    //nth step
    
    //if current is not included
    print_Subs(input + 1, n - 1, output,count);
    
    //if current is included
    output[count] = input[0];
    print_Subs(input + 1, n - 1, output, count + 1);
    
}


void printSubsetsOfArray(int input[], int size) 
{
    int output[1000];
    print_Subs(input, size, output, 0);
}
