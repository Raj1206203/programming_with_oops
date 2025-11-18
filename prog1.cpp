#include <iostream>
using namespace std;

class Employee {

    int emp_id,emp_age,emp_salary,emp_experience;
    string emp_name,emp_role,emp_city,emp_company_name;
    
public:
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> this->emp_id;

        cout << "Enter Employee Name: ";
        cin >> this->emp_name;

        cout << "Enter Employee Age: ";
        cin >> this->emp_age;

        cout << "Enter Employee Role: ";
        cin >> this->emp_role;

        cout << "Enter Employee Salary: ";
        cin >> this->emp_salary;

        cout << "Enter Employee City: ";
        cin >> this->emp_city;

        cout << "Enter Employee Experience (years): ";
        cin >> this->emp_experience;

        cout << "Enter Company Name: ";
        cin >> this->emp_company_name;

        cout << endl;
    }

    void displayData() {
        cout << "ID: " << this->emp_id << endl;
        cout << "Name: " << this->emp_name << endl;
        cout << "Age: " << this->emp_age << endl;
        cout << "Role: " << this->emp_role << endl;
        cout << "Salary: " << this->emp_salary << endl;
        cout << "City: " << this->emp_city << endl;
        cout << "Experience: " << this->emp_experience << " years" << endl;
        cout << "Company: " << this->emp_company_name << endl;
    }
};

int main() {
    int size;
    cout << "\nEnter the number of employee data you want to enter:";
    cin >> size;

    Employee emp[size];

    cout << "==== Enter Details of  Employees ====\n\n";

    for (int i = 0; i < size; i++) {
        cout << "Enter details for Employee " << i + 1 << ":\n";
        emp[i].getData();
    }

    cout << "\n==== Employee Records ====\n\n";

    for (int i = 0; i < size; i++) {
        cout << "Employee " << i + 1 << " Details:\n";
        emp[i].displayData();
    }

    return 0;
}
