//3.swap two numbers
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
   
   int num1=0,num2=0,temp=0;
   cout<<"Enter a number1 :";
   cin>>num1;
   cout<<"Enter a number2 :";
   cin>>num2;
   cout<<"BEFORE SWAPING NUMBERS "<<num1<<"\t"<<num2;
   temp=num1;
   num1=num2;
   num2=temp;  
   cout<<"\nAFTER SWAPING NUMBERS  "<<num1<<"\t"<<num2;
   getch();
   return 0;
}