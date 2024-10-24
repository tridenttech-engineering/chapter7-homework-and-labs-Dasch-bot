//Lab7-4.cpp - displays the average electric bill
//Created/revised by Matthew Dasch on 10/22/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double avgBill = 0.0;
	double bill = 0.0;
	double totalBills = 0.0;
	int months = 0;
	
	while(bill >= 0.0){
	if (months > 0){
		cout << "Bill for month " << months + 1 << ": ";
		cin >> bill;
		++months;
		if(bill >= 0.0){
			totalBills += bill;
		}
	}
	else{
		cout << "Bill for month 1: ";
		cin >> bill;
		++months;
		if(bill >= 0.0){
			totalBills += bill;
		}
	}
	}
	cout << setprecision(2);
	avgBill=totalBills/(months-1);
	cout << "No bill amount entered." << endl;
	cout << "Average electric bill for " << months-1 << " months: $" << fixed << setprecision(2)<< avgBill << endl;
	return 0;
}	//end of main function


