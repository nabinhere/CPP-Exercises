#include <iostream>
#include <string>

using namespace std;
void student(string name, int age, int grade);
void countryFunc(string country  = "Japan");

//this swap funtion will not work
void swap(int a, int b){
int temp  =a;
a = b;
b = temp;
}

//this swap funtion will work - call by pointer
void swapPtr(int* a, int* b){
int temp;
temp  = *a;
*a = *b;
*b = temp;
}

//this swap funtion will also work - call by reference - c++ pecial
void swapRefr(int &a, int &b){
int temp;
temp  = a;
a = b;
b = temp;
}


int main(){
    countryFunc("Nepal");//prints Nepal
    cout<<"\n";
    countryFunc();//prints Japan
    cout<<"\n";
    student("Ram Pandey", 17, 12);//prints Japan

    int x = 5, y = 10;
    cout<<"\nbefore calling swap function: x = "<<x<<" y = "<<y;
    swap(x,y);
    cout<<"\nafter calling swap function: x = "<<x<<" y = "<<y;
    cout<<"\nbefore calling swapPtr function: x = "<<x<<" y = "<<y;
    swapPtr(&x,&y);
    cout<<"\nafter calling swapPtr function: x = "<<x<<" y = "<<y;
    cout<<"\nbefore calling swapRefr function: x = "<<x<<" y = "<<y;
    swapRefr(x,y);
    cout<<"\nafter calling swapRefr function: x = "<<x<<" y = "<<y;

return 0;
}

void countryFunc(string country){ //Japan is a default parameter
cout<<country;
}

void student(string name, int age, int grade){
cout<<name<<"  "<<age<<" years old"<<"  "<<" grade "<<grade;
}
