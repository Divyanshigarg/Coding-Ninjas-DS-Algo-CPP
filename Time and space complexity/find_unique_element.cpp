Sample Input 1:
1
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
2
5
2 4 7 2 7
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
4
10



#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}


int findUnique(int *arr, int size) 
{
    //by using xor with o(n) tc and o(1) sc
    
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
    
}
     //by counting the number of occurance of unique element
    
    // for(int i=0;i<size;i++)
    // {
    //     int count=0;
    //     for(int j=0;j<size;j++)
    //     {
    //         if(arr[i]==arr[j])
    //             count++;
    //     }
    //     if(count==1)
    //         return arr[i];
    // }
    
       //finding unique element by sorting the array an then comparing with o(nlogn) complexity
    
//     for(int i=0;i<size;i++)
//     {
//         for(int j=i+1;j<size;j++)
//         {
//             if(arr[i]>arr[j])
//             {
//                 int temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
//     }
//     int i=0;
//     for(;i<size;i+=2)
//     {
//         if(arr[i]!=arr[i+1])
//             return arr[i];
//     }
    


