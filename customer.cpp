// bank customer program with depostit funtion and withdrawal funtion and all details of bank no. of users and total balance in bank

#include<iostream>
using namespace std;

class customer
{
	string name;
	string bank_name;
	int account_number;
	int balance;
	static int total_user;  //count total user in bank
	static int total_balance; // count total balance in bank
	
	public:
		//default constracter
		customer()
		{
			
		}
		//paramerterize constracter
		customer(string name,string bank_name,int account_number,int balance)
		{
			this->name=name;
			this->bank_name=bank_name;
			this->account_number=account_number;
			this->balance=balance;
			total_user++; // add user for calling constracter
		}
		
	// amount deposit funtion
	
		void deposit(int amount)
		{
			if(amount>0)
			{
			
				cout<<"deposit amount is : "<<amount<<endl;
					balance+=amount;
			
			}
			else
			{
				cout<<"invalid amount : pleace enter valid amount ";
			}
			
		}
		
		
	//amount withdrawal funtion
		
		void withdrawal(int amount)
		{
			if(amount>0 && amount<=balance)
			{
				cout<<"withdrawal in account number : "<<account_number<<endl;
				cout<<"withdrawal amount is : "<<amount<<endl;
				balance-=amount;
				total_balance-=amount;
			}
			else{
				cout<<"amount is not valid";
			}
			
		}
		
		//total balance in acount funtion
		
		void total()
		{
			total_balance+=balance;	
			
		}
		
		//display the detalis of user name acount number etc.
		
			void display()
		{
			cout<<"user number : "<<total_user<<endl;
			cout<<"name : "<<name<<endl<<"bank name : "<<bank_name<<endl<<"account number : "<<account_number<<endl<<"balance :"<<balance<<endl;
			
		}
		
		// display new amount after deposit and withdrawal
		
		void display_2()
		{
			cout<<"New amount in account numbeer : "<<account_number<<endl;
			cout<<"balance : "<<balance<<endl;
		}
		
		// display total amount in bank
		
		void display_3()
		{
			cout<<" total amount in bank is : "<<total_balance<<endl;
		}
	
			
};
 //class end
 
 //iniclize static variable 

int customer::total_balance=0;
int customer::total_user=0;

// main funtion

int main()
{
//first customer

	customer A1("chirag chauhan","PNB",101,1000);
	A1.display();
	A1.deposit(500);
	A1.display_2();
	A1.total();

//secound customer

	customer A2("raj","PNB",102,2000);
	A2.display();
	A2.deposit(500);
	A2.display_2();
	A2.total();
	A2.display_3();
	
	A1.withdrawal(500);
	A1.display_2();
	A1.display_3();
}
