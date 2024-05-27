//array & constructor to input,display an dynamic array using class
// use of copy constructor and assigment operator
#include <iostream>
using namespace std;
class array
{
  int *p, size;

public:
  array()
  {
    cout << "\nEnter size of array : ";
    cin >> size;
    p = new int[size];
  }
  array(const array &a)
  {
    cout << "\nCopy constructor called";
    cout << "\nEnter size of array : ";
    cin >> size;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
      p[i] = a.p[i];
    }
  }
  void input();
  void display();
  void operator=(const array &ar)
  {
    for (int i = 0; i < size; i++)
    {
      p[i] = ar.p[i];
    }
  }
  
  ~array()
  {
    delete p;
  }
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
int main()
{
  array a1;
  a1.input();
  a1.display();
  array a2 = a1; //copy constructor called
  a2.display();
  array a3;
  a3 = a1; //assignment oprator a1.operator(a3)
  a3.display();

  return 0;
}