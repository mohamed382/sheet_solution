#include<iostream>
using namespace std;
int getSmallestIndex(float x[] , int size ){
	int index = 0;
	float smallest = x[0];
	for(int i = 1 ;i <size ; i++)
	{
		if( x[i] < smallest){
			smallest = x[i];
			index = i;
		}
	}
	return index;
}

int main(){
	 float u [7] = {0,1,-2,8,-7,0,-9};
	 cout<<getSmallestIndex(u , 7);
	
	return 0;
}
