#include<iostream>
#include<iomanip>
using namespace std;
void initMatrix(int arr[][3],int rows){
	for(int c = 0; c <3 ; c++){
		for(int r = 0 ; r<rows ; r++){
			cout<<"Enter array element a["<<r+1<<","<<c+1<<"] = ";
			cin>>arr[r][c];
		}
	}
}
void displayMatrix(int arr[][3], int rows){
	cout<<endl<<endl;
	for(int r = 0 ; r<rows ; r++)
	{
	cout<<setw(3)<<arr[r][0]<<setw(3)<<"|"
	<<setw(3)<<arr[r][1]<<setw(3)<<"|"
	<<setw(3)<<arr[r][2]<<setw(3)<<endl;
	if(r == 2)
	   continue;
	cout<<"-----+-----+-----"<<endl;
		
	}
	
}

int getLargest(int arr[][3], int rows){
	int largest  = arr[0][0];
	for(int r = 0 ; r<rows;r++){
		for(int c = 0 ; c<3;c++){
			if (arr[c][r] > largest)
				largest = arr[c][r];
		}
	}
	return largest;
}
void gettranspose(int arr[][3],int trans_arr[][3],int rows = 3 ){
	for(int c = 0 ; c<3;c++){
		for (int r = 0 ; r<rows;r++){
			trans_arr[r][c] = arr[c][r];
		}
	}
}
int sumMatrix(int arr[][3], int rows){
	int sum = 0;
		for(int c = 0 ; c<3;c++){
		for (int r = 0 ; r<rows;r++){
			sum+=arr[c][r];
		}
	}
	return sum;
}

void printRowsSum(int arr[][3], int rows){
	int sum = 0;
	for(int r = 0 ; r <rows;r++){
		for(int c = 0 ; c<3;c++){
			sum +=arr[r][c];
		}
		cout<<"Summation of row #"<<r+1<<" = "<<sum<<endl;
		sum = 0;
	}
}

bool isSymmetric(int arr[][3],int rows){
	int trans_arr[rows][3];
	gettranspose(arr, trans_arr);
	for(int r = 0 ; r <rows;r++){
		for(int c = 0 ; c<3;c++){
			if(arr[r][c] != trans_arr[r][c]){
				return false;
			}
			}
			}
		return true;	
	
}
bool isSymmetric2(int arr[][3],int rows){
	for(int r = 0 ; r <rows;r++){
		for(int c = 0 ; c<3;c++){
			if(arr[r][c] != arr[c][r]){
				return false;
			}
			}
			}
		return true;	
	
}




int main(){
	int A[3][3],A_transpose[3][3];
	initMatrix(A,3);
	displayMatrix(A,3);
	cout<<endl<<"Largest element = "<<getLargest(A,3);
	cout<<endl<<"Sum of matrix A = "<<sumMatrix(A,3);
	
	gettranspose(A,A_transpose);
	cout<<endl<<"TRANSPOSE is "<<endl;
	displayMatrix(A_transpose,3);
	cout<<endl<<endl;
	cout<<"Print row summation function : "<<endl;
	printRowsSum(A,3);
	cout<<endl<<"Symmetric is "<<isSymmetric2(A,3);
	
	
	return 0;
}

