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

void rotate(int nums[], int d, int size) 
{
    int temp[d];
    for (int j=0;j<d; j++){
        temp[j] = nums[j];
    }
    int ind = 0;
    for(int i=d;i<size;i++){
        nums[ind] = nums[i];
        ind++;
    }
    
    for (int j=0;j<d; j++){
        nums[ind] = temp[j];
        ind++;
    }
}   
    
