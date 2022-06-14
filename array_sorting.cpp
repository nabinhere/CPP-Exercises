#include <iostream>

using namespace std;

void sort_method1();
void sort_method2();

int main()
{
    sort_method1();
//    sort_method2();
    return 0;
}


  void sort_method1()
  {
      int integerArray[7] = {-9, 4, -3, 7, -9, 4, 8};
    int temp;

     cout<<"\n original1 Array elements: ";
    for(int i=0; i<sizeof(integerArray)/sizeof(int); i++)
    {
        cout<<integerArray[i]<<"  ";
    }

    for(int i=0; i<sizeof(integerArray)/sizeof(int); i++)
    {
        for(int j=1; j<=sizeof(integerArray)/sizeof(int); j++)
        {
            if(integerArray[j]<integerArray[j-1])
            {
                temp = integerArray[j];
                integerArray[j] = integerArray[j-1];
                integerArray[j-1] = temp;
            }
        }
    }

    cout<<"\n sorted Array elements: ";
    for(int i=0; i<sizeof(integerArray)/sizeof(int); i++)
    {
        cout<<integerArray[i]<<"  ";
    }
  }


