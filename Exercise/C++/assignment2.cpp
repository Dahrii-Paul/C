//write a program in c++ wheather a number is odd/even?
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the number =";
	cin>>n;
	
	if(n%2==0){
		cout<<n << "is even";
	}else
	{
		cout<<n <<" odd number";
	}
}
