#include <iostream>
using namespace std;

class Rectangle{
    //friend void RectangleArea::display(void);
    public:
        int height, width;
        void display(void){
            cout<<width<<" "<<height<<endl;
            };
    };
    
class RectangleArea: public Rectangle{
    public:
        void read_input(void){
            cin>>width>>height;
            };
        void display(void){
            cout<<width * height;
            };
    };
    
    
//int main(){
//    RectangleArea r_area;
//    r_area.read_input();
//    r_area.Rectangle::display();
//    r_area.display();
//    return 0;
//    };