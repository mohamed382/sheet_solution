#include<iostream>
using namespace std;
int main()
{	int count = 0 ;
	int num ;
	cout<<"enter a nmuber";
	cin>>num;
	for(int i = 1 ; i<= num ; i++)
	{
		if (num % i == 0)
			count++; //1 2
	}
	if(count == 2)
	 cout<<"number is prim ";
	else 
	cout<<"number is not prim ";
	
	return 0;
}
