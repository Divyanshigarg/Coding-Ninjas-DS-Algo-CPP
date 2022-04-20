//main copde
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

		insertionSort(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		delete[] input;
		cout << endl;
	}

	return 0;
}

//my code
void insertionSort(int arr[], int n)
{
   for(int i=1;i<n;i++)
   {
       int current=arr[i];
        int j;
       for(j=i-1;j>=0;j--)
       {
          if(current<arr[j])
           {
            arr[j+1]=arr[j];
             }
           else
            {
               break;
             }
           }
       arr[j+1]=current;
   }
}
