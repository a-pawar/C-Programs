#include<iostream>
using namespace std;
class array{
    int *p;
  public:
    array(){}
    array(int sz){ 
      p=new int[sz];
    }
    void input(int sz){
      for (int i = 0; i < sz; i++)
      {
        cin>>p[i];
      }
    }
    void display(int sz){
      for (int i = 0; i < sz; i++)
      {
        cout<<p[i]<<" ";
      }
      cout<<endl;
    }
    ~array(){ 
      delete[] p;
    }
    
};
int main(){
  int size;
  cout<<"Enter the size of array ";
  array a1(size);
  cin>>size;
  a1.input(size);
  a1.display(size);
  return 0;
}