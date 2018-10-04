#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	string kata;
	cout<<"masukan kata ";
	cin>>kata;
	cout<<endl;
	int x=kata.length()-1;
	for(x;x>=0;x--)
	{
		for(int y=0;y<=x;y++){
			cout<<kata[y];
			
		}
		cout<<endl;
	}
	return 0;
}
