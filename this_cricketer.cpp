#include<iostream>
using namespace std;

class cricketer
{
	public:
		string name;
		int runs;
	
	cricketer(string name,int runs)
	{
		this->name=name;
		this->runs=runs;
				
	}		
};
void print(cricketer c)
{
	cout<<c.name<<" "<<c.runs<<endl;
}
int main()
{
	cricketer c1("rohit sharma",150);
	cricketer c2("virat kholi",100);
	print(c1);
	print(c2);
}
