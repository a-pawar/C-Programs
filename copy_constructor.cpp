#include<iostream>
using namespace std;
class shape{
    float length,breadth,area,peri;
  public:
    
    shape(){  
      length=1.5;
      breadth=4.6;
    }  
    shape(const shape&s){
    cout<<"Copy constructor called"<<endl;
       length=s.length;
       breadth=s.breadth;
    } 
    /*
    void operator=(shape s){
       length=s.length;
       breadth=s.breadth;
    }
     */
    float area1(){
      area=length*breadth;
       return area;
    }
    float perimeter(){
      peri=2*(length+breadth);
       return peri;
    }

};
int main(){
    shape s1,s3,s4;
    cout<<s1.area1()<<endl;
    cout<<s1.perimeter()<<endl;
    shape s2=s1;          //copy constructor called              
    cout<<s2.area1()<<endl;
    cout<<s2.perimeter()<<endl;
    s3=s1;                   //copy constructor not called  
    cout<<s3.area1()<<endl;
    cout<<s3.perimeter()<<endl;
  return 0;
}