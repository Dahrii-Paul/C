#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; /*tell compiler to use standard name& space */

int main()
{
	int y,x;
	int z;
	y=5;
	x=5;
	z=y++*x++;
	cout<<"the z value"<<z;
	return 0;
}
