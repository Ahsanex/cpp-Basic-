#include <iostream>
#include <string>

using namespace std;

int depo()
{
    cout << "Please enter the amount to deposit: " << endl;
    int money_gotten;
    cin >> money_gotten;
    return money_gotten;
}

int withdraw_money()
{
    cout << "Please enter withdrawal amount: " << endl;
    int taken_money;
    cin >> taken_money;
    return taken_money;
}

int main()
{
    string name;
    int total_bal = 0;

    cout << "HELLO, please enter your name: " << endl;
    cin >> name;

    bool running = true;
    while (running)
    {
        cout << "\nPlease choose an option:" << endl;
        cout << "Press 1 to Deposit" << endl;
        cout << "Press 2 to Withdraw Money" << endl;
        cout << "Press 3 to Show Balance" << endl;
        cout << "Press 4 to Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int money = depo();
            if (money > 0)
            {
                total_bal += money;
                cout << "Deposit successful. Total balance = " << total_bal << endl;
            }
            else
            {
                cout << "Invalid deposit amount." << endl;
            }
            break;
        }
        case 2:
        {
            int money_withdraw = withdraw_money();
            if (money_withdraw <= 0)
            {
                cout << "Invalid withdrawal amount." << endl;
            }
            else if (money_withdraw > total_bal)
            {
                int money_owe = money_withdraw - total_bal;
                double after_interest = money_owe + (money_owe * 16.0 / 100.0);

                total_bal -= money_withdraw;
                cout << "Your balance is negative. You owe: " << money_owe << endl;
                cout << "With 16% interest, amount owed = " << after_interest << endl;
            }
            else
            {
                total_bal -= money_withdraw;
                cout << "Withdrawal successful. Total balance = " << total_bal << endl;
            }
            break;
        }
        case 3:
            cout << "Current balance = " << total_bal << endl;
            break;

        case 4:
            running = false;
            cout << "Thanks for visiting the bank, " << name << "." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }
    }

    return 0;
}
