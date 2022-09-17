#include<iostream>
#include<string>
using namespace std;

class data
{
       char n[50],g[6];
       int r,a;
       
       public :
               void getdata();
               void display();
}c;

void data :: getdata()
{
           cout<<"Enter name : ";
     		  cin.getline(n,50);
           
            cout<<"Enter age : ";
           cin>>a;
           
            cout<<"Enter roll no. : ";
           cin>>r;
           
            cout<<"Enter gender : ";
           cin>>g;
}
void data :: display()
{
          cout<<"\nName : "<<n;
          cout<<"\nAge : "<<a;
          cout<<"\nRoll no. : "<<r;
          cout<<"\nGender : "<<g<<endl;
}

int main()
{
        c.getdata();
        c.display();
        
        return 0;
}	
