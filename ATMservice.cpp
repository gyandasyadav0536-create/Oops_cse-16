#include <iostream>
using namespace std;

class ATM {
private:
    double balance;
    int pin;

public:
    // Constructor
    ATM() {
        balance = 1000.0;
        pin = 1234;
    }

    // Login
    bool login() {
        int enteredPin;
        cout << "Enter ATM PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            cout << "\nLogin Successful!\n";
            return true;
        } else {
            cout << "\nInvalid PIN!\n";
            return false;
        }
    }

    
    void checkBalance() {
        cout << "\nCurrent Balance: $" << balance << endl;
    }

    
    void deposit() {
        double amount;
        cout << "Enter amount to deposit: $";
        cin >> amount;

        if (amount > 0) {
            balance += amount;
            cout << "Deposit Successful!" << endl;
            cout << "New Balance: $" << balance << endl;
        } else {
            cout << "Invalid Amount!" << endl;
        }
    }

    
    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: $";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid Amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
            cout << "Remaining Balance: $" << balance << endl;
        }
    }


    void changePin() {
        int oldPin, newPin;

        cout << "Enter Current PIN: ";
        cin >> oldPin;

        if (oldPin == pin) {
            cout << "Enter New PIN: ";
            cin >> newPin;
            pin = newPin;
            cout << "PIN Changed Successfully!" << endl;
        } else {
            cout << "Incorrect Current PIN!" << endl;
        }
    }
};

int main() {
    ATM user;
    int choice;

    if (!user.login()) {
        return 0;
    }

    do {
        cout << "\n====== ATM MENU ======\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Change PIN\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                user.checkBalance();
                break;

            case 2:
                user.deposit();
                break;

            case 3:
                user.withdraw();
                break;

            case 4:
                user.changePin();
                break;

            case 5:
                cout << "Thank you for using the ATM!" << endl;
                break;

            default:
                cout << "Invalid Choice!" << endl;
        }

    } while (choice != 5);

    return 0;
}