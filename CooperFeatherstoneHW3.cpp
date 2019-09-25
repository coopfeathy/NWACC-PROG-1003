#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

    //defining the variables
    double costPerRoom;
    int numOfRoom;
    int numOfNights;
    float salesTax;
    double netPrice;
    double total;
    double taxAmmount;
int main() {

    //fixing the decimal point
    cout<<fixed<< showpoint<< setprecision(2);

    //prompting the user to enter values for the variables
    cout<< "Enter the cost of renting one room: ";
    cin>> costPerRoom;
    cout<< "Enter the number of rooms booked: ";
    cin>> numOfRoom;
    cout<< "Enter the number of nights the rooms are booked: ";
    cin>> numOfNights;
    cout<< "Enter the sales tax (as a percent): ";
    cin>> salesTax;
    cout<< endl;

    //adding up the price
    netPrice= costPerRoom * numOfRoom * numOfNights;

    //giving the discounts
    if(numOfRoom >= 10 && numOfRoom < 20){
        netPrice = netPrice * .9;           //10% discount
    }
    if(numOfRoom >= 20 && numOfRoom < 30){
        netPrice = netPrice * .8;           //20% discount
    }
    if(numOfRoom >= 30){
        netPrice = netPrice * .7;           //30% discount
    }
    if(numOfNights >= 3){
        netPrice = netPrice * .95;          //5% discount
    }

    //calculate the tax amount
    taxAmmount = netPrice * (salesTax / 100);

    //calculate the total amount
    total = taxAmmount + netPrice;

    //print everything out
    cout<< "Thank you for shopping at IgniteMart" << endl;
    cout<< "------------------------------------" << endl;
    cout<< left << setw(45) << "The cost of renting one room:"
        << right << setw(1) << "$ " << costPerRoom << endl;
    cout<< left << setw(45) << "The total number of rooms booked:"
        << right << setw(1) << "  " << numOfRoom << " rooms" << endl;
    cout<< left << setw(45) << "The number of nights the rooms are booked:"
        << right << setw(1) << "  " << numOfNights << " nights" << endl;
    cout<< left << setw(45) << "The total cost of the rooms:"
        << right << setw(1) << "$ " << netPrice << endl;
    cout<< left << setw(45) << "The sales tax amount:"
        << right << setw(1) << "$ " << taxAmmount << endl;
    cout<< left << setw(45) << "The total:"
        << right << setw(1) << "$ " << total << endl;


    return 0;
}
