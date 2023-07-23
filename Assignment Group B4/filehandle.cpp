//  Write a C++ program that creates an output file, writes information to it, closes the file, open 
// it again as an input file and read the information from the file.


#include <iostream>
#include<fstream>
using namespace std;
class data{
    string name;
    int roll;
    public:
    void getdata();
    void setdata();
};

void data::getdata(){
    cout<<"Enter Name"<<endl;
    cin>>name;
    cout<<"Enter Roll Number"<<endl;
    cin>>roll;
}

void data::setdata(){
    cout<<"Name:"<<name<<endl;
    cout<<"Roll Number:"<<roll<<endl;
}

int main(){
    char ch;
    data obj;
    data obj2;
    ofstream file;
    file.open("sample.txt",ios::binary|ios::out|ios::app);
    do{
        cout<<"DATABASE"<<endl;
        obj.getdata();
        file.write((char*)&obj,sizeof(obj));
        cout<<"Do you want to continue"<<endl;
        cin>>ch;
    }while(ch=='y');
    file.close();
    ifstream file1;
    file1.open("sample.txt",ios::app|ios::in|ios::binary);
    file1.read((char*)&obj,sizeof(obj));
    while(!file1.eof()){
        cout<<"Person Data:"<<endl;
        obj.setdata();
        file1.read((char*)&obj,sizeof(obj));
        cout<<endl;
    }
    cout<<endl;
    file1.close();
    return 0;
}