//a program to calculaate the surface area and the volume of a cylinder
#include <iostream>
#include<cmath>
using namespace std;
class cylinder
{
    public:
    
    double pi;
    double height;
    double radius;
    
    double Calculatevolume(){
        return pi * radius * radius * height;
    }
    double Calculatesurfacearea(){
    return (2 * pi * radius * radius) + (2 *pi *radius * height);
    }
    

    };

int main() {
    
    cylinder cylinder1;
    
    cylinder1.pi = 22/7;
    cylinder1.radius = 20;
    cylinder1.height = 10;
    
    cout<<"Volume of the cylinder: " <<cylinder1.Calculatevolume() << endl;
    cout<<"Surface area of the cylinder: " <<cylinder1.Calculatesurfacearea() << endl;

    return 0;
}
