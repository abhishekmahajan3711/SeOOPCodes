// Write a function template for selection sort that inputs, sorts and outputs an integer array and 
// a float array.

#include<iostream>
#include <stdlib.h>
using namespace std;
template<class Abhi>
void select(Abhi a[])
{
    int n;
    int min;
    Abhi temp;

     cout<<"Enter Total Number of elements in Array:"<<endl;
          cin>>n;
          for(int i=0;i<n;i++){
              cout<<"Enter Elements of array:"<<endl;
              cin>>a[i];
          }
        for(int i=0;i<n-1;i++)
        {
             min=i;
           for(int j=i+1; j<n; j++){
               if(a[j]<a[min]){
               min=j;
               }
              }
              temp=a[min];
                a[min]=a[i];
                a[i]=temp;
            }
            cout<<"Sorted Array:"<<endl;
            for(int i=0;i<n;i++){
                cout<<a[i]<<endl;
        }
}

int main()
{
    int ch;
    char s;
    int b[50];
    float a[50];
    do{
    cout<<"\tMENU"<<endl;
    cout<<"\tEnter 1 : for integer sorting\n";
    cout<<"\tEnter 2 : for float sorting\n";
    cout<<"Enter your choice : ";
    cin>>ch;
    switch(ch)
    {
        case 1 :
          
          select<int>(b);
          break;
         case 2 :
          
          select<float>(a);
          break;
        default:
          cout<<"Invalid choice \n";
    }
    cout<<"Do you want to continue ?\n";
    cin>>s;
    }while(s=='y');
return 0;
}    
