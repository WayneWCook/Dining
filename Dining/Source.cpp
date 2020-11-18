/* Dining.cpp
 * Wayne Cook
 * 3 September 2020
 * Given a price of a dinner, calculate the tip and sales tax and total price
 */
#include <iostream>
#include <string>
using namespace std;

// Start of the executable code
void main() {
	double dinnerPrice,					// Place to store the cost of a dinner
		tipRate = .10,					// Default rate of tipping
		taxRate = .07,					// Tax Rate
		tip, tax, total;				// Place to store calculated values
	string server;						// Server's Name
	// Ask for information
	cout << "Who is your server? ";
	getline(cin, server);
	cout << "What the price of the dinner? ";
	cin >> dinnerPrice;
	// Do you want to allow the user to change the tip rate, place code here if yes.
	tax = taxRate * dinnerPrice;
	tip = tipRate * (dinnerPrice + tax);
	total = dinnerPrice + tax + tip;
	cout << "Server: " << server << ", dinner price: " << dinnerPrice
		<< ", tax: " << tax << ", tip: " << tip << ", total: " << total << endl;
}