Sample Input 1:
3 3
1 2 3
4 5 6
7 8 9
Sample Output 1 :
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9


#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int **input = new int*[row];
    for(int i = 0; i < row; i++) {
	    input[i] = new int[col];
	    for(int j = 0; j < col; j++) {
	        cin >> input[i][j];
	    }
    }
    print2DArray(input, row, col);
}


void print2DArray(int **input, int row, int col)
{   
    int k = row;
    for(int i=0;i<row;i++){
        for(int l =k-1;l>=0;l--){
            for(int j=0;j<col;j++){
                cout<<input[i][j]<<" ";
            }
            cout<<endl;
        }
        k--;
    }
}

