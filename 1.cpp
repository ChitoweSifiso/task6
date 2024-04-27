#include <iostream>
#include <string>
using namespace std;

int main(){
    //null pointer
    int* pX = nullptr;

    //dyanamically allocating memory
     pX = new int;

     cout<<"enter an integer value";
     cin>>*pX;

     cout<<"Value of dynamically allocated integer"<<*pX<<endl;

     delete pX;

    string* pY = nullptr;
    string pY;

    //dyanamically allocating memory
     pY = new string;

     cout<<"enter an string value";
     getline(cin, pY);

     cout<<"Value of dynamically allocated string"<<*pY<<endl;

     delete pY;

    return 0;
    
}