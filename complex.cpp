#include <iostream>

using namespace std;


class complex
{
public:
    float real, imag;

};
int main()
{
    complex c1, c2;
    cout<<"First real Part:";
    cin>>c1.real;
    cout<<"First imaginary Part:";
    cin>>c1.imag;
    cout<<"second real Part:";
    cin>>c2.real;
    cout<<"Second imaginary Part:";
    cin>>c2.imag;
    cout<<"the sum is = "<<c1.real+c2.real<<" + "<<c1.imag+c2.imag<<"i";
    return 0;
}
