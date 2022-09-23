//Huan Chen Assignment04-Program02
// Program #1
// Write a program that asks the user to enter a number within the range of 1 through 10. Use a switch statement to display the Roman numeral version of that number. Do not accept a number less than 1 or greater than 10.
// • Use a switch statement
// • Make sure that you tell the user if their input is not accepted
// Sample Outputs:
// Enter a number (1-10): 5
// The Roman numeral version of 5 is V
// Press any key to continue . . .
// ========================================
// Enter a number (1-10): 15
// Enter a number in the range 1 through 10
// Press any key to continue . . .
#include <iostream>
using namespace std;

int main(){
    int number;
    
    cout << "Enter a number (1 - 10): ";
    cin >> number;
    
    if(number < 1 || number < 10){
        
    
        switch(number){
        case 1 :
            cout << "The Roman numberal version of " << number << " is I" <<"\n";
            break;
        case 2 :
            cout << "The Roman numberal version of " << number << " is II" <<"\n";
        case 3 :
            cout << "The Roman numberal version of " << number << " is III" <<"\n";
            break;
        case 4 :
            cout << "The Roman numberal version of " << number << " is IIII" <<"\n";
            break;
        case 5 :
            cout << "The Roman numberal version of " << number << " is V" <<"\n";
            break;
        case 6 :
            cout << "The Roman numberal version of " << number << " is VI" <<"\n";
            break;
        case 7 :
            cout << "The Roman numberal version of " << number << " is VII" <<"\n";
            break;
        case 8 :
            cout << "The Roman numberal version of " << number << " is VIII" <<"\n";
            break;
        case 9 :
            cout << "The Roman numberal version of " << number << " is VIII" <<"\n";
            break;
        case 10 :
            cout << "The Roman numberal version of " << number << " is X" <<"\n";
            break;
        }
    } else {
        cout << "Invalid input. Please choose a number between 1 - 10. \n";
    }
    
}
