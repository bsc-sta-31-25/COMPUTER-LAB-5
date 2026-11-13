#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int number;

    while (true)
    {
        cout << "Enter an integer value between 5 and 10"
             << endl;

        if (!(cin >> number))
        {
            cout << "Sorry, you entered an invalid number, "
                 << "please try again" << endl;

            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            continue;
        }

        if (number < 5 || number > 10)
        {
            cout << "You entered " << number
                 << ". Please enter a number between 5 and 10."
                 << endl;

            continue;
        }

        break;
    }

    cout << "Your input value(" << number
         << ") has been accepted." << endl;

    return 0;
}
