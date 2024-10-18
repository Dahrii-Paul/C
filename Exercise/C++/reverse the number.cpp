#include <iostream>
using namespace std;
int main()
{
	int sum,n,r;
	sum=0;
	cout<<"Enter the atleast three numbers: \n";
	cin>>n;
	while(n!=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
