#include<iostream>
using namespace std;
void bubble_sort(int arr[] , int size){
	bool swap;
	int temp ;
	do{
		swap = false;
		for(int i = 0 ; i<(size-1) ; i++)
		{
			if(arr[i]>arr[i+1]){
				temp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = temp;
				swap = true;
			}
		}
	}while(swap);
}

int main(){
	
	int x[4] = {1,47,5,8};
	bubble_sort(x , 4);
	for(int i = 0 ; i<4 ; i++){
		cout<<x[i]<<endl;
	}	
	return 0;
}

