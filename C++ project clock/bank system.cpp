/*#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
class bank
{
    char name[100];
    char add[100];
    char y;
    int balance;

public:
    void open_account();
    void deposite_money();
    void withdraw_money();
    void display_account();
};
void bank ::open_account()
{
    cout << "Enter your name : ";
    cin.ignore();
    cin.getline(name, 100);
    cout << "Enter your addrass : ";
    cin.ignore();
    cin.getline(add, 100);
    cout << "What type of account you want to open saving (s) or currunt (c)";
    cin >> y;
    cout << "Enter amount for deposite : ";
    cin >> balance;
    cout << " your account is created \n";
}
void bank ::deposite_money()
{
    int a;
    cout << "Enter how much you deposite : ";
    cin >> a;
    balance += a;
    cout << "total amount you deposite : " << balance;
}
void bank ::display_account()
{
    cout << "your full name : " << name;
    cout << "you address : " << add;
    cout << "type of account that you open : " << y;
    cout << "amount you deposite : " << balance;
}
void bank ::withdraw_money()
{
    float amount;
    cout << "\n withdraw : ";
    cout << "Enter amount to withdraw : ";
    cin >> amount;
    balance = balance - amount;
    cout << "now total amount is left : " << balance;
}
int main()
{
    int ch;
    bank obj;
    do
    {
        cout << "(1) Open account\n";
        cout << "(2) deposite money \n";
        cout << "(3) withdraw money \n";
        cout << "(4) display amount \n";
        cout << "(5)Exit\n";
        cout << "select the option from above \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "(1) Open account\n";
            obj.open_account();
            break;
        case 2:
            cout << "(2) deposite money \n";
            obj.deposite_money();
            break;
        case 3:
            cout << "(3) withdraw money \n";
            obj.withdraw_money();
            break;
        case 4:
            cout << "(4) display amount \n";
            obj.display_account();
            break;
        case 5:
            if (ch == 5)
            {
                exit(1);
            }
        default:
            cout << "this is not exist try again \n";
        }
        cout << "\n do you want to select next option then press : (y / n)";
        cout << "if you want exit then press : N ";
        int x;
        if (x == 'n' || x == 'N')
        {
            exit(0);
        }
        while (x == 'y' || x == 'Y')
        {cout<<"thank you";}
    }
}
*/
#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        int r = 0;
        unordered_map<char, int> roman({ 
            {'I', 1} ,
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000}
        });
        for (int i = 0; i < s.length() - 1; i ++) {
            int cur = roman[s[i]];
            int next = roman[s[i + 1]];
            if (cur >= next) {
                r += cur;
            } else {
                r -= cur;
            }
        }
        return r + roman[s[s.length() - 1]];
    }
};