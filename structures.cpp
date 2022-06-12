
#include <iostream>
#include <iostream>

using namespace std;

int main(){
    struct car{
    string company;
    string model;
    float range;
    int year;
    };

    car Royal;
    car Tesla;

    Royal.company = "Royal-Automobiles";
    Royal.range = 300;
    Royal.model = "Royal Rhino";
    Royal.year = 2025;

    Tesla.company = "Tesla-Inc";
    Tesla.range = 360;
    Tesla.model = "Model S";
    Tesla.year = 2020;

    cout<<Royal.company<<"  "<<Royal.model<<"  "<<Royal.range<<" miles  "<<Royal.year<<"\n\n";
    cout<<Tesla.company<<"  "<<Tesla.model<<"  "<<Tesla.range<<" miles  "<<Tesla.year<<"\n";
return 0;
}
