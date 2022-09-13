//Huan Chen Assignment04-Program02
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
