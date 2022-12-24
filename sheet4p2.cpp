#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float x,y ;
	char op ;
	char ch ;
	cout<<"Enter first number : ";
	cin>>x;

	cout<<"enter second number : ";
	cin>>y;
	cout<<"to stop enter n ";
	cin>>ch;
	if(ch == 'n')
	break;
	cout<<"\nEnter operation : ";
	cin>>op;
	
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
}
return 0;
}
