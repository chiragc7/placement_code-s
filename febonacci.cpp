//fibonacii series using funtion 
/*
#include<iostream>
using namespace std;
void fibonacii(int n)
{
	int a=0,b=1,next=0;
	
	for(int i=1;i<=n;i++)
	{
		if(i==1)
		{
			cout<<a<<" ";
			continue;
		}
		
		if(i==2)
		{
			cout<<b<<" ";
			continue;
		}
		
		next=a+b;
		a=b;
		b=next;
		
		cout<<next<<" ";
	}
}
int main()
{
	int n;
	cout<<"enter the number of terms : ";
	cin>>n;
	
	cout<<"fibonacci series : ";
	fibonacii(n);
	return 0;
	
}

*/
// other logic 
#include<iostream>
using namespace std;

void fibonacii(int n)
{
	 int a=0,b=1,c,i=3;
	
	
	cout<<a<<"\t"<<b<<"\t";
	while(i<=n)
	{
		c=a+b;
		cout<<c<<"\t";
		a=b;
		b=c;
		i++;
	}
}
int main()
{
	int n;
	cout<<"enter the number what you want : ";
	cin>>n;
	 fibonacii(n);
	 return 0;
}






