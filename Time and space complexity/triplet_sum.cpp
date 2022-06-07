Sample Input 1:
1
7
1 2 3 4 5 6 7 
12
Sample Output 1:
5
Sample Input 2:
2
7
1 2 3 4 5 6 7 
19
9
2 -5 8 -6 0 5 10 11 -3
10
Sample Output 2:
0
5


#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;
		cin >> size;
        

		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}
		cin >> x;

		cout << tripletSum(input, size, x) << endl;

		delete[] input;
	}

	return 0;
}


int tripletSum(int *arr, int n, int num)
{
    sort(arr,arr+n);
    int sum=0,count=0;
    for(int k=0;k<n-1;k++)
    {
       int i=k+1,j=n-1;
        while(i<j)
        {
            sum=arr[i]+arr[j]+arr[k];
            if(sum==num)
            {
                int index=j;
                while(arr[index]==arr[j] && index>i)
                {
                    count++;
                    index--;
                }
                i++;
            }
            else if(sum<num)
                i++;
            else
                j--;
        }
    }
    return count;
}

