#include<iostream>
using namespace std;
//class
class Vector
{
public:
	int size;
	int capacity;
	int *arr;
	
	// default constructor
	Vector()
	{
		size=0;
		capacity=1;
		arr=new int[1];		
	}	
	
	//add funtion
	
	void Add(int element)
	{
		if(size==capacity)
		{
			capacity*=2;
			int* arr2=new int[capacity];
			for(int i=0;i<size;i++)
			{
				arr2[i]=arr[i];
			}
			
			arr=arr2;
		}
		arr[size++]=element;
		
	}
	//print funtion
	
	void print()
	{
		for(int i=0;i<size;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	}
	
	//get funtion
	
	int Get(int index)
	{
		return arr[index];
		
	}
	
	//remove fution 
	void remove()
	{
		size--;
	}
};

int main()
{
	Vector v;
	cout<<v.size<<" "<<v.capacity<<endl;
	v.Add(10);
	v.print();
	cout<<v.size<<" "<<v.capacity<<endl;
	v.Add(20);
	v.print();
	cout<<v.size<<" "<<v.capacity<<endl;
	v.Add(30);
	v.print();
	cout<<v.size<<" "<<v.capacity<<endl;
	v.Add(40);
	v.print();
	//get funtion calling 
	cout<<v.Get(3)<<endl;
	
	v.remove();
	v.print();
	cout<<v.size<<" "<<v.capacity<<endl;
	
}




