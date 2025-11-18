#include <iostream>
using namespace std;

class cars {

    int car_id,car_model,car_release_year;
    string car_color,car_company_name;
    
public:
    void getData() {
        cout << "Enter car ID: ";
        cin >> this->car_id;

        cout << "Enter car company name: ";
        cin >> this->car_company_name;

        cout << "Enter car color: ";
        cin >> this->car_color;

        cout << "Enter car model: ";
        cin >> this->car_model;

        cout << "Enter car release year: ";
        cin >> this->car_release_year;
        cout << endl;
    }

    void displayData() {
        cout << "CAR ID: " << this->car_id << endl;
        cout << "CAR Company Name: " << this->car_company_name << endl;
        cout << "CAR Color: " << this->car_color << endl;
        cout << "CAR Model: " << this->car_model << endl;
        cout << "CAR Release Year: " << this->car_release_year << endl;
        
    }
};

int main() {
    int size;
    cout << "\nEnter the number of CARS data you want to insert:";
    cin >> size;

    cars car[size];

    cout << "==== Enter Details of  CARS ====\n\n";

    for (int i = 0; i < size; i++) {
        cout << "Enter details for CARS " << i + 1 << ":\n";
        car[i].getData();
    }

    cout << "\n==== CARS Records ====\n\n";

    for (int i = 0; i < size; i++) {
        cout << "cars " << i + 1 << " Details:\n";
        car[i].displayData();
    }

    return 0;
}
