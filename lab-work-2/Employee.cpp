#include <iostream>
using namespace std;

class Employee {
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

  
    void inputData() {
        cout << "\nEnter Employee ID: ";
        cin >> emp_id;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, emp_name);

        cout << "Enter Age: ";
        cin >> emp_age;
        cin.ignore();

        cout << "Enter Role: ";
        getline(cin, emp_role);

        cout << "Enter Salary: ";
        cin >> emp_salary;
        cin.ignore();

        cout << "Enter City: ";
        getline(cin, emp_city);

        cout << "Enter Experience (in years): ";
        cin >> emp_experience;
        cin.ignore();

        cout << "Enter Company Name: ";
        getline(cin, emp_company_name);
    }

   
    void displayData() {
        cout << "\n------------------------------";
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nName: " << emp_name;
        cout << "\nAge: " << emp_age;
        cout << "\nRole: " << emp_role;
        cout << "\nSalary: " << emp_salary;
        cout << "\nCity: " << emp_city;
        cout << "\nExperience: " << emp_experience << " Years";
        cout << "\nCompany: " << emp_company_name;
        cout << "\n------------------------------\n";
    }
};

int main() {
    Employee emp[5];

    cout << " Enter Employee Details \n";
    for(int i = 0; i < 5; i++) {
        cout << "\nEnter details of Employee " << (i+1) << ":\n";
        emp[i].inputData();
    }

    cout << "\n Employee Records \n";
    for(int i = 0; i < 5; i++) {
        emp[i].displayData();
    }

    return 0;
}
