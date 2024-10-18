#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; /*tell compiler to use standard name& space */

int main()
{
	int month,day;
	cout<<"enter the day=";
	cin>>day;
	month=day/30;
	day=day%30;
	cout<<"month="<<month <<endl <<"day="<<day;
	return 0;
}
