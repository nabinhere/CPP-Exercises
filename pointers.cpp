#include <iostream>
#include <string>
using namespace std;

int main(){
 string food = "pizza";
 string food2 = "cake";
 string* foodPtr = &food;
 string* foodPtr2 = &food2;

 cout<<&food;
 cout<<"\n"<<foodPtr<<"\n";
 cout<<&food2;
 cout<<"\n"<<foodPtr2;
 cout<<"\n"<<food;
 cout<<"\n"<<*foodPtr;
 cout<<"\n"<<food2;
 cout<<"\n"<<*foodPtr2;

 //modifying the pointers

 *foodPtr = "Hamburger";
 *foodPtr2 = "DaalVaat";

 cout<<"\n"<<*foodPtr;
 cout<<"\n"<<food;
 cout<<"\n"<<*foodPtr2;
 cout<<"\n"<<food2;

}


