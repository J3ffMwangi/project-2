#include <iostream>
using namespace std;


class Car {
public:
    string brand;
    string model;
    float price;
    int mileage;


    Car(string b, string m, float p, int mil) {
        brand = b;
        model = m;
        price = p;
        mileage = mil;
    }


    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }


    void drive(int distance) {
        mileage += distance;
        cout << "Car driven for " << distance << " miles. Updated mileage: " << mileage << " miles" << endl;
    }
};

int main() {
 Car myCar("Toyota", 20000, 0);

    cout << "\nDriving the car...\n";

   myCar.drive(150);


    return 0;
}
