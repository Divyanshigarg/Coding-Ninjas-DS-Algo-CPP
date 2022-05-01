Sample Input 1:
1
3 4 
1  2  3  4 
5  6  7  8 
9 10 11 12
Sample Output 1:
1 5 9 10 6 2 3 7 11 12 8 4



#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int row, col;
		cin >> row >> col;
		int **input = new int *[row];
		for (int i = 0; i < row; i++)
		{
			input[i] = new int[col];
			for (int j = 0; j < col; j++)
			{
				cin >> input[i][j];
			}
		}
		wavePrint(input, row, col);
		cout << endl;
	}
}


void wavePrint(int **arr, int m, int n)
{
    int j = 0;
    while(j < n)
    {
    	if(j%2==0)
        {
    	for(int i=0; i < m; i++)
         { 
        	cout<<arr[i][j]<<" ";
    	}   
    }
        else
        {
        int k=m-1;
    	for(;k>=0;k--)
        {
    	   cout<<arr[k][j]<<" ";
          }
        }
         j++;
    }
   
	
}
