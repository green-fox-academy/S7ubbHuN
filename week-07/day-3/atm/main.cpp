#include <iostream>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>


class Customer {
    public:
        Customer (std::string username, std::string password, int balance) {
        this->username = username;
        this->password = password;
        this->balance = balance;
        }
        int GetBalance() {
            return balance;
        }
        void DepositMoney(int depositAmount);
        void WithdrawMoney(int withdrawalAmount);
private:
    std::string username;
    std::string password;
    int balance;

};

class ATM {
    public:
        ATM(){};

    private:
        std::vector<Customer> customers;
        int atm_balance;
};

void Customer::DepositMoney(int depositAmount) {
    balance = balance + depositAmount;
}

void Customer::WithdrawMoney(int withdrawalAmount) {
    balance = balance - withdrawalAmount;
}

int main()
{
    ATM atm;
	//atm.menu();

    return 0;
}
