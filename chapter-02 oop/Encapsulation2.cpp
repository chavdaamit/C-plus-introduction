#include <iostream>

using namespace std;

class Student{
    private:
    int id;
    string name;
public:
void setData(int i,string n){

    id = i;
    name = n;
}


void display(){

    cout << "ID: "<<id<<endl;
    cout << "name: "<<name <<endl;
}

};
int main(){
    Student s1;

    s1.setData(101,"Amit");

    s1.display();

    return 0;
}