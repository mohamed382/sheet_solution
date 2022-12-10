#include<iostream>
using namespace std;
float averag(float num[], int size ){
	float sum = 0;
	float average ;
	for (int i = 0 ; i<size ; i ++)
	sum+= num[i];
	average = sum / size;
	return average;
	
}



int main(){
	float y[7] = {1,5,8,7,9,7,74};
	cout<<averag(y,7);
	

return 0;
}

