#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
    string expr;
    cin>>expr;
    //cout<<expr.length();
    int operatorCount = 0;    //variable to count the number of operators in the expression
    int operatorIndices[expr.length()];    //an array to hold the index of operators
    for(int i=0; i<expr.length(); i++)
    {
        //count the number of operators and fill the operator index
        if(expr[i]==42||expr[i]==43||expr[i]==45||expr[i]==47)
        {
            operatorIndices[operatorCount] = i;
            operatorCount++;

        }

            //if a character in string is not a number or character, print syntax error
        if(!(expr[i]==42||expr[i]==43||expr[i]==45||expr[i]==47||
           ((expr[i]>=48)&&(expr[i]<=57))))
        {
            cout<<"syntax Error"<<endl;
            exit(1);

        }
    }

    int prevOperatorIndex = operatorIndices[0];
    for(int i=1; i<=operatorCount; i++)
    {
        if(operatorIndices[i]-prevOperatorIndex<=1)
        {
            cout<<"\nSyntax Error";
            break;
            exit(1);
        }

        prevOperatorIndex = operatorIndices[i];
    }

    cout<<"Hi there";

    return 0;
}
