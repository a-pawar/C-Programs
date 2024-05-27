#include<iostream>
using namespace std;
class cons{
   private:
      int a,b;
      cons(int x,int y){
        a=x;
        b=y;
      }
   public:
     cons(){
       a=10;
       b=20;
     }
      void showdata(){
       cout<<"a= "<<a<<endl<<"b= "<<b<<endl;
     }
};
int main(){
  //cons c1(2,3);
  cons c2;
  c2.showdata();
  return 0;
}