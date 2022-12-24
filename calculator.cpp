#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x,y ;
	char op ;
	cout<<"Enter first number : ";
	cin>>x;
	cout<<"Enter operation : ";
	cin>>op;
	cout<<"enter second number : ";
	cin>>y;
	if(op == '/'){
	while(y == 0)
{
	cout<<"you have entered ZERO as second num. \n please enter non zero number: ";
	cin>>y;
}}
switch(op)
{
		case '+':
			cout<<"result is "<<x + y ;
		break;
		case '-':
			cout<<"result is "<<x - y ;
		break;
		case '*':
			cout<<"result is "<<x * y ;
		break;
		case '/':
			cout<<"result is "<<x / y ;
		break;	
		default:
			cout<<"you have entered invalid operation";
}

return 0;
}
