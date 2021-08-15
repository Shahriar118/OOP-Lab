#include<bits/stdc++.h>

using namespace std;

class BankAccount
{
   private:
       static int accNum;
       static double minBalance;
       int num;
       string name;
       bool type;
       double curBalance;

   public:
       BankAccount():num(0),name(""),type(1),curBalance(0.0)
       {
           accNum++;
       };
       BankAccount(string s,bool t,double cb):name(s),type(t),curBalance(cb)
       {
           num = accNum;
           accNum++;
       };
       void assignValues()
       {
           num=accNum;
           string s;
           bool t;
           double n;
           cout << "Enter Name: ";
           cin >> s;
           name = s;
           cout << "Enter 0: Current account\nEnter 1: Savings account\n";
           cin >> t;
           type = t;
           cout << "Enter deposited amount:";
           cin >> n;
           curBalance = n;
       }
       void getinfo()
       {
           cout << num <<". " << name << endl;
           if(type)
            cout << "Savings Account\n";
           else
            cout << "Current Account\n";
           cout << "Balance: " << curBalance << endl;
       }
       void showBalance()
       {
           cout << "Balance: " << curBalance << endl;
       }
       void deposit()
       {
           double a;
           cout << "Enter deposit amount: ";
           cin >> a;
           curBalance+=a;
       }
       void deposit(int amount)
       {
           curBalance+=amount;
       }
       void withdrawal(int a)
       {
           if(curBalance-a < minBalance)
            cout << "Not enough money in account\n";
           else
            curBalance-=a;
       }
       void giveInterest(double i)
       {
           i=0.03*curBalance;
           i=i-i*0.1;
           curBalance+=i;
       }
       ~BankAccount()
       {
           cout << "Account of Mr. " << name <<
           " with account no " << num <<
           " is destroyed with a balance BDT " << curBalance << endl;
       }


};

int BankAccount::accNum=0;
double BankAccount::minBalance=1000.0;

int main()
{
    BankAccount n1;
    n1.assignValues();
    n1.getinfo();
    n1.showBalance();
    n1.deposit();
    double n;
    cout << "Enter withdrawal amount: ";
    cin >> n;
    n1.withdrawal(n);
    double i;
    cout << "Enter interest: ";
    cin >> i;
    n1.giveInterest(i);

    BankAccount n2;
    n2.assignValues();
    n2.getinfo();
    n2.showBalance();
    n2.deposit();
    //n2.withdrawal();
    //n2.giveInterest();

    BankAccount n3;
    n3.assignValues();
    n3.getinfo();
    n3.showBalance();
    n3.deposit();
    //n3.withdrawal();
    //n3.giveInterest();
    return 0;
}
