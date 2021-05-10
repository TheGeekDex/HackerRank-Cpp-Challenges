#include <iostream>
using namespace std;

class Triangle{
    public:
        void triangle(void){
            cout<<"I am a triangle\n";
            };
    };
    
class Isosceles: public Triangle{
    public:
        void isosceles(void){
            cout<<"I am an isosceles triangle\n";
            };
        void description(void){
            cout<<"In an isosceles triangle two sides are equal\n";
            };
    };

int main(int argc, char *argv[])
{
    Isosceles isc;
    isc.isosceles();
    isc.description();
    isc.triangle();
    return 0;	
}