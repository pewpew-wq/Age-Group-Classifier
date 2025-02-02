#include <iostream>

using namespace std;

int main()
{
    double age;

    cout << "Your age: ";
    cin >> age; 

    if (age < 12) {
        cout << age << " is child";
    }
    else if (age >= 12 && age <= 19) {
        cout << age << " is teen";
    }
    else if (age >= 20 && age <= 64) {
        cout << age << " is adult";
    }
    else if (age > 64) {
        cout << age << " is senior";
    }

    return 0;
}


