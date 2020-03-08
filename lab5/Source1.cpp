#include "Header.h"

std::vector<double> createNewArray(double array[], int n)
{
	int pos, neg;
	for (int i = 0; i < n; i++) 
	{
		if (array[i] >= 0) pos++;
		else neg++;
	}
	
	std::vector<double> arr;

	if (!(pos == neg))
	{
		if (pos > neg) {
			for(int i = 0; i < n; i++)
			{
				if (array[i] >= 0) arr.push_back(array[i]);
			}
		}
		else 
		{
			for (int i = 0; i < n; i++)
			{
				if (array[i] < 0) arr.push_back(array[i]);
			}
		}
	}
	return arr;
}


void fillArray(double array[], int n)
{
	Random^ r = gcnew Random;
	for(int i = 0; i < n; i++)
	{
		array[i] = r->Next(-100,100);
	}
}
