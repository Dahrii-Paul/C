#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; /*tell compiler to use standard name& space */

int main()
{
	int a,b,c,x;
	a=2;
	b=12;
	c=2;
	x=3*a-b/6+c*c-5;
	cout<<"the result="<<x<<endl;
	
// 2nd practice;
	int x1,x2,x3;
	
	x1=(3*a)-(b/6)+(c*c)-5;
	cout<<"the result="<<x1<<endl;
// 3rd practice;
	x2=3*a-b/(6+c*c)-5;
	cout<<"the result="<<x2<<endl;
//4th
	x3=3*a-b/(6+(c*c))-5;
	cout<<"the result="<<x3<<endl;
	return 0;
}
