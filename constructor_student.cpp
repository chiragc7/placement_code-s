#include<iostream>
using namespace std;

class student
{
public:
	string name;
	int rno;
	string course;
	float gpa;
	
	student(string n,int r,string c,float g)
	{
		name=n;
		rno=r;
		course=c;
		gpa=g;
	}
};

void print(student s)
{
	cout<<"Name = "<<s.name<<"\n"<<"Roll No. = "<<s.rno<<"\n "<<" Course = "<<s.course<<"\n "<<"GPA = "<<s.gpa<<endl<<"\n";
}

int main()
{
	
	student s1("chirag",12,"MCA",7.64);
	student s2("raghav",22,"MCA",8.8);
	
	print(s1);
	print(s2);
}
