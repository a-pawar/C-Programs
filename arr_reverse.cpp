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
	void reverse();
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
void array::reverse(){
int j=size-1;
  for (int i = 0; i < j; i++,j--)
  {
    int temp;
    temp=p[i];
    p[i]=p[j];
    p[j]=temp;
   
  }
}

int main()
{
  array a1;
	int s;
	a1.input();
	a1.display();
  a1.reverse();
	cout<<"\n";
	a1.display();
  
  return 0;
}