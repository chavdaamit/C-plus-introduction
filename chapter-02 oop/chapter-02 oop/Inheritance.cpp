#include <iostream>
using namespace std;
class Student {
    public:
    int roll;

    void setRoll(int r){

        roll =r;
    }

};
class Marks :public Student{
public:
int marks;
void setMarks(int m){
    marks =m;
}
void showData(){
  cout << "roll no  "<<roll<<endl;
    cout<<"Marks "<<marks<<endl;

}
};

int main(){

    Marks s1;

    s1.setRoll(1);
    s1.setMarks(85);

    s1.showData();

    return 0;
}