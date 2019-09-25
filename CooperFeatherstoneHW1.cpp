#include <iostream>
#include <iomanip>

using namespace std;
int main() {
    //defining variables
    double price1;
    double price2;
    double price3;

    //fixing the decimal point

    cout<<fixed<< showpoint<< setprecision(2);

    //asking the name and price of the first item

    cout << "Price of item 1: $";
    cin >> price1;
    cout << endl;

    //asking the name and price of the second item

    cout << "Price of item 2: $";
    cin >> price2;
    cout << endl;

    //asking the name and price of the third item

    cout << "Price of item 3: $";
    cin >> price3;
    cout << endl;


    //printing the receipt

    cout<< "Thank you for shopping at IgniteMart" << endl;
    cout<< "Item               Unit Price" << endl;
    cout<< "-----------------------------" << endl;
    cout<< left << setw(19) << "item 1"  << right << setw(1) << "$" << setw(8) << price1 << endl;
    cout<< left << setw(19) << "item 2"  << right << setw(1) << "$" << setw(8) << price2 << endl;
    cout<< left << setw(19) << "item 3" << right << setw(1) << "$" << setw(8) << price3 << endl;
    cout<< setw(28)<< "---------" << endl;
    cout<< left << setw(5) << "Total"<< right
        << setw(15) << "$" << setw(8) << price1 + price2 + price3 << endl;

    
    return 0;
}
