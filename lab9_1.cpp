#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){
    double loan,rate,payYear;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payYear;
	

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
    cout << fixed << setprecision(2);

    int year = 1;

    while (loan > 0) {
        double interest = loan * rate / 100.0;
        double total = loan + interest;
        double payment;
        if (total < payYear)
            payment = total;
        else
            payment = payYear;

        double newBalance = total - payment;

        cout << setw(13) << left << year
             << setw(13) << left << loan
             << setw(13) << left << interest
             << setw(13) << left << total
             << setw(13) << left << payment
             << setw(13) << left << newBalance
             << "\n";

        loan = newBalance;
        year++;
    }

    return 0;
}