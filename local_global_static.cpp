#include<iostream>
using namespace std;


int area(int side_length){
	
	return side_length*side_length;
}
int area(int width , int height){
	return width * height;
}

int main(){
	int side_length = 10;
	cout<<area(10)<<endl;
	cout<<area(5,10);
	return 0;
}

