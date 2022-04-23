//main code
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

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}

//my code
void pushZeroesEnd(int *arr, int size)
{
    int i=0,k=0;
    while(i<size)
    {
        if(arr[i]!=0){
            int temp=arr[k];
            arr[k]=arr[i];
            arr[i]=temp;
            i++;
           k++;
        }
        else
        {
            i++;
        }
    }
}
