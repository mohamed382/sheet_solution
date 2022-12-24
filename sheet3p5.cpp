#include<iostream>
using namespace std;
int main()
{
	float sum = 0 , average ;
	int num_subj ; //to store number of subjects
	float mark ; // to store mark of a subject
	cout<<"Enter number of Marks: ";
	cin>>num_subj;
	for(int count = 1; count<=num_subj ; count++ ){
		cout<<"Enter mark #"<<count<<" : ";
		cin>>mark;
		sum+=mark;
	}
	average = sum / num_subj;
	cout<<"the summation of Marks = "<<sum;
	cout<<"\nthe average of Marks = "<<average;
	
return 0;
}
