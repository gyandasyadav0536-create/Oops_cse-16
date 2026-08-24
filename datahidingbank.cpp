//design a class to represent a bank account with proper data hiding and member function for deposite and withdrawal function

#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;   // data hidden (encapsulation)

public:
void createAccount()
{
cout<<"enter account Number:";
cin>>accountHolder;
cout<<"Enter Account Holder Name:";
cin>>accountHolder;
cout << "Enter Initial Balance: ";
        cin >> balance;

}
void deposite()
{
double Account ;
cout<<"enter amount to deposite:";
cin>>amount;
if(amount>0)
{
balance +=amount;
cout<<"Amount deposite successfully.\n";
}
else {
cout<<"Invalid amount!\n";
}
}
void withdraw()
{
double amount;
cout<<"Enter amount to withdraw:";
cin>>amount;

if(amount>0 && amount <= balance )
{
balance +=amount;
cout<<"amount withdraw";
}
};
int main()
{
Bankaccount account;
int choice;
account.createAccount();
do
{
cout<<"\n===BANK MENU===\n";
cout<<"1. Deposite Money\n";
cout<<"2. Withdraw Money\n";
cout<<"3. Display Account Details Money\n";
cout<<"4. Exit \n";
cout<<"Enter your choice:";
Switch(choice)
{
CASE 1:
account.deposit();
break;
case 2:
account.withdraw();
break;
case 3:
account.display();
break;
case 4:
cout<<"Thank you for using the banking system.\n";
break;
default:
cout<<"Invalid choice! Please try again.\n";


}
while(choice!=4);
return 0;
}


    
    //demontrate diffferrent type of constractor and distractor bahavior a life cycle