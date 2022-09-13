//Huan Chen Assignment04-Program03
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

