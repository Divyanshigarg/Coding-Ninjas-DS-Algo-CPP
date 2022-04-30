Sample Input 1:
1
4 4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 



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
        int **matrix = new int *[row];

        for (int i = 0; i < row; i++)
        {
            matrix[i] = new int[col];
            for (int j = 0; j < col; j++)
            {
                cin >> matrix[i][j];
            }
        }
        spiralPrint(matrix, row, col);

        for (int i = 0; i < row; ++i)
        {
            delete[] matrix[i];
        }
        delete[] matrix;

        cout << endl;
    }
}


void spiralPrint(int **arr, int row, int col)
{

int i, rp = 0, cp = 0; 
    int count=0;
    while (count<=row*col) { 
        for (i = cp; i < col; i++) { 
            cout << arr[rp][i] << " "; 
        } 
        rp++; 
  
        for (i = rp; i < row; i++) { 
            cout << arr[i][col - 1] << " "; 
        } 
        col--; 
  
        if (rp < row){ 
            for (i = col - 1; i >= cp; i--) { 
                cout << arr[row - 1][i] << " "; 
            } 
            row--; 
        } 
  
        if (cp < col){ 
            for (i = row - 1; i >= rp; i--) { 
                cout << arr[i][cp] << " "; 
            } 
            cp++; 
        } 
        count++;
    } }
