#include <iostream>

using namespace std;


class student
{
private:
    float GPA;

public:
    void setGPA(float gpa)
    {
        GPA = gpa;
    }

    float getGPA()
    {
        return GPA;
    }
};

int main()
{
    student Anup;
    Anup.setGPA(3.8);
    cout<<Anup.getGPA();
    return 0;
}
