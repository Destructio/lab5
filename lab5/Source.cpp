#include "Header.h"

void output(double arr[], int n, ListBox^ l)
{
	l -> Items->Clear();
	for (int i = 0; i < n; i++)
	{
		l->Items->Add(arr[i].ToString());
	}
}

void output(std::vector<double> arr, ListBox^ l)
{
	l->Items->Clear();
	for (int i = 0; i < arr.size(); i++)
	{
		l->Items->Add(arr[i].ToString());
	}
}