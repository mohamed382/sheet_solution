#include<iostream>
using namespace std;
int main(){
	const int size = 5;
	int arr1[size] , arr2[size],sum[size];
cout<<"Enter element of array 1: ";
for (int i = 0 ; i<size ; i++)
	{
		cin>>arr1[i];	
	}
cout<<"Enter element of array 2: ";	
for (int i = 0 ; i<size ; i++)
	{
		cin>>arr2[i];	
		sum[i] = arr2[i] + arr1[i];
	}
for (int i = 0 ; i<size ; i++)
	{
		cout<<sum[i]<<" ,";	
	}
	return 0;
}
