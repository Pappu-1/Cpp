#include <iostream> //IO stream
#include <iomanip> //IO manipulator
#include <math.h> // Math operation library

/*
Project: Conventions and Operators
Name = Mithilesh yadav
Date = 28/07/202
*/


using namespace std;

int main()
{
    // Declare the variables with initial values
    float a=0.0F, b=0.0F, c=0.0F;
    float x1=0.0F, x2=0.0F;

    // Take input from user
    cout << "Enter the value for a:" << endl;
    cin >> a;
    cout << "Enter the value for b:" << endl;
    cin >> b;
    cout << "Enter the value for c:" << endl;
    cin >> c;

    // Calculate the roots
    x1 = (-b + sqrt(pow(b,2) - (4*a*c)))/(2*a);
    x2 = (-b - sqrt(pow(b,2) - (4*a*c)))/(2*a);

    // Print out the result
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    cout << "This quadratic has the following roots: " << endl;
    cout << "X = " << x1 << endl;
    cout << "X = " << x2 << endl;

    // End the program
    return 0;
}