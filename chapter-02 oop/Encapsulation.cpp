#include <iostream>

using namespace std;


class Student{

    private:

    int roll;
    int marks;


    public:

    void setData(int r,int m){

        roll =r;
        marks =m;
    }

    void showData(){

        cout <<"rool no "<<roll<<endl;
        cout <<"marks "<<marks<<endl;
    }

};




int main(){

    Student s1;

    s1.setData(1,85);

    s1.showData();
    return 0;
}