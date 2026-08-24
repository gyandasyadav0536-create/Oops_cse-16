#include <iostream>
#include <string>
using namespace std;

class ATM
{
private:
    string cardHolder;
    string cardNumber;
    int pin;
    double balance;

public:
    // Constructor
    ATM()
    {
        cardHolder = "Ankit Kumar";
        cardNumber = "1234567890123456";
        pin = 1234;
        balance = 10000;
    }

    // Display Card Details
    void cardDetails()
    {
        cout << "\n----- Card Details -----" << endl;
        cout << "Card Holder : " << cardHolder << endl;
        cout << "Card Number : " << cardNumber << endl;
        cout << "Balance     : Rs. " << balance << endl;
    }

    // Deposit Money
    void deposit()
    {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;

        if (amount > 0)
        {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully.\n";
        }
        else
        {
            cout << "Invalid amount!\n";
        }
    }

    // Withdraw Money
    void withdraw()
    {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;

        if (amount <= 0)
        {
            cout << "Invalid amount!\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance!\n";
        }
        else
        {
            balance -= amount;
            cout << "Please collect your cash.\n";
            cout << "Remaining Balance: Rs. " << balance << endl;
        }
    }

    // Check Balance
    void checkBalance()
    {
        cout << "Current Balance: Rs. " << balance << endl;
    }

    // Change PIN
    void changePin()
    {
        int oldPin, newPin;

        cout << "Enter current PIN: ";
        cin >> oldPin;

        if (oldPin == pin)
        {
            cout << "Enter new PIN: ";
            cin >> newPin;
            pin = newPin;
            cout << "PIN changed successfully.\n";
        }
        else
        {
            cout << "Incorrect PIN!\n";
        }
    }
};

int main()
{
    ATM atm;
    int choice;

    do
    {
        cout << "\n===== ATM MENU =====" << endl;
        cout << "1. Card Details" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Check Balance" << endl;
        cout << "5. Change PIN" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            atm.cardDetails();
            break;
        case 2:
            atm.deposit();
            break;
        case 3:
            atm.withdraw();
            break;
        case 4:
            atm.checkBalance();
            break;
        case 5:
            atm.changePin();
            break;
        case 6:
            cout << "Thank you for using the ATM!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }

    } while (choice != 6);

    return 0;
}