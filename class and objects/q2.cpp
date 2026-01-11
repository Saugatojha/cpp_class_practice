#include <iostream>
using namespace std;
class BankAccount
{
public:
    int money;
    void getmoney()
    {
        cout << "You have Rs " << money << endl;
    }
    void deposit(int amount){
        if (amount < 0 || amount > money){
        cout << "Invalid \n";
        }
        else{
            money=money+amount;
        }

    }

    void withdraw(int amount){
        if (amount < 0 || amount > money){
        cout << "Invalid\n";
        }
        else{
            money=money-amount;
        }
    }
};

int main()
{
    BankAccount saugat;
    BankAccount hero;
    saugat.money = 17723;
    hero.money= 1243;
    hero.withdraw(421);
    saugat.deposit(123);
    saugat.getmoney();
    hero.getmoney();
    return 0;
}