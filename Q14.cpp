/*#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	float mpay, loan_amount, MonINTrate1, MonINTrate, AmountPaidback, Interest;
	float No_oFpayments;

	cout << "enter loan amount \n";

	cin >> loan_amount;

	cout << "monthly interest rate\n";

	cin >> MonINTrate1;

	cout << "no. Of payments\n";
	cin >> No_oFpayments;
	MonINTrate = MonINTrate1 / 100;
		mpay = (MonINTrate * pow((1 + MonINTrate), No_oFpayments) / (pow((1 + MonINTrate), No_oFpayments) - 1) * loan_amount;


	AmountPaidback = No_oFpayments * mpay;

	Interest = AmountPaidback - loan_amount;

	cout << "monthly payment=" << mpay << "\n";

	cout << "amount paid back=" << AmountPaidback << "\n";

	cout << "Interest Paid=" << Interest;

	return 0;

}
*/