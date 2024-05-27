/* 
#include<iostream>
using namespace std;

int main(){
  int n1,n2,a[20],b[20],c[40];
  cout<<"Enter size of array1: ";
  cin>>n1;
  cout<<"Enter 5 element of array1: ";
  for (int i = 0; i < n1; i++)
  {
    cin>>a[i];
  }
  cout<<"Enter size of array2 ";
  cin>>n2;
  cout<<"Enter 5 element of array2: ";
  for (int j = 0; j < n2; j++)
  {
    cin>>b[j];
  }
  int i;
  cout<<"Merge array : ";
  for ( i = 0; i < n1; i++)
  {
    c[i]=a[i];
  }
  for (int j = 0; j < n2; j++,i++)
  {
    c[i]=b[j];
  }
  for (int i = 0; i < n1+n2; i++)
  {
    cout<<c[i]<<" ";
  }
  return 0;
}
#include<iostream>
using namespace std;

int main(){
  int n1,n2,a[20],b[20],c[40];
  cout<<"Enter size of array1: ";
  cin>>n1;
  cout<<"Enter 5 element of array1: ";
  for (int i = 0; i < n1; i++)
  {
    cin>>a[i];
  }
  cout<<"Enter size of array2 ";
  cin>>n2;
  cout<<"Enter 5 element of array2: ";
  for (int j = 0; j < n2; j++)
  {
    cin>>b[j];
  }

for (int i = 0,j=0,k=0; k < n1+n2;k++)
{  
  if(a[i]<b[j]){
    c[k]=a[i];
    i++;
  }
  else{
    c[k]=b[j];
    j++;
  }
}
 for (int i = 0; i < n1+n2; i++)
  {
    cout<<c[i]<<" ";
  }
  return 0;
}
#include<iostream>
using namespace std;

int main(){
  int n1,n2,a[20],b[20],c[40];
  cout<<"Enter size of array1: ";
  cin>>n1;
  cout<<"Enter element of array1: ";
  for (int i = 0; i< n1; i++)
  {
    cin>>a[i];
  }
  cout<<"Enter size of array2 ";
  cin>>n2;
  cout<<"Enter  element of array2: ";
  for (int j = 0; j < n2; j++)
  {
    cin>>b[j];
  }
  int i=0,j=0,k=0;
 while(i<n1&&j<n2){
    
    if(a[i]<b[j]){
    c[k++]=a[i++]; 
  }
  else{
    c[k++]=b[j++];
  }
 }
 while (i<n1)
 {
    c[k++]=a[i++]; 
 }
 while(j<n2){
    c[k++]=b[j++];
 }
 for ( i = 0; i < n1+n2; i++)
  {
    cout<<c[i]<<" ";
  }
  return 0;
}
*/
