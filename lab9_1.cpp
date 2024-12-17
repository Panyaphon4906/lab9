#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double X, Y, Z;
	cout << "Enter initial loan: ";
	cin >> X;
	cout << "Enter interest rate per year (%): ";
	cin >> Y;
	cout << "Enter amount you can pay per year: ";
	cin >> Z;

	cout << fixed << setprecision(2);

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

	int year = 1; 
    double prevBalance = X;
    double interest, total, newBalance;

    while (prevBalance > 0) {
        interest = prevBalance * (Y / 100); 
        total = prevBalance + interest; 
        double payment = (total < Z) ? total : Z; 

        newBalance = total - payment;

		cout << setw(13) << left << year; 
		cout << setw(13) << left << prevBalance;
		cout << setw(13) << left << interest;
		cout << setw(13) << left << total;
		cout << setw(13) << left << payment;
		cout << setw(13) << left << newBalance;
		cout << "\n";	
		
		prevBalance = newBalance;
		year++;
	}
	
	return 0;
}
