//Sum of two 2-d array
#include<iostream>
using namespace std;
class array{
  private: 
    //int i,j;
    int arr[2][2];
  public:
    void input();
    void display();
    void sum();
};
void array::input(){
  cout<<"Enter array: ";
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin>>arr[i][j];
    }
  }
}
void array::display(){
  cout<<"Array is : "<<endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}
void array:: sum(){
  
}

int main(){
  array a1,a2,a3;
  a1.input();
  a1.display();
  a2.input();
  a2.display();
  a3.sum();
  return 0;
}