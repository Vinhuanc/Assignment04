//Huan Chen Assignment04-Program02
// Program #2
// A software company sells a package that retails for $99. Quantity discounts are given according to the following table:
// Quantity Discount 10-19 20% 20-49 30% 50-99 40%
// 100 or more 50%
// Write a program that asks for the number of units sold and computes the total cost of the purchase. Make sure the number of units is greater than 0.
// • Use only the if statement, don’t use a switch or else block
// • Note: the auto-checker on this program does take some time (a few seconds on the college’s
// computers) to process the code checks Sample Outputs:
// How many units were sold? 48
// The total cost of the purchase is $3326.40
// Press any key to continue . . .
// ========================================
// How many units were sold? -1
// Error: Units sold must be positive integer
// Press any key to continue . . .
// Test the boundaries: does the result match expectations when you are 1 unit below, and 1 unit above the threshold (e.g. Quantity 9 and 10, getting the correct discount values)
#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double price = 99,
            total;
    int quantity;
    
    cout << "How many units were sold? " ;
    cin >> quantity;
    
    if(quantity >= 1 && quantity < 10){
        total = price * quantity;
        cout << "The total cost of the purchase is $ " << setprecision(2) << fixed << total << "\n";
       
    }
    
    if(quantity >= 10 && quantity <= 19){
        total = (price * quantity) * .80;
        cout << "The total cost of the purchase is $ " << setprecision(2) << fixed << total << "\n";
    }
    
    if(quantity >= 20 && quantity <= 49){
        total = (price * quantity) * .70;
        cout << "The total cost of the purchase is $ " << setprecision(2) << fixed << total << "\n";
    }
    if(quantity >= 50 && quantity <= 99){
        total = (price * quantity) * .60;
        cout << "The total cost of the purchase is $ " << setprecision(2) << fixed << total << "\n";
    }
    if(quantity >= 100 ){
        total = (price * quantity) * .50;
        cout << "The total cost of the purchase is $ " << setprecision(2) << fixed << total << "\n";
    }
    
    
    if (quantity ==0 ){
        cout << "Error: Units sold must be positive integer." << "\n";
    }
}
