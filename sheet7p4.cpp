#include<iostream>
using namespace std;
int main(){
	const int size = 5;
	int arr1[size]; //user input
	int arr_rev[size]; //reverse of input
	
	for(int i = 0 ; i<size ; i++){
		cin>>arr1[i];
		arr_rev[i] = arr1[4-i];
	}
	
	for(int i = 0 ; i<size ; i++){
		cout<<arr_rev[i]<<endl;
	}
return 0;	
} 


