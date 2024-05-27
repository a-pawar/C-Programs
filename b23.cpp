#include<iostream>
using namespace std;
const int MAX=5;
class array{
  private:
    int arr[MAX];
  public:
    void insert(int pos,int num);
    void del(int pos);
    void display();
    void search(int num);
};
void array:: insert(int pos,int num){
  for (int i = MAX-1; i >=pos ; i--)
  {
    arr[i]=arr[i-1];
}
    arr[pos-1]=num;
}
void array::del(int pos){
  for (int i = pos; i < MAX; i++)
 { 
    arr[i-1]=arr[i];
}  
    arr[MAX-1]=0;
}
void array::display(){
  for (int i = 0; i < MAX; i++)
  {
  cout<<arr[i]<<" ";
  }
}


int main(){
  array a;
  a.insert(1,25);
  a.insert(2,35);
  a.insert(3,45);
  a.insert(4,55);
  a.insert(5,65);
  a.del(3);

  a.display();
  return 0;
}