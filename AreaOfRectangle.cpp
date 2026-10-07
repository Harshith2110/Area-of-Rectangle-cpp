#include <iostream>
using namespace std;

int main() {
    double length, width;

    cout << "Enter length of rectangle: ";
    cin >> length; 
    if (length <= 0) {
        cout << "Invalid length. It must be a positive number, not letters, zero, or negative.\n";
        return 1;  
    }

    cout << "Enter width of rectangle: ";
    cin >> width;
    if (width <= 0) {
        cout << "Invalid width. It must be a positive number, not letters, zero, or negative.\n";
        return 1;
    }

    double area = length * width;
    cout << "Area of rectangle is: " << area << "\n";

    return 0;
}
