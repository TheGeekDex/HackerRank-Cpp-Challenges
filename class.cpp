#include <iostream>
#include <sstream>
using namespace std;

class Student{
    int age, standard;
    string first_name , last_name;
    public:
        void set_age(int _age){age = _age;};
        void set_standard(int stan){standard=stan;};
        void set_first_name(string name){first_name = name;};
        void set_last_name(string name){last_name= name;};
        int get_age(void){return age;};
        int get_standard(void){return standard;};
        string get_first_name(void){return first_name;};
        string get_last_name(void){return last_name;};
        string to_string(void){
            stringstream ss;
            ss<<age<<","<<first_name<<","<<last_name<<","<<standard;
            return ss.str();
            };
};
int main(int argc, char *argv[])
{
    int age, standard;
    string first_name, last_name;
    
    cin>>age>>first_name>>last_name>>standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout<<st.get_age()<<"\n";
    cout<<st.get_last_name()<<", "<<st.get_first_name()<<"\n";
    cout<<st.get_standard()<<"\n";
    cout<<"\n";
    cout<<st.to_string();
    return 0;	
}