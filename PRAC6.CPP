//6. C++ program to create a simple class and object.
#include<iostream>
#include<conio.h>
using namespace std;
class greetings
{       
    public: void display(){
         cout<<"Have a nice day:)";
    }
};
int main()
{       
    greetings obj;
    obj.display();
    return 0;
}