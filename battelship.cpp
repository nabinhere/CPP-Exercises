#include <iostream>

using namespace std;

int main(){

    int grid[3][3] = {
    {0,1,0},
    {0,0,1},
    {1,0,0}
    };

    int hits = 0;
    int turns = 0;
    int row, column;

     while(hits<3){
        cout<<"Selecting coordinates\n";
        cout<<"enter row number (1 to 3): ";
        cin>>row;
        cout<<"enter column number(1 to 3):";
        cin>>column;

        turns++;

        if(grid[row-1][column-1]){
            grid[row-1][column-1] = 0;
            hits++;
            cout<<"Hit! "<<3-hits<<" remaining\n\n";
        }

        else{
            cout<<"Miss!!\n\n";
        }
     }

     cout<<"\n Victory!!\n";
     cout<<"Total turns = "<<turns;
return 0;
}
