//Assume that R starting with 35. What will be the value of s from the following expression? s=(R--)+(++R).

#include<iostream>  
using namespace std;
int main()
{
	int R,s;
	R=35;
	s=(R--)+(++R);
	cout<<"The value of 's'="<<s;
	return 0;
}
