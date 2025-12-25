#include <iostream>
using namespace std;
int main(){

    int start,end;
    int leap[100];
    int index=0;
    cout << "enter your first number ";
    cin >> start;

    cout <<"enter the second number ";
    cin >> end;
    for(int i=start; i<=end;i++){
        if( (i%4==0 && i%100 !=0)||(i%400==0) ){
            leap[index]=i;
            index++;
        }
    }
    cout  <<"leap years are ";
    for(int i=0; i<index;i++){

        cout <<leap[i]<<" ";
    }
    return 0;
}