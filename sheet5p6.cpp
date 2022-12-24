#include<iostream>
using namespace std;
void fun(int a){
	cout<<"overload1 " << a + 1 << endl;
}
void fun(int a, int b){
	cout<<"overload2 "<< a + b << endl;
}
void fun(int a, double b){
	cout<<"overload3 " << a + b << endl;
}


int main(){
	fun(3, 4);
	fun(6);
    fun(3, 2.8);
	return 0;
}


