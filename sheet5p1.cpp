#include<iostream>
#include<cmath>
using namespace std;
float calculator(float x , char op , float y);
float sum(float x , float y );
float sub(float x , float y);
float mult(float x , float y);
float divide(float x , float y);

float calculator(float x , char op , float y)
{
	if(op == '+')
		return sum(x,y);
	else if(op == '/')
		return divide(x,y);
	else if(op == '*')
		return mult(x,y);
	else if(op == '-')
		return sub(x,y);
		
}
float sum(float x , float y ){
	return x + y ;
}
float sub(float x , float y){
	return x - y;
} 
float mult(float x , float y){
	return x * y;
} 
float divide(float x , float y){
	return x / y;
} 


int main(){
   float num1 , num2,result ;
   char oper ;
   cout<<"Enter first number : ";
   cin>>num1;
   cout<<"enter second number : ";
   cin>>num2;
   cout<<"choose the operator (+, -, *, /): ";
   cin>>oper;
   
	result = calculator(num1 , oper , num2);
	cout<<num1<<oper<<num2 << " = "<<result;
	return 0;
}

