#include <iostream>

using namespace std;


class car{
    public:
        string company;
        string model;
        float range;
        int year;
        int speed(); //method declaration - defined outside of class

};

int car::speed()
{
//    cout<<"Maximum speed of this car is "<<Speed<<" miles per hour"<<endl;
return 200;
}


//class with a constructor
class car2{
    public:
        string company;
        string model;
        float range;
        int year;
        car2(string comp, string mod, float rang, int yr); //constructor declaration
                                                            //called automatically when object of car2 is created

};

car2::car2(string comp, string mod, float rang, int yr)  //constructor of class car2
{
    company = comp;
    model = mod;
    range = rang;
    year = yr;

}
int main()
{
    car Royal;
    Royal.company = "Royal Automobiles";
    Royal.model = "Royal Rhino";
    Royal.range = 300;
    Royal.year = 2025;

    car Tesla;
    Tesla.company = "Tesla Inc";
    Tesla.model = "Model 3";
    Tesla.range = 360;
    Tesla.year = 2020;

    cout<<Royal.company<<"  "<<Royal.model<<"  "<<Royal.range<<"  "<<Royal.year<<endl;
    cout<<Tesla.company<<"  "<<Tesla.model<<"  "<<Tesla.range<<"  "<<Tesla.year<<endl;
    cout<<" Maximum speed of Royal Rhino is  "<<Royal.speed()<<" miles per hour"<<endl;

    car2 Audi("Audi Motors", "Audion 360", 400, 2010);
    cout<<Audi.company<<"  "<<Audi.model<<"  "<<Audi.range<<"  "<<Audi.year<<endl;


return 0;}
