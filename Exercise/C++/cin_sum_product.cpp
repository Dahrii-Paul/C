#include<iostream>  /*compiler preprocessor defn cin and cout */ 
using namespace std; /*tell compiler to use standard name& space */

/* use cin function in sum and product*/

main()
{
	int product, no1,no2;
	int sum;
	cout<<"enter the first numbers:";
	cin>>no1;
	cout<<"enter the Second numbers:";
	cin>>no2;
	product=no1*no2;
	sum=no1+no2;
	cout<<"\n" <<"product="<<product<<endl;
	cout<<"sum="<<sum;
}

