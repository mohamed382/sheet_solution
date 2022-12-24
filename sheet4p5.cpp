#include<iostream>
using namespace std;
int main()
{
long long int fact = 1 ;
	int num ;
	
	cout<<"enter  number : ";
	cin>>num;


			while(num>0){
			fact *= num;
			num--;
			}
	cout<<"fact = "<<fact;	


	return 0;
}
