#include <iostream>
using namespace std;

double square(double s) {
    return s * s;
}

double rectangle(double l, double w) {
    return l * w;
}

double triangle(double b, double h) {
    return (b * h) / 2;
}

int main() {
    int choice;
    double a, b;

    do {
        cout << "\nPlease select the area of the shape to calculate\n";
        cout << "1. Square\n2. Rectangle\n3. Triangle\n4. Quit Program\n";
        cout << "Enter selection: ";

        if (!(cin >> choice)) {
            cout << "Invalid input! Please enter a valid input!!!\n";
            cin.clear();
            cin.ignore(10000, '\n');
            choice = 0;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter side: ";
                cin >> a;
                cout << "Area = " << square(a) << endl;
                break;

            case 2:
                cout << "Enter length and width: ";
                cin >> a >> b;
                cout << "Area = " << rectangle(a, b) << endl;
                break;

            case 3:
                cout << "Enter base and height: ";
                cin >> a >> b;
                cout << "Area = " << triangle(a, b) << endl;
                break;

            case 4:
                cout << "Thank you for using the program.\n";
                break;

            default:
                cout << "Your input was invalid. Please enter a valid input!!!\n";
        }

    } while (choice != 4);

    return 0;
}
