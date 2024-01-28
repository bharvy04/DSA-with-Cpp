#include<iostream>
using namespace std;
sort(int *a,int n)
{
	int temp;
	for(int i = 0; i < n; i ++)
	{
		for(int j = i; j < n; j ++)
		{	
			if(a[i] > a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	cout<<endl<<"Sorted Array : ";
	for(int i = 0; i < n; i ++)
	{
		cout<<a[i]<<"\t";
	}
	cout<<endl;
}
int main()
{
	int n;
	cout << "enter size of elements : ";
	cin >> n;

	int a[n];
	
	for(int i = 0; i < n; i ++)
	{
		cout<<endl<<"Enter "<<i + 1<<" Element : ";
		cin>>a[i];
	}
	sort(a,n);
	int search;
	cout << endl << "Enter element to be searched : ";
	cin >> search;
	
	int lowerBound, upperBound, midPoint, flag = 0;
	lowerBound = 0;
	upperBound = n - 1;  //index start with 0
	
	while(lowerBound <= upperBound)
	{
		cout<<endl<<"lower bound : "<<lowerBound<<"  upper bound : "<<upperBound;
		midPoint = (lowerBound + upperBound) / 2;
		cout<<endl<<"index : "<<midPoint << "  "<<" mid element : "<<a[midPoint]<<endl;
		
		if(a[midPoint] == search)
		{
			flag++;
			break;
		}
		else if(a[midPoint] > search)
		{
			upperBound = midPoint - 1;
		}
		else if(a[midPoint] < search)
		{
			lowerBound = midPoint + 1;
		}
	}
	
	if(flag == 1)
	{
		cout<<endl<<"Element is found";
	}
	else
	{
		cout<<endl<<"Element is not found";
	}
	
	return 0;
}


