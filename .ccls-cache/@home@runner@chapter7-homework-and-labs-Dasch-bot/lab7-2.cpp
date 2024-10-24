//Lab7-2.cpp - Displays the number of years required
//for a company's sales to reach at least $150,000
//using a 5.5% annual growth rate. Also displays
//the sales at that time.
//Created/revised by Matthew Dasch on 10/22/2024

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double rate = 0.055;
    int years = 0;
    double totalSales = 0.0;

    for (double sales = 0.0; totalSales < 150000.0; years += 1)
        {
            while(years == 0){
                cout << "Current year's sales?" << endl;
                cin >> sales;
                break;
            }
            totalSales = sales * (1 + rate);
            sales = totalSales;
            cout << "Total sales for year " << years << ": $" << totalSales << endl;
        }
    return 0;
} //end of main function
