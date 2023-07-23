//  Write C++ program using STL for sorting and searching user defined records such as personal 
// records (Name, DOB, Telephone number etc) using vector container.


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class AA
{ public:
 char name[40];
 char dob[10];
 int s;
};

AA temp;
vector<AA>obj;
vector<AA>::iterator ptr;

void create()
{
  cout<<"Enter number of records : ";
  int n;
  cin>>n;
  for(int i=0;i<n;i++)
  { 
    cout<<endl;
    cout<<"Enter your name : ";
    cin>>temp.name;
    cout<<"Enter your birthdate : ";
    cin>>temp.dob;
    cout<<"1Enter your serial number : ";
    cin>>temp.s;
    obj.push_back(temp);
  }
}

void display()
{ 
    cout<<"\n";
  for(ptr=obj.begin();ptr !=obj.end();++ptr)
  {
   
   
   cout<<"Serial number : ";
   cout<<(*ptr).s<<endl;
   cout<<"\tName : ";
   cout<<(*ptr).name<<endl;
   cout<<"Date of Birth : ";
   cout<<(*ptr).dob<<endl;
   cout<<"\n------------------------------------\n";
  
  }

}
 
 void search()
 {
  int d;
  cout<<"\nEnter serial number whose information you want : ";
  cin>>d;
  for(ptr=obj.begin();ptr !=obj.end();++ptr)
  {
    if(d==((*ptr).s))
    {
     cout<<(*ptr).name<<endl;
     cout<<(*ptr).dob<<endl;
    }
  }
}
bool comp(AA a1, AA a2)
{
 return a1.s>a2.s;
}
void sorts()
{

  vector<AA>::iterator p2;
   for(ptr=obj.begin();ptr !=obj.end();++ptr)
   {
     for(p2=obj.begin();p2!=obj.end();++p2)
     {
      if(comp((*ptr),(*p2)))
      {
         AA t1=(*ptr);
        (*ptr)=(*p2);
        (*p2)=t1;
      }
     }
   }
   
}

int main()
{
  string g;
 do
 {
 int ch;
 cout<<"\n\t\t----------MENU---------------";
 cout<<"\n\tEnter 1 : For creating database ";
 cout<<"\n\tEnter 2 : For displaying database ";
 cout<<"\n\tEnter 3 : For searching database ";
 cout<<"\n\tEnter 4 : For sorting database ";
 cout<<"\nEnter your choice : ";
 cin>>ch;
 switch(ch)
 {
  case 1:
   create();
   break;
  case 2:
   display();
   break;
  case 3:
   search();
   break;
  case 4:
   sorts();
   display();
   break;
  default:
   cout<<"\nInvalid Choice !!!!";
 }
 cout<<"\nDo you want to continue ?(y/n) : ";
 cin>>g;
 }
 while(g=="y");

 return 0;

}
