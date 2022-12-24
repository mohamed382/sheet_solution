#include<iostream>
using namespace std;
int main()
{
  int rows ;
  cin>>rows;
  
  for (int line = 1 ; line<=rows ; line++){
  	
  	for(int stars = 1 ; stars<= line ; stars++ )
  		cout<<"*";
  	
	cout<<endl;
  }	

	
	return 0;
}
