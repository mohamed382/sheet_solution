#include <iostream>
using namespace std;
int main()
{
	int num ;
	cin>>num; //3
	
	for(int line = num ; line >= 1 ; line--)
	{
		for(int i = line ; i > 0 ; i-- ){
			cout<<line;
		}
		
		cout<<endl;
	}
	
return 0;
}
