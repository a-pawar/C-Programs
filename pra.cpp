/*#include<iostream>
using namespace std;
class cons{
    int i;
  public:
    cons(){
      cout<<"In default constructor\n";
        i=10;
    }
    cons(int n){
      cout<<"\nIn parametrised constructor\n";
      i=n;
    }
    cons(cons &c ){
      cout<<"\nIn Copy constructor\n";
      i=c.i;
    }
    void display(){
        cout<<i;
    }
};
int main(){
  cons c1;
  c1.display();
  cons c2(50);
  c2.display();
  cons c3=c1;
  c3.display();
  return 0;
}  
#include <iostream>
using namespace std;
class array
{
	int p[50];
	int size,*ptr;

public:
	
	void input();
	void display();
	
};
void array::input()
{ cout<<"Enter size of array: ";
  cin>>size;
	cout << "Enter elements of array : ";
	for (int i = 0; i < size; i++)
	{
		cin >> p[i];
	}
}
void array::display()
{    ptr=p;
	cout << "Array : ";
	for (int i = 0; i < size; i++)
	{
		cout <<*ptr << " ";
    ptr++;
	}
  cout<<"\nadress: "<<endl;
	for (int i = 0; i < size; i++)
	{
		cout <<ptr << " ";
    ptr++;
	}
}
int main()
{
	array a1;
	a1.input();
	a1.display();
  
	return 0;
}
#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Size of array : ";
  cin>>n;
  int arr[n];
  cout<<"Enter elements array : ";
  for (int i = 0; i < n; i++)
  {
    cin>>arr[i]; 
  }
  for (int i = 0; i < n-1; i++)
  {
    for (int j = 0; j < n-j-1; j++)
    {
      if(arr[j]>arr[j+1]){
        int temp;
        temp=arr[j+1];
        arr[j+1]=arr[j];
        arr[j]=temp;
        cout<<"in";
      }
    }
    
  }
  
  cout<<"After Sorting : ";
  for (int i = 0; i < n; i++)
  {
    cout<<arr[i]<<" ";
  }
  
  return 0;
}

#include<iostream>
using namespace std;
class array
{
	int size;
	int p[50];
	public:
		array()
		{
			cout<<"\nENnter the size of element:";
			cin>>size;
		}
		void input();
		void display();
		void selection_sort();
		~array(){
		}
};
void array::input()
{
	cout<<"\nEnter the element of array:";
	for(int i=0;i<size;i++)
	{
		cin>>p[i];
	}
}
void array::display()
{
    cout<<"\nArray:";
    for(int i=0;i<size;i++)
{
    cout<<p[i]<<" ";
}
    cout<<"\n";

}
void array::selection_sort()
{

	for(int i=0;i<size;i++)
	{
	for(int j=i+1;j<size;j++)
	if(p[j]<p[i])
	{
	int temp=p[i];
	p[i]=p[j];
	p[j]=temp;
    } 
   }
}

int main()
{
//	cout<<"\nEnter the no of element you want to dislay:";
//	int i;
//	cin>>i;
	array a1;
	a1.input();
	a1.display();
	a1.selection_sort();
	a1.display();
	return 0;
}

#include<iostream>
using namespace std;

int main(){
  long int a,b,c;
  cout<<"Enter two number";
  cin>>a>>b;
  c=a*b;
  cout<<"\nProduct="<<c;

  return 0;
}
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
	cout << "Number is found";
	}
	else
	cout << "Number is not found";
}

int main()
{
	array a1;
	int s;
	a1.input();
	a1.display(); 

	s = a1.element();
	a1.search(s);
  
	 
	return 0;
}
*/ 
#include<iostream>
using namespace std;
class array
{ int size=10;
  int p[10];

public:
  void insert();
  void display();
	void delet();
};
void array::display()
{
	cout << "Array : ";
	for (int i = 0; i < size; i++)
	{
		cout << p[i] << " ";
	}
}
void array::insert(){
  int top=0,value;
  
  cout<<"Enter Value: ";
  cin>>value;
	for (int i = 0; i < top; i++)
	{
   p[top++]=value;
	}
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
	
  a1.insert();
	a1.display(); 
	a1.delet();
	a1.display(); 
	return 0;
}