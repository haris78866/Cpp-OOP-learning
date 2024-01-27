#include<iostream>

using namespace std;

int main() {
    int num;
    int pepsi = 0, coke = 0, marinda = 0, cofee = 0;

    cout << "Available choices: " << endl;
    cout << " 1) Pepsi" << endl;
    cout << " 2) Coke" << endl;
    cout << " 3) Marinda" << endl;
    cout << " 4) Coffee" << endl;
    cout << " -1) Exit" << endl;

    while (true) {
        cout << "Enter the number: ";
        cin >> num;

        if (num == -1) {
            // Exit the loop if the user enters -1
            break;
        }

        switch (num) {
            case 1:
                pepsi++;
                break;
            case 2:
                coke++;
                break;
            case 3:
                marinda++;
                break;
            case 4:
                cofee++;
                break;
            default:
                cout << "This choice is not available." << endl;
        }
    }

    cout << "The total votes:" << endl;
    cout << "1) Pepsi   : " << pepsi << endl;
    cout << "2) Coke    : " << coke << endl;
    cout << "3) Marinda : " << marinda << endl;
    cout << "4) Coffee  : " << cofee << endl;

    return 0;
}

