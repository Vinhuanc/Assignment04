//Huan Chen Assignment04-Program02
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
