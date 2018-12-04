
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

	float purchasePrice = 45.5f;
	int purchasedShares = 1000;
	float purchaseCost = 0;
	float purchaseCommission = 0;

	const float commissionRate = .02f;

	float sellPrice = 56.90f;
	int sellShares = 1000;
	float sellTotal = 0;
	float sellCommission = 0;

	float profit = 0;

	purchaseCost = purchasePrice * purchasedShares;
	purchaseCommission = commissionRate * purchaseCost;

	sellTotal = sellPrice * sellShares;
	sellCommission = commissionRate * sellTotal;


	profit = (sellTotal - sellCommission) - (purchaseCost + purchaseCommission);
	
	cout << setprecision(2) << fixed;

	cout << "Purchased Shares:     " << setw(15) << purchasedShares << endl;
	cout << "Share Cost:          $" << setw(15) << purchasePrice << endl;
	cout << "Total Stock Cost:    $" << setw(15) << purchaseCost << endl;
	cout << "Purchase Commission: $" << setw(15) << purchaseCommission << " (" << commissionRate << ")" << endl;
	cout << "Total Purchase Cost: $" << setw(15) << purchaseCost + purchaseCommission << endl;
	cout << "**********************" << setw(15) << "***************" << endl;
	cout << "Sold Shares:          " << setw(15) << sellShares << endl;
	cout << "Share Price:         $" << setw(15) << sellPrice << endl;
	cout << "Total Stock Income   $" << setw(15) << sellTotal << endl;
	cout << "Sell Commission:     $" << setw(15) << sellCommission * -1 << " (" << commissionRate << ")" << endl;
	cout << "Total Sell Income:   $" << setw(15) << sellTotal - sellCommission << endl;
	cout << "**********************" << setw(15) << "***************" << endl;
	cout << "Profit:              $" << setw(15) << profit << endl;


}