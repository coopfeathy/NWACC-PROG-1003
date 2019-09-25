#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>


using namespace std;

//defining variables
double initialDeposit;
double base;
double apr;
int numOfMonths;
int counter;

int main() {


    //fixing the decimal point
    cout << fixed << showpoint << setprecision(2);


    //the input


    //prompting the user to enter an initial deposit
    cout << "Enter the initial deposit: ";
    cin >> initialDeposit;
    while (initialDeposit < 100 || initialDeposit > 10000) {
        cout << "The initial deposit must be between 100 and 10000. Please re-enter the initial deposit: ";
        cin >> initialDeposit;
    };
    cout << endl;


    //prompting the user to enter the annual percentage rate
    cout << "Enter the interest rate (as a percent): ";
    cin >> apr;
    while (apr < 2 || apr > 8) {
        cout << "The interest rate must be between 2.0% and 8.0%. Please re-enter the interest rate: ";
        cin >> apr;
    };
    cout << endl;


    //prompting the user to enter the number of months
    cout << "Enter the number of months: ";
    cin >> numOfMonths;
    while (numOfMonths < 12 || numOfMonths > 60) {
        cout << "The number of months must be between 12 and 60 Please re-enter the number of months: ";
        cin >> numOfMonths;
    };
    cout << endl;


    apr = apr / 100; //apr to percent
    base = (1.0 + apr / 12); // base for pow function


    //the output
    cout << "Thank you for banking at IgniteSavings" << endl;

    //print the initial deposit
    cout << left << setw(19) << "Deposit" << "$" << right << setw(15) << initialDeposit << endl;

    //set the precision to one for the percent
    cout << fixed << showpoint << setprecision(1);

    //print the interest rate
    cout << left << setw(22) << "Interest Rate" << right << setw(13) << apr << "%" << endl;

    //set the precision back to 2
    cout << fixed << showpoint << setprecision(2);

    cout << left << setw(22) << "Month" << right << setw(13) << "Balance" << endl;
    cout << "-------------------------------------" << endl;
    double monthsArray[numOfMonths]; //define array for months
    for (counter = 1; counter <= numOfMonths; counter++) { //starting counter loop

        //display the output for the balance for each month

        monthsArray[counter] = initialDeposit * (pow(base, counter));
        cout << setfill(' ') << left << setw(30) << counter << right << "$ " << monthsArray[counter]
             << "\n"; //display month and total
    };

    return 0;
}
