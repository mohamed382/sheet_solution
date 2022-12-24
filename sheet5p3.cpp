#include<iostream>
using namespace std;
void fun() {
	static int b = 0;
	b++;
	cout<<b<<endl;
}

int main(){
	fun();
	fun();
	fun();
return 0;
}
