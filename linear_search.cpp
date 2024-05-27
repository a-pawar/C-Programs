#include<iostream>
using namespace std;
const int MAX=5;
class array{  
  private:
    int arr[MAX];
    int count;
  public:
    array();
    void add(int item);
    void display();
    int search(int item);    
};
array::array(){
  count=0;
  for (int i = 0; i < MAX; i++)
  {
    arr[i]=0;
  } 
}
void array::display(){
  for(int i=0;i<MAX;i++){
  cout<<arr[i]<<" ";
  }
}
void array::add(int item){
  if (count<MAX){
    arr[count]=item;
    count++;
  }
  else  
    cout<<"\nArray is full"<<endl;
}
int array::search(int num){
  int i;
    for( i=0;i<count;i++){
      if(arr[i]==num)
        break;
    }
      
      if(i==count)
      return-1;
      else 
       return i;
}
int main(){
  array a;
  a.add(11);
  a.add(22);
  a.add(33);
  a.add(44);
  a.add(55);
  a.display();
 // a.add(66);
 // a.add(77);
 // a.add(88);
  int num;
  cout<<"Enter num to search: ";
  cin>>num;
  int i=a.search(num);
  if(i==-1){
    cout<<"Number is not present in the array";
  }
  else 
    cout<<"Number is at position "<<i<<" in the array";
return 0;
}