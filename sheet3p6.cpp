#include<iostream>
using namespace std;
int main()
{
	int base ;
	int result = 1 ;
	int power ;
	cout<<"enter base number : ";
	cin>>base;
	cout<<"enter power : ";
	cin>>power;
	if(power > 0){
			while(power>0){
			result *= base;
			power--;
	}
	cout<<"Result = "<<result;	
	}
	else{
		power = -power;
		while(power>0){
		result *= base;
		power--;
	}
	cout<<"Result = "<<"1 / "<<result;	
		
	}

	return 0;
}
