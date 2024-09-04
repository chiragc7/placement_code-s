
//single level inheritance 

#include<iostream>
using namespace std;
class human
{
	protected:
		string name;
		int age;
		
};

class student:protected human
{
	int roll_number;
	public:
	 	student(string name,int age,int roll_number)
		 {
			this->name = name;
			this->age = age;
			this->roll_number = roll_number; 	
		 }	
		 
		 
		 void display()
		 {
		 	cout<<"name is : "<< name<<endl<<"age is : "<<age<<endl<<"roll number is : "<<roll_number<<endl;
		 }
};

int main()
{
	student s1("chirag ",22,235401014);
	s1.display();
}


/*

we write aqlso this type 


#include<iostream>
using namespace std;
class human
{
protected:
	string name;
	int age;
	
	public:
	
	human(string name,int age)
	{
		this->name = name;
		this->age = age;
	}
	
};

class student:protected human
{
	int roll_number;
	public:
	student( string name,int age,int roll_number):human(name,age)
	{
		this->roll_number =roll_number;
	}
	
	void display()
	{
		cout<<name<<" "<<age<<" "<<roll_number<<endl;
	}
	
	
};

int main()
{
	student s("chirag",21,235401014);
	s.display();
}

*/










