#include <iostream>
using namespace std;

class Student{
    int scores[5];
    public:
        void input(void){
            for(int i=0; i<5; i++){
                cin>>scores[i];
                };
            };
        int calculateTotalScore(){
            int ret = 0;
            for (int i=0; i< 5;i++){
                ret += scores[i];
                };
            return ret;
            };
    
    };