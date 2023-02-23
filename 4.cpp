#include <iostream>
using namespace std;
class account
{
public:
    char name[30];
    int acc_no, acc_type;
    int amount;
    int balance;
    void getdata()
    {
        cout << "enter customers detials" << endl;
        cout << "customers name=";
        gets(name);
        cout << "\nAccount type\n1.saving account\n2.current account";
        cin >> acc_type;
        cout << "enter your balance" << endl;
        cin >> balance;
    }
    void display()
    {
        cout << "your balance is:" << balance;
    }
    void withdrawl()
    {
        cout << "enter your amount you want to withdrawl" << endl;
        cin >> amount;
        if (amount > balance)
            cout << "insaficcent balance" << endl;
        else
            balance -= amount;

        display();
    }
};
class cur_acc:public account{
    public:
    void penality(){
        if(balance<200 && acc_type==2){
            balance-=50;
        }
        display();

    }
};
class sav_acc:public account{
    public:
    void intrest(){
        

    }
};
int main()
{

    return 0;
}