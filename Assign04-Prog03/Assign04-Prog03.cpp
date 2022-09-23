//Huan Chen Assignment04-Program03
// Program #3
// A bank charges $10 per month plus the following check fees for a commercial checking account:
// $0.10 each for fewer than 20 checks $0.08 each for 20-39 checks
// $0.06 each for 40-59 checks
// $0.04 each for 60 or more checks
// The bank also charges an extra $15 if the balance of the account falls below $400 (before any check fees are applied). Write a program that asks for the beginning balance and the number of checks written. Compute and display the bank’s service fees for the month. Do not accept a negative value for the number of checks written. If a negative value is given for the beginning balance, display and urgent message indicating the account is overdrawn.
// • Use only the if statement
// • No message needs to be displayed if the account balance falls below the $400 threshold,
// just add the appropriate fee into the total.
// • For the overdrawn balance portion of the problem, determine if the fee will overdraw
// the account. However, display the message about overdrawing the account before displaying what the fees are. For example, if the account has $9.99 and the fees will total to $10, the account will be overdrawn.
// Sample Outputs:
// Enter the following information about your checking account
// Beginning balance: $1562
// Number of checks written: 20
// The bank fee this month is $11.60
// Press any key to continue . . .
// ========================================
// Enter the following information about your checking account
// Beginning balance: $10
// Number of checks written: 2
// Your account is overdrawn!
// The bank fee this month is $25.20
// Press any key to continue . . .
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double balance, total;
    double fee = 10;
    double fee2 = 15;
    int numCheck;
    
    cout << "Enter the following information about your checking account" << "\n";
    cout << "Beginning balance: $ " ;
    cin >> balance;
    cout << "Number of checks written: " ;
    cin >> numCheck;
    
    if(balance < 400){
        if(numCheck < 20){
            total = fee2 + (numCheck * 0.10) ;
            if (total > balance){
                cout << "Your account is overdrawn!" << "\n";
            }
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 20 && numCheck <= 39){
            total = fee2 + (numCheck * 0.08) ;
            if (total > balance){
                cout << "Your account is overdrawn!" << "\n";
            }
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 40 && numCheck <= 59){
            total = fee2 + (numCheck * 0.06);
            if (total > balance){
                cout << "Your account is overdrawn!" << "\n";
            }
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 60){
            total = fee2 + (numCheck * 0.04) ;
            if (total > balance){
                cout << "Your account is overdrawn!" << "\n";
            }
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
    }
    if(balance >= 400){
        if(numCheck < 20){
            total = fee + (numCheck * 0.10) ;
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 20 && numCheck <= 39){
            total = fee + (numCheck * 0.08) ;
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 40 && numCheck <= 59){
            total = fee + (numCheck * 0.06) ;
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
        if(numCheck >= 60){
            total = fee + (numCheck * 0.04) ;
            cout << "The bank fee this month is $ " << setprecision(2) << fixed << total << "\n";
        }
    }
}

