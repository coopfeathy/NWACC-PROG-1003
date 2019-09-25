#include <iostream>
#include <iomanip>

// namespace std
using namespace std;

//defining variables
double hourRate;
double consultingTime;
double annualIncome;
double final;
double newTime;
bool lowIncome;

double total();
int main(){

    //setting the decimal point
    cout<<fixed<< showpoint<< setprecision(2);

    //prompting the user to enter the hourly rate
    cout << "The hourly rate: ";
    cin >> hourRate;
    cout << endl;

    //prompting the user to enter the total consulting time
    cout << "Total consulting time(minutes): ";
    cin >> consultingTime;
    cout <<  endl;

    //prompting the user to enter the total consulting time
    cout << "The customers’ annual income: ";
    cin >> annualIncome;
    cout <<  endl;
    if(annualIncome <= 25000){
        lowIncome = true;
    }else{
        lowIncome = false;
    }

    //using the function
    total();

    //printing the billing amount
    cout<< "The billing amount is: $"<< final << endl;

    return 0;
}
double total() {

    //setting the decimal point
    cout<<fixed<< showpoint<< setprecision(2);

    //total for low income
    if(lowIncome){
        newTime = consultingTime - 30;
        final = (hourRate * .40) * (newTime / 60);

    //total for everyone else
    }else{
        newTime = consultingTime - 20;
        final = (hourRate * .70) * (newTime / 60);
    }

    //changing the final so it cant be a negative number
    if(final < 0){
        final = 0;
    }

    return final;

}