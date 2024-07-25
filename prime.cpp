#include<iostream>
using namespace std;
bool prime(int n)
{	
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	
    }
    return true;
    
}

int main()
{
	
	int n;
	cout<<"enter a nuber : ";
	cin>>n;
	if(prime(n))
	{
		cout<<"prime ";
	}
	else
	{
		cout<<"not prime ";
	}
	return 0;
}
