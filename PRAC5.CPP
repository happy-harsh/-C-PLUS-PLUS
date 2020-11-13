// 5. Largest among three numbers 
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"ENTER THREE NUMBERS ";
    cin>>num1>>num2>>num3;
    if(num1>num2&&num1>num3)
    {
        cout<<"NUMBER1 IS GREATEST "<<num1;
    }
    else if (num2>num1&&num2>num3)
    {
        cout<<"NUMBER TWO IS GREATEST "<<num2;
    }
     else if (num3>num1&&num3>num2)
    {
        cout<<"NUMBER THREE IS GREATEST "<<num3;
    }
    getchar();
    return 0;

}