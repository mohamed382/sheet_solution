#include<iostream>
using namespace std;
void lineprinter(int x){
	for(int i = x ; i > 0; i--  )
	cout<<x*x<<" ";
	cout<<endl;
}

void allprinter(int num){
	for(int i = num ; i >0 ; i --)
	lineprinter(i);
}

int main()
{
     int x ;
	 cout<<"Enter number : ";
	 cin>>x;
	 while(x >= 8){
	 
	 cout<<"invalid number Enter value between 8 and 0 : ";
	 cin>>x;
		}
	 	allprinter(x);  // 25 25 25 
	
	return 0;
}
