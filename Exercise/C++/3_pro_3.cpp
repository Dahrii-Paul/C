//what will be the value of j=--k+2k. If k initial is 20 initially?

#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; 

int main()
{
	int j,k;
	k=20;
	//j=--k+2k; //if 2k then error
	j=--k+2*k; 
	cout<<"The value of j="<<j;
	return 0;\
}
