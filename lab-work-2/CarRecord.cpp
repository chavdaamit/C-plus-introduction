#include <iostream>
using namespace std;
class Car{
private:

int car_id;
string car_company_name;
string car_color;
string car_model;
int car_release_year;

public:
void input(){
    cout << "enter your car id:  " << endl;
    cin >> car_id;

    cout<< "enter your car company name:  "<< endl;
    cin>> car_company_name;

    cout<<"enter your car color:  " <<endl;
    cin>> car_color;

    cout<< "enter your car model:  "<<endl;
    cin>> car_model;

    cout<<"enter your car release year:  " <<endl;
    cin>> car_release_year;
}
void display(){
    cout << "car id: "<<car_id << endl;
    cout<<"car company name: "<<car_company_name<<endl;
    cout<<"car color: "<<car_color<<endl;
    cout<<"car model: "<<car_model<<endl;
    cout<<"car release year"<<car_release_year<<endl;
}
};
int main(){
    Car c[4];
    cout<<"enter detail of 4 car"<<endl;
    for(int i=0;i<4;i++){
        cout<< "Car " <<i+1<< "record input";
        c[i].input();
    }
    cout << "Displaying Car Records";
    for(int i = 0; i < 4; i++) {
        c[i].display();
    }
    return 0;
}