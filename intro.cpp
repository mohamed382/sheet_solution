#include<iostream>
using namespace std;

void fun(int x[], int size) {
	int y[size] ;
	for(int k = 0 ; k<size ; k++)
		y[k] = x[k];
for (int i=0; i<size; i++)
	++y[i];
}
int main() {
int a[] = {5,6,2,3};
fun(a,4);
for (int i=0; i<4; i++)
cout<<a[i]<<endl;

return 0;
}


