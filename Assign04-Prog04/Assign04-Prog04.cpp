//Huan Chen Assignment04-Program03
// Program #4
// Write a program that displays the following menu (see below).
// - If the user enters 1, the program should ask for the radius of the circle and then display its area. Use the formula area = pi*r^2. Use 3.14159 for pi and the radius of the circle for r.
// - If the user enters 2, the program should ask for the length and width of the rectangle and then display he rectangle’s area. Use the formula area = length * width.
// - If the user enters 3, the program should ask for the length of the triangle’s base and its height, and then display is area. Use the formula area = base * height * (1/2).
// - If the user enters 4, the program should end
// - Display an error message if the user enters a number outside the range of 1 through 4 when selecting an item from the menu. Do not accept negative values for the circle’s radius, the rectangle’s length or width, or the triangle’s base or height.
// • Use a switch statement to evaluate the user menu choice
// • Do input validation for the correct menu choice
// • Define Pi as a constant to 5 decimal places (3.14159)
// Sample Outputs:
// Geometry Calculator
// 1. Calculate the Area of a 2. Calculate the Area of a 3. Calculate the Area of a 4. Quit
// Circle Rectangle Triangle
// Geometry Calculator
// 1. Calculate the Area of a 2. Calculate the Area of a 3. Calculate the Area of a 4. Quit
// Enter your choice (1-4): 2 Enter the length: 5
// Enter the width: 4
// The area is: 20
// Circle Rectangle Triangle
// Enter your choice (1-4): 1 Enter the Radius: 5
// The area is: 78.5397
// Press any key to continue . . .
// ========================================
// Press any key to continue . . .
// ========================================
// Geometry Calculator
// 1. Calculate the Area of a 2. Calculate the Area of a 3. Calculate the Area of a 4. Quit
// Enter your choice
// Enter the base: 6
// Enter the height:
// The area is: 12
// Press any key to continue . . .
// Geometry Calculator
// 1. Calculate the Area of a 2. Calculate the Area of a 3. Calculate the Area of a 4. Quit
// (1-4): 3 4
// Enter your choice (1-4): 4 Exiting
// Press any key to continue . . .
// Circle Rectangle Triangle
// Circle Rectangle Triangle
// ========================================
// Geometry Calculator
// 1. Calculate the Area of a 2. Calculate the Area of a 3. Calculate the Area of a 4. Quit
// Enter your choice (1-4): 5
// You must choose from the a option
// Press any key to continue . . .
// Circle Rectangle Triangle
// listed
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
