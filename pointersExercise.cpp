#include <iostream>

using namespace std;

//declaring functions for individual exercises
void exer1();
void exer2();
void exer3();
void exer4();


int main()
{
    //uncomment to see the working of these functions
//    exer1();
//    exer2();
    exer3();
    exer4();

return 0;
}

/*Exercise 1
Write a program that asks the user to enter integers as inputs to be stored in the variables 'a' and 'b' respectively.
There are also two integer pointers named ptrA and ptrB. Assign the values of 'a' and 'b' to ptrA and ptrB respectively,
and display them.
*/
void exer1()
{
    int a,b;
    int* ptrA; int* ptrB;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;

    ptrA = &a;
    ptrB = &b;
    cout<<"a = "<<*ptrA<<" and b = "<<*ptrB<<"\n";
}

/*
Exercise 2
Write a C++ program to find the max of an integral data set. The program will ask the user to input
the number of data values in the set and each value. The program prints on screen a pointer that points
 to the max value.
*/
void exer2()
{
 int numbers[3];
 for(int i=0; i<3; i++)
 {
     cout<<"Enter number"<<i+1<<": ";
     cin>>numbers[i];
 }

 int maxNum;
 int* maxPtr = &maxNum;
 *maxPtr = numbers[0];
 for(int i=0; i<sizeof(numbers)/sizeof(int);i++)
 {
     if(numbers[i]>*maxPtr)
     {
         *maxPtr = numbers[i];
     }
 }

 cout<<"max number = "<<*maxPtr;
}


void exer3()
{

}


/*
Exercise 4
Given the string "A string." Print on one line the letter on the index 0,
 the pointer position and the letter t. update the pointer to pointer +2.
 Then, in another line print the pointer and the letters r and g of the string
  (using the pointer).
  */
void exer4()
{
    char str[] = "A string";
    char* strPtr = str;
    cout<<str[0]<<" "<<*strPtr<<" "<<str[3]<<"\n";
    strPtr += 2;
    cout<<*strPtr<<" "<<str[4]<<" "<<str[7]<<"\n";

}
