#include<iostream>
using namespace std;
float max(float arr[],int size){
	float x = arr[0];
	for(int i = 1; i<size ; i++){
		if(arr[i] > x)
			x = arr[i];
	}
	return x;
}

int main(){
		
	float y[7] ={1,5,8,7,9,7,74};
	cout<<max(y,7);
	
	
	return 0;
}



