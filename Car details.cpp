// Yadnesh Nikam
//2400123134

#include <iostream>
using namespace std;
class car_details{
    public:
    string brand;
    string model;
    int year;
    double price;
    void display() {
    cout << "Car Brand: " << brand << endl;
    cout << "Car Model: " << model << endl;
    cout << "Manufacturing Year: " << year << endl;
    cout << "Price: $" << price << endl;
}
}; 
int main() {
    car_details car1;
    car1.brand = "Toyota";
    car1.model = "Camry";
    car1.year = 2020;
    car1.price = 24000.50;

    car_details car2;
    car2.brand = "Honda";
    car2.model = "Civic";
    car2.year = 2019;
    car2.price = 22000.75;

    cout << "Details of Car 1:" << endl;
    car1.display();
    cout << endl;

    cout << "Details of Car 2:" << endl;
    car2.display();
    cout << endl;

    return 0;
}
/*Details of Car 1:
Car Brand: Toyota
Car Model: Camry
Manufacturing Year: 2020
Price: $24000.5

Details of Car 2:
Car Brand: Honda
Car Model: Civic
Manufacturing Year: 2019
Price: $22000.8*/


