#include <iostream>
using namespace std;
class Student{
    public:
    void name(){
        cout <<"chavda"<<endl;
    }
};
class Teacher:public Student{
    public:
    void name(){
        cout << "Amit"<<endl;
    }
};
int main(){
    Teacher a1;
    a1.name();
    return 0;
}