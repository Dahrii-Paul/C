//write a program in c++ wheather a person is egligible to vote or not? 18yrs plus are egligible to vote?
#include <iostream>
using namespace std;

int main()
{
	int age,c;
	cout<<"Enter the age =";
	cin>>age;
	
	if(age>=18){
		cout<<"Egligible to vote"<<endl;
	}else{
		c=18-age;
		cout<<"i have to wait for "<<c;
	}
}
