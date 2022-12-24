#include<iostream>
using namespace std;

void find(int a, int& b, int& c);
int main(){
int x=5, y=2, z=1;
find(x, y, z);
cout << x << ", " << y << ", " << z << endl;
return 0;
}
void find(int a, int& b, int& c){//a = 5 , y = b = 2 , c = z = 1
int temp;
c = a + b; // z = c = 7 
temp = a; // temp = 5
a = b;  // a  = 2
b = 2 * temp; //b = y = 10
}
