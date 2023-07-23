#include<iostream>
using namespace std;
class info
{
    protected:
     string name;
     string clas, div, dob, bg, address;
     int long contact, tele, driving;
     int roll;                 
     int OOP, FDS;
     friend class friclass;           //friend function
    public:
     info()                               //default constructor
     {
        
        name="Abhishek";
        clas="SE";
        div="b";
        dob="04/04/2003";
        address="ABC ADDRESS";
        contact=8080142710;
        tele=8007395457;
        driving=112345567;
        roll=44;             
        OOP=100;
    
        cout<<"\n\n";

     }
    info(info &obj)                      //copy constructor
    {
        
        name=obj.name;
        clas=obj.clas;
        div=obj.div;
        dob=obj.dob;
        address=obj.address;
        contact=obj.contact;
        tele=obj.tele;
        driving=obj.driving;
        roll=obj.roll;
        OOP=obj.OOP;
        cout<<"\n\n";
    }
    /*~info()
    {
        cout<<"Destructor executed ";       //destructor
        cout<<"\n\n";

    }*/
    void accept()
    {
        cout<<"\nEnter your name :";
        cin>>name;                                   
        cout<<"\nEnter your class :";
        cin>>clas;
        cout<<"\nEnter your division :";
        cin>>div;
        cout<<"\nEnter your date of birth :";
        cin>>dob;
        cout<<"\nEnter your address :";
        cin>>address;
        cout<<"\nEnter your contact number :";
        cin>>contact;
        cout<<"\nEnter your telephone number :";
        cin>>tele;
        cout<<"\nEnter your driving liscense :";
        cin>>driving;
        cout<<"\nEnter your roll number :";
        cin>>roll;
        cout<<"\nEnter marks of OOP : ";
        cin>>OOP;
        cout<<"\nEnter marks of FDS : ";
        cin>>FDS;

        cout<<"\n\n";
    }
    void display()
    {
        cout<<"\t********Your Information Is **********\n";
        cout<<name<<"\n";
        cout<<clas<<"\n";
        cout<<div<<"\n";
        cout<<dob<<"\n";
        cout<<address<<"\n";
        cout<<contact<<"\n";
        cout<<tele<<"\n";
        cout<<driving<<"\n";
        cout<<roll<<"\n";
        cout<<OOP<<"\n";
        static int seat_number=100;                    //static member of the function
        cout<<"Your seat number is :"<<seat_number;
        seat_number++;
        cout<<"\n\n";
    }
    void display_marks()
    {
        int *f=&FDS;
        int average=((*f)+OOP)/2;
        cout<<"Average marks are : "<<average;
        cout<<"\n\n";
    }
};
class friclass
{ 
  public:
   void great()
   {
    info obj;
    cout<<"\nYou are great "<<obj.name<<" !!!\n";
    cout<<"Friend class executed ";
    cout<<"\n\n";
   }
};
inline void exam_hall_no()                                       //inline function
{
    static int hall=10;                                    //static member of the function   
    cout<<"Your exam hall number is : "<<hall<<"\n";
    cout<<"Inline function executed \n";
    hall++;
}
int main()
{
    int x;
    cout<<"Enter number of students :";
    cin>>x;
    info objec[100];
    for(int i=1;i<=x;i++){
     objec[i].accept();
     objec[i].display();
     objec[i].display_marks();

}
    /*friclass obj3;       
    obj3.great();         //calling of function from friend class
    info obj1;           //creation of object 1 
    obj1.display();      //default constructor will be called 
    exam_hall_no();      //calling of inline function 
    obj1.accept();       //calling of accept function
    obj1.display();  
    obj1.display_marks(); //Use of pointer can be seen here 
    exam_hall_no();      //calling of inline function        //use of statc variable can be
    info obj2(obj1);     //creation of object 2 using copy constructor
    obj2.display();      //copy constructor will be executed
    return 0;*/

}