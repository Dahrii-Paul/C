//what will be the value of p=p*++j where j is 22 and p=3 initially?

#include<iostream> 
using namespace std; 

int main()
{
	int j,p;
	j=22;
	p=3;
	p=p*++j;
	cout<<"p="<<p; 
}
