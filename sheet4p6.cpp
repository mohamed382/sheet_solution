#include <iostream>
using namespace std;
int main()
{
int n ; // number of integers
int num ; // integer
int pos_counter = 0 ;
int neg_counter = 0 ;
int zeros = 0;
cout<<"enter number of integers ";
cin>>n;

for(int i = 1 ; i<= n ; i++){
	cout<<"Enter number #"<<i<<" : ";
	cin>>num;
	if(num > 0 )
	pos_counter++ ;
	else if(num<0)
	neg_counter++ ;
	else
	 zeros++;
}

cout<<"numbers of positive = "<<pos_counter<<endl;
cout<<"numbers of negative = "<<neg_counter<<endl;
cout<<"numbers of zeros = "<<zeros<<endl;
	
return 0;
}
