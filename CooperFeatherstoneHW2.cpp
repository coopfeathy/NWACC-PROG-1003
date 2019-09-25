#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
int main() {
    //defining variables

    string item1;
    string item2;
    string item3;
    string item4;
    string item5;
    double price1;
    double price2;
    double price3;
    double price4;
    double price5;

    //asking the name and price of the first item

    cout<<fixed<< showpoint<< setprecision(2);
    cout << "Name of your first item: ";
    cin >> item1;
    cout << "Price of " << item1 << ": $";
    cin >> price1;
    cout << endl;

    //asking the name and price of the second item

    cout << "Name of your second item: ";
    cin >> item2;
    cout << "Price of " << item2 << ": $";
    cin >> price2;
    cout << endl;

    //asking the name and price of the third item

    cout << "Name of your third item: ";
    cin >> item3;
    cout << "Price of " << item3 << ": $";
    cin >> price3;
    cout << endl;

    //asking the name and price of the fourth item

    cout << "Name of your fourth item: ";
    cin >> item4;
    cout << "Price of " << item4 << ": $";
    cin >> price4;
    cout << endl;

    //asking the name and price of the fifth item

    cout << "Name of your fifth item: ";
    cin >> item5;
    cout << "Price of " << item5 << ": $";
    cin >> price5;
    cout << endl;


    //printing the receipt

    cout<< "Thank you for shopping at IgniteMart" << endl;
    cout<< "Item               Unit Price" << endl;
    cout<< "-----------------------------" << endl;
    cout<< left << setw(19) << item1  << right << setw(1) << "$" << setw(8) << price1 << endl;
    cout<< left << setw(19) << item2  << right << setw(1) << "$" << setw(8) << price2 << endl;
    cout<< left << setw(19) << item3  << right << setw(1) << "$" << setw(8) << price3 << endl;
    cout<< left << setw(19) << item4  << right << setw(1) << "$" << setw(8) << price4 << endl;
    cout<< left << setw(19) << item5  << right << setw(1) << "$" << setw(8) << price5 << endl;
    cout<< setw(28)<< "---------" << endl;
    cout<< left << setw(5) << "Total"<< right
    << setw(15) << "$" << setw(8) << price1 + price2 + price3 + price4 + price5 << endl;



    return 0;
}
