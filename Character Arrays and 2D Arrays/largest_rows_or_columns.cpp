Sample Input 1 :
1
2 2 
1 1 
1 1
Sample Output 1 :
row 0 2


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

		findLargest(input, row, col);
		cout << endl;
	}
}


#include<climits>
void findLargest(int **arr, int row, int col){
    	int i,j,sum = 0;
	    int tempr = INT_MIN;
	    int maxrow = INT_MIN, maxr = 0;
	// finding each row sum 
	for(i = 0; i < row; i++){ 
		for (j = 0; j < col; j++) { 
			// Add the element 
			sum = sum + arr[i][j]; 
		}
        //finding th greatest row
		if(sum > tempr){
			maxrow = sum;
			maxr = i;
			tempr = maxrow;
		}
		// Reset the sum 
		sum = 0; 
	}
	
	i=0,j=0,sum = 0; 
	int tempc = INT_MIN;
	int maxcol = INT_MIN, maxc = 0;
	
	// finding the each column sum 
	for (i = 0; i < col; ++i) { 
		for (j = 0; j < row; ++j) { 

			// Add the element 
			sum = sum + arr[j][i]; 
		}
        // finding th greatest column
		if(sum > tempc){
			maxcol = sum;
			maxc = i;
			tempc = maxcol;
		}
		// Reset the sum 
		sum = 0;
	}
    //comparing the max row or col
	if(maxrow > maxcol){
		cout<<"row " << maxr<<" "<<maxrow;
	}
	else if(maxrow < maxcol){
		cout<<"column " << maxc<<" "<<maxcol;
	}
	else{
		cout<<"row " << maxr<<" "<<maxrow;
	}
}
