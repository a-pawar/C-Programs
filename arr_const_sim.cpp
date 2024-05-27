//array & constructor to input,display,search,sort an simple array using class 
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
		cout << "Number is found\n";
	}
	else
		cout << "Number is not found\n";
}
void array ::sort()
{
	cout << "After Sorting : \n";
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
int main()
{
	array a1;
	int s;
	a1.input();
	a1.display(); 
	s = a1.element();
	a1.search(s);
	a1.sort();
	a1.display();
	return 0;
}