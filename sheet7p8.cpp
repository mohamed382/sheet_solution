#include<iostream>
using namespace std;
int counter(float arr[],int size){
	int count = 0;
	for(int i = 0 ; i<size ; i++)	
	{
		if(arr[i]>=5.5)
			count++;
	}
	return count;
}

int main(){
	
	float x [5] = {60,0.1,6.5,5.5,-22};
	cout<<counter(x , 5);
	return 0;
}

