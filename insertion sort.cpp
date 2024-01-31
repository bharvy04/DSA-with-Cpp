#include<iostream>
using namespace std;

int main()
{
	int n, temp, j;
	cout<<"Enter the number of elements : ";
	cin>>n;
	
	int arr[n];
	
	//Insertion of Array
	for(int i = 0; i < n; i ++)
	{
		cout<<endl<<"Enter "<<i + 1<<" element : ";
		cin>>arr[i];
	}
	
	//Display Array Elements
	cout<<endl<<endl<<"Array elements : ";
	for(int i = 0; i < n; i ++)
	{
		cout<<arr[i]<<"\t";
	}
	
	//Insertion Sort Logic
	for(int i = 1; i < n; i ++)
	{
		temp = arr[i];
		j = i - 1;
		
		while(j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];
			j --;
		}
		arr[j + 1] = temp;
	}
	
	//Display Sorted Array
	cout<<endl<<endl<<"Sorted array : ";
	for(int i = 0; i < n; i ++)
	{
		cout << arr[i] << "\t";
	}	
}
