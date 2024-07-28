#include<iostream>
using namespace std;

class car
{
public:
	string name;
	int price;
	int sheat;
	
	car(string n,int p,int s)
	{
		name=n;
		price=p;
		sheat=s;
	}
	
};
void print(car c)
{
	cout<<c.name<<" "<<c.price<<" "<<c.sheat<<endl;
}

int main()
{
	car c1("Honda City",1500000,5);
	car c2("Audi A8",2000000,4);
	
	print(c1);
	print(c2);
	
	
	
	
/*	car c1;
	c1.name="Honda City ";
	c1.price=1500000;
	c1.sheat=5;
	
	car c2;
	c2.name="audi A8";
	c2.price=700000;
	c2.sheat=5;
	
	print(c1);
	print(c2);
	
	*/
	
}
