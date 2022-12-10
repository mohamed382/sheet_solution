#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int checker(const string name){
	
	int l = strlen(name);
	cout<<"Enter your name : ";
	cin>>name;

	for(int i = 0 ; i<l;i++){
		if(name[i] == 'x' || name[i] == 'X')
		    cout<<"Exist";
		    return 0;
	}
	cout<<"Does not exist ";
	return 0;
	
}


int main(){
	checker("kkjhdak");
	
	return 0;
}
