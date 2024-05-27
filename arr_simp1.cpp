//array & constructor to input,display,search,sort,max,insert ,delete an simple array using class 

#include<iostream>
using namespace std;
class array
{ int size;
  int p[50];

public:
	array()
	{
		cout << "Enter size of array : ";
		cin >> size;
	}   
	void input();
	void display();
	int element();
	void search(int);
	void sort();
  void max();
  void insert();
	void delet();
	~array(){	}
};
void array::input()
{ 

	cout << "Enter elements of array : ";
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}
void array::display()
{
	cout << "Array : ";
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
}
int array ::element()
{
	int n;
	cout << "\nEnter a number to search : ";
	cin >> n;
	return n;
}
void array ::sort()
{
	cout << "\nAfter Sorting ";
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (p[i] > p[j])
			{
				int temp = p[j];
				p[j] = p[i];
				p[i] = temp;
			}
		}
	}
}
void array ::search(int s)
{
	int flag = 0;
	for (int i = 0; i < size; i++)
	{
		if (p[i] == s)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
	cout << "Number is found";
	}
	else
	cout << "Number is not found";
}
void array::max(){ 
  cout<<"\nMaximum element: "<<p[size-1];
}
void array::insert(){
  int pos,value;
  cout<<"\nEnter which position u want to insert element: ";
  cin>>pos;
  cout<<"Enter Value: ";
  cin>>value;
	
  for (int i = size; i >=pos; i--)
  {
    p[i]=p[i-1];
	}
  p[pos-1]=value;
	size++;
}
void array::delet(){
    int pos;
  cout<<"\nEnter which position u want to delete element: ";
  cin>>pos;
	//pos=pos-1;
	//size=size-1;
	for (int i = --pos; i < size; i++)
  {
		p[i]=p[i+1];
	} 
	p[size-1]=0;
}
int main()
{
	array a1;
	int s;
	a1.input();
	a1.display(); 
	a1.sort();
	a1.display();
	s = a1.element();
	a1.search(s);
  a1.max();
  a1.insert();
	a1.display(); 
	a1.delet();
	a1.display(); 
	return 0;
}