#include<iostream>
using namespace std;

double calculateBill(double price, int quantity, double discount = 0.0)
{
    double total = price * quantity;
    total -= (total * discount); 
    return total;
}

int main()
{
    cout << "Without Discount: " << calculateBill(50, 2) <<"$"<< endl;       
    cout << "With 10% Discount: " << calculateBill(50, 2, 0.10) <<"$"<< endl; 
    return 0;
}