#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
int x ;
cout<<"Enter an even number : ";
cin>>x;
while(x%2 == 1)
{
	cout<<"you have entered odd number \n please enter an even number: ";
	cin>>x;
}
cout<<"Good job!";
return 0;

}











