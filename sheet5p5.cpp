#include<iostream>
using namespace std;
void fun(int u, int v = 5, double z = 3.2){//u = 3, v = 0 , z = 2.8
	int a;
	u = u + static_cast<int>(2 * v + z);//5
	a = u + v - z;//2
	cout << "a = " << a << endl; //20
}
int main(){
	fun(6);
	fun(3, 4);
	fun(3, 0, 2.8);

	return 0;
}
