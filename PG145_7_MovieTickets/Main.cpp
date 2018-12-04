#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	//Data Definition
	string movieName;
	int adultTickets;
	int childTickets;
	const float adultTicketPrice = 10.00;
	const float childTicketPrice = 6.00;
	float ticketSales;
	float myShare;
	float distShare;
	const float profitMargin = .2;


	//Input

	cout << "Enter the name of the Movie: ";
	getline(cin, movieName);
	cout << "Enter number of Adult Tickets sold: ";
	cin >> adultTickets;
	cout << "Enter number of Child Tickets sold: ";
	cin >> childTickets;

	//Calculation
	ticketSales = (adultTickets * adultTicketPrice) + (childTickets * childTicketPrice);
	myShare = ticketSales * profitMargin;
	distShare = ticketSales - myShare;
	
	
	//Output
	cout << "***********************************" << endl;
	cout << "***********************************" << endl;
	cout << "\tMovie Name:   " << movieName << endl;
	cout << setprecision(2)<<fixed;
	cout << "\tTotal Sales: $" << setw(8) << ticketSales << endl;
	cout << "\tAdult:       $" << setw(8) << adultTickets * adultTicketPrice << " (" << adultTickets << ")" << endl;
	cout << "\tChild:       $" << setw(8) << childTickets * childTicketPrice << " (" << childTickets << ")" << endl;
	cout << "\tNet Profit:  $" << setw(8) << myShare << endl;
	cout << "\tDist Cost:   $" << setw(8) << distShare << endl;
	cout << "***********************************" << endl;
	cout << "***********************************" << endl;


}
