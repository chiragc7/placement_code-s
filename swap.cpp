#include<iostream>
using namespace std;

int main()
{
	int a ,b ;
	cout<<"enter first number : ";
	cin>>a;
	cout<<"enter secound number : ";
	cin>>b;
	cout<<"befor swap "<<endl;
	
	cout<<"a ="<<a<<" "<<"b ="<<b<<" "<<endl;
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"after swap "<<endl <<"a ="<<a<<" "<<"b ="<<b;
	
	return 0;
}
