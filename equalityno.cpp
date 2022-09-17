//Vedarth Jayant Khandve 26 SE B 30 AUGUST 2022
#include <iostream>
using namespace std;
 
int main()
{
int first,second,third,mul;
cout<<"Enter first no"<<endl;
cin>>first;
cout<<"Enter second no"<<endl;
cin>>second;
cout<<"Enter third no"<<endl;
cin>>third;


if (first==second==third)
{
cout<<"The no. are equal"<<endl;
}
if (first > second && first > third )
{
cout<<"The first no is greatest of all"<<endl;
}
if (second > first && second > third )
{
cout<<"The second no is greatest of all"<<endl;
}
if (third > first && third > second )
{
cout<<"The third no is greatest of all"<<endl;
}
}

