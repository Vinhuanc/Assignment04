//Huan Chen Assignment04-Program03
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
    const double pi = 3.14159;
    double circleRadius, circleArea, recLength, recWidth, recArea, triBase, triHeight, triArea;
    int number;
    
    cout << "Geometry Calculator" << "\n";
    cout << " 1. Calculate the Area of a Circle" << "\n";
    cout << " 2. Calculate the Area of a Rectangle" << "\n";
    cout << " 3. Calculate the Area of a Triangle"  << "\n";
    cout << " 4. Quit" << "\n";
    cout << "Enter your choice:";
    cin >> number;
    
    switch(number){
        case 1 :
            cout << "Enter the Radius: ";
            cin >> circleRadius;
            if(circleRadius <= 0){
                cout << "Must be a positive integer. \n";
                return 0;
            }
            circleArea = pow(circleRadius,2) * pi ;
            cout << "The area is: " << setprecision(4) << fixed << circleArea << "\n";
            break;
        case 2 :
            cout << "Enter the length: ";
            cin >> recLength;
            if(recLength <= 0){
                cout << "Must be a positive integer. \n";
                return 0;
            }
            cout << "Enter the width:";
            cin >> recWidth;
            if(recWidth <= 0){
                cout << "Must be a positive integer. \n";
                return 0;
            }
            recArea = recLength * recWidth;
            cout << "The area is: " << recArea <<"\n";
            break;
        case 3 :
            cout << "Enter the base: ";
            cin >> triBase;
            if(triBase <= 0){
                cout << "Must be a positive integer. \n";
                return 0;
            }
            cout << "Enter the height: ";
            cin >> triHeight;
            if(triHeight <= 0){
                cout << "Must be a positive integer. \n";
                return 0;
            }
            triArea = triBase * triHeight * 0.5;
            cout << "The area is: " << triArea << "\n";
            break;
        case 4 :
            cout << "Existing" << "\n";
            break;
        default:
            cout << "You must choose from the listed options. \n";
    }
    
}
