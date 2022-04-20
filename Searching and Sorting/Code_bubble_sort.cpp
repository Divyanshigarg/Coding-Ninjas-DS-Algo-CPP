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

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		bubbleSort(input, size);

		for (int i = 0; i < size; ++i)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}
}

//my code
void bubbleSort(int arr[], int size)
{
    int temp;
    for(int j=0;j<size-1;j++)
    {
       for(int i=0;i<size-1-j;i++)
          {
            if(arr[i]>arr[i+1])
            {
             temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            }
      }
    }
}
