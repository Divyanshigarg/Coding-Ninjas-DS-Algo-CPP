Sample Input 1:
1
7
1 2 3 4 5 6 7
2
Sample Output 1:
3 4 5 6 7 1 2
Sample Input 2:
2
7
1 2 3 4 5 6 7
0
4
1 2 3 4
2
Sample Output 2:
1 2 3 4 5 6 7
3 4 1 2
    
#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size;
		cin >> size;

		int *input = new int[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		int d;
		cin >> d;

		rotate(input, d, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}
		
		delete[] input;
		cout << endl;
	}

	return 0;
}

void rotate(int *arr, int d, int size)
{
    if(size==0)
        return ;
    int z=d%size; ////important in case     d>size
   int temp[z];
    for(int i=0;i<z;i++)
    {
        temp[i]=arr[i];
    }
    for(int i=0;i<size-d;i++)
    {
        arr[i]=arr[i+z];
    }
    for(int i=0;i<z;i++)
    {
        arr[size-z+i]=temp[i];
    }

}
