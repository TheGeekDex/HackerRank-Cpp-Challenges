#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int Sid = 1;
int Pid = 0;

class Person{
    public:
        string name;
        int age;
        virtual void getdata(void){
            cin>>name>>age;
        }
        virtual void putdata(void){
            cout<<name<<" "<<age<<" ";
        }
};

class Professor: public Person{
    public:
        int publications;
        int cur_id = Pid;
        Professor(){
            Pid++;
        }
        void getdata(void){
            Person::getdata();
            cin>>publications;
            this->cur_id = Pid;
        }
        void putdata(void){
            Person::putdata();
            cout<<publications<<" "<<cur_id<<endl;
        }
};

class Student: public Person{
    public:
        int marks[6];
        int cur_id = Sid;
        Student(){
            Sid++;
        }
        int sum() {
            int sum = 0;
            for (int i = 0; i < 6; ++i) {
                sum += marks[i];
            }
            return sum;
        }
        void getdata(void){
            Person::getdata();
            for (int i=0; i<6; i++){
                cin>>marks[i];
            }
        }
        void putdata(void){
            Person::putdata();
            cout<<this->sum()<<" "<<cur_id<<endl;
            }
};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
