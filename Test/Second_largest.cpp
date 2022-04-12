#include<iostream>
using namespace std;
#include <climits>

    int main() {

    int n, i;
    cin  >> n;
    
    int arr[n];    
    //Input array elements
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    //Assign min value to max and second_max
    int   max         = INT_MIN;
    int second_max  = INT_MIN;
    
    for (i = 0; i < n; i++) {
        
        if(arr[i] > max) {
            second_max = max;
            max        = arr[i];
        }
        
        if(arr[i] < max && arr[i] > second_max) {
            second_max = arr[i];
        }
    }
    
    cout <<  second_max;
    return 0;
}
