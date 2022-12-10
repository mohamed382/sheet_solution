#include<iostream>
#include<iomanip>

using namespace std;
void initMatrix(int arr[][4],int rows){
	for(int c = 0; c <4 ; c++){
		for(int r = 0 ; r<rows ; r++){
			cout<<"Enter array element a["<<r+1<<","<<c+1<<"] = ";
			cin>>arr[r][c];
		}
	}
}
void displayMatrix(int arr[][4], int rows){
	cout<<endl<<endl;
	for(int r = 0 ; r<rows ; r++)
	{
	cout<<setw(3)<<arr[r][0]<<setw(3)<<"|"
	<<setw(6)<<arr[r][1]<<setw(3)<<"|"
	<<setw(6)<<arr[r][2]<<setw(3)<<"|"
	<<setw(6)<<arr[r][3]<<setw(3)<<endl;
	if(r == 3)
	   continue;
	cout<<"--------+--------+--------"<<endl;	
	}
	}
int getLargest(int arr[][4], int rows, int id){
	int largest  = arr[0][0];
	
		for(int c = 1 ; c<4;c++){
			if (arr[id - 1][c] > largest)
				largest = arr[id - 1][c];
		}
	
	return largest;
}	
void printStudentmarks(int marks[][4],int id){
	for(int i = 1; i<4 ; i++){
		cout<<marks[id-1][i]<<" ";
	}
	cout<<"Largest mark is "<<getLargest(marks,3,id);
}
int main(){
	string names[] = {"id","circuit","math","CPP"};
	int arr[3][4];
	initMatrix(arr,3);
	cout<<names[0]<<"     "<<names[1]<<"     "<<names[2]<<"     "<<names[3];
	displayMatrix(arr,3);
	cout<<"student marks ";
	printStudentmarks(arr,1);
	
	
	return 0;
}
