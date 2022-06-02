Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1

#include <iostream>
using namespace std;
#include "solution.h"

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}



void printSubsetSumToK_helper(int *arr, int n, int index, int target, int *ans, int count) {
    //base case
    if(index == n) {
        if(target == 0 and count != 0) {
            for(int i = 0; i < count; i++) {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    
    // nth step -> whether the current element is considdered or not
    //not considered
    printSubsetSumToK_helper(arr, n , index + 1, target, ans, count);
    
    //considered
	ans[count] = arr[index];
    printSubsetSumToK_helper(arr, n, index + 1, target - arr[index], ans, count + 1);
    
}

void printSubsetSumToK(int input[], int size, int k) {
    // Write your code here
    int ans[size];
    int count = 0;
    
    printSubsetSumToK_helper(input, size, 0, k, ans, count);
}
