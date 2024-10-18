#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; /*tell compiler to use standard name& space */

int main()
{
	int y,x,result;
	cout<<"enter any two number:"<<"\n"<< "No1="; cin>>y;
	cout<<"no2="; cin>>x;
	
	result=y>x; cout<<"result "<<result;
	result=y>=x; cout<<"result  "<<result;
}
