#include<iostream>
using namespace std;
int x=1; //Line 1
void p(int,int);
int main(){
	int x =3 ; //Line 4
	p(x,x);
return 0;
}
void p(int y, int z){
	int x =4;
	cout<<x+y+z; // Line 9
}
