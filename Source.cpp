#include <iostream>
#include <cstdlib>
#include <time.h>
#include <cctype>
#include <cstring>
#include <cstdio>
#include <windows.h>
#include <stdio.h> 
#include <stdlib.h> 

HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
using namespace std;
int main()
{

	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int someCustomers;
	char playstationConsol, playstationGamepad, playstationDisk, playstationVr;
	int priceConcol, priceGamepad, priceDisk, priceVr;
	int quontityConcol, quontityGamepad, quontityDisk, quontityVr;
	int  sumCustomer1 = 0, sumCustomer2 = 0, sumCustomer3 = 0, sumCustomer4 = 0, summaOneCustomer = 0;
	int numberCustomers = 0; summaOneCustomer = 0;

	char nameThingsThatCustomerWantsBuy, goToPay, nextCustomer, displayReport, goOut;
	int totalBillTheDay = 0, totalBillOneCustomer = 0;
	int enterQuntityWantBayConcol = 0, enterQuntityWantBayGamepad = 0, enterQuntityWantBayDisk = 0, enterQuntityWantBayVr = 0;

	playstationConsol = 'A';
	priceConcol = 10000;
	quontityConcol = 20;

	playstationGamepad = 'B';
	priceGamepad = 1500;
	quontityGamepad = 15;

	playstationDisk = 'C';
	priceDisk = 2000;
	quontityDisk = 25;

	playstationVr = 'D';
	priceVr = 9000;
	quontityVr = 10;
	goToPay = 'E';
	goOut = 'F';
	displayReport = 'G';
	nextCustomer = 'N';
	do
	{
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	someCustomersToday:
		cout << "\t" << "To work with a client - enter  1, END program - enter 0 :" << endl;
		cin >> someCustomers;

		if (!(someCustomers == 1 || someCustomers == 0))
		{
			cin.clear();
			cin.ignore(10000, '\n');
			SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
			cout << "You should only enter numbers 1 or 0" << endl;
			goto someCustomersToday;
		}
		else if (someCustomers == 1)
		{
			numberCustomers++;
		customerWantToBuy:
			SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
			cout << "\t\t" << "What does this customer want to buy?" << endl
				<< "Press 'A' - playstationConcol - 10000 UAH" << endl
				<< "Press 'B' - playstationGamepad - 1500 UAH" << endl
				<< "Press 'C' - playstationDisk - 2000 UAH" << endl
				<< "Press 'D' - playstationVr - 9000 UAH" << endl;
			SetConsoleTextAttribute(h, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
			cout << "Press 'E' - goToPay" << endl
				<< "Press 'F' - goOut " << endl
				<< "Press 'G' - displayReport " << endl
				<< "Press 'N' - nextCustomer" << endl;
			cin >> nameThingsThatCustomerWantsBuy;
			nameThingsThatCustomerWantsBuy = toupper(nameThingsThatCustomerWantsBuy);
			if (playstationConsol != nameThingsThatCustomerWantsBuy &&
				playstationGamepad != nameThingsThatCustomerWantsBuy &&
				playstationDisk != nameThingsThatCustomerWantsBuy &&
				playstationVr != nameThingsThatCustomerWantsBuy &&
				goToPay != nameThingsThatCustomerWantsBuy &&
				goOut != nameThingsThatCustomerWantsBuy &&
				displayReport != nameThingsThatCustomerWantsBuy &&
				nextCustomer != nameThingsThatCustomerWantsBuy)
			{
				cin.clear();
				cin.ignore(10000, '\n');
				cout << "You should only enter 'A','B','C','D','E','F','G','N' " << endl;
				goto customerWantToBuy;
			}
			else
			{
				switch (nameThingsThatCustomerWantsBuy)
				{
				case 'A':
				chooseAnotherQuantity1:
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << " quontity ? " << endl;
					cin >> enterQuntityWantBayConcol;
					if (quontityConcol >= enterQuntityWantBayConcol)
					{
						quontityConcol -= enterQuntityWantBayConcol;
						totalBillOneCustomer = enterQuntityWantBayConcol * priceConcol;
						totalBillTheDay += totalBillOneCustomer;
						sumCustomer1 = totalBillOneCustomer;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "In your basket - " << enterQuntityWantBayConcol << "  -   Concol" << endl;
						goto customerWantToBuy;

					}
					else
					{
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Remainder - " << quontityConcol << endl;
						goto chooseAnotherQuantity1;
					}

					break;


				case 'B':
				chooseAnotherQuantity2:
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << " quontity ? " << endl;
					cin >> enterQuntityWantBayGamepad;
					if (quontityGamepad >= enterQuntityWantBayGamepad)
					{
						quontityGamepad -= enterQuntityWantBayGamepad;
						totalBillOneCustomer = enterQuntityWantBayGamepad * priceGamepad;
						totalBillTheDay += totalBillOneCustomer;
						sumCustomer2 = totalBillOneCustomer;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "In your basket - " << enterQuntityWantBayGamepad << "  -   Gamepad" << endl;
						goto customerWantToBuy;

					}
					else
					{
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Remainder - " << quontityGamepad << endl;
						goto chooseAnotherQuantity2;
					}

					break;
				case 'C':
				chooseAnotherQuantity3:
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << " quontity ? " << endl;
					cin >> enterQuntityWantBayDisk;
					if (quontityDisk >= enterQuntityWantBayDisk)
					{
						quontityDisk -= enterQuntityWantBayDisk;
						totalBillOneCustomer = enterQuntityWantBayDisk * priceDisk;
						totalBillTheDay += totalBillOneCustomer;
						sumCustomer3 = totalBillOneCustomer;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "In your basket - " << enterQuntityWantBayDisk << " -  Disk" << endl;						goto customerWantToBuy;
						goto customerWantToBuy;
					}
					else
					{
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Remainder - " << quontityDisk << endl;
						goto chooseAnotherQuantity3;
					}
					break;
				case 'D':
				chooseAnotherQuantity4:
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << " quontity ? " << endl;
					cin >> enterQuntityWantBayVr;
					if (quontityVr >= enterQuntityWantBayVr)
					{
						quontityVr -= enterQuntityWantBayVr;
						totalBillOneCustomer = enterQuntityWantBayVr * priceVr;
						totalBillTheDay += totalBillOneCustomer;
						sumCustomer4 = totalBillOneCustomer;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "In your basket - " << enterQuntityWantBayVr << " -  Vr" << endl;
						goto customerWantToBuy;
					}
					else
					{
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Remainder - " << quontityVr << endl;
						goto chooseAnotherQuantity4;
					}
					break;
				case  'E':
					summaOneCustomer = sumCustomer1 + sumCustomer2 + sumCustomer3 + sumCustomer4;
					if (summaOneCustomer >= 2000)
					{
						SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Quontity Concol wich customer wants buy =" << enterQuntityWantBayConcol << " - " << enterQuntityWantBayConcol * priceConcol << endl
							<< "\t\t" << " Quontity Gamepad wich customer wants buy =" << enterQuntityWantBayGamepad << " - " << enterQuntityWantBayGamepad * priceGamepad << endl
							<< "\t\t" << " Quontity Disk wich customer wants buy =" << enterQuntityWantBayDisk << " - " << enterQuntityWantBayDisk * priceDisk << endl
							<< "\t\t" << " Quontity Vr wich customer wants buy =" << enterQuntityWantBayVr << " - " << enterQuntityWantBayVr * priceVr << endl;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << "Your discount = " << summaOneCustomer / 10 / 2 << endl;
						cout << "\t\t" << " Bill = " << summaOneCustomer - (summaOneCustomer / 10 / 2) << endl;
						goto customerWantToBuy;

					}
					else
					{
						SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Quontity Concol wich customer wants buy =" << enterQuntityWantBayConcol << " - " << enterQuntityWantBayConcol * priceConcol << endl
							<< "\t\t" << " Quontity Gamepad wich customer wants buy =" << enterQuntityWantBayGamepad << " - " << enterQuntityWantBayGamepad * priceGamepad << endl
							<< "\t\t" << " Quontity Disk wich customer wants buy =" << enterQuntityWantBayDisk << " - " << enterQuntityWantBayDisk * priceDisk << endl;
						SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
						cout << "\t\t" << " Quontity Vr wich customer wants buy =" << enterQuntityWantBayVr << " - " << enterQuntityWantBayVr * priceVr << endl;
						cout << "\t\t" << " Bill = " << summaOneCustomer << endl;
						goto customerWantToBuy;

					}
				case 'F':
					goto theEnd;
					break;
				case'G':
					SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
					cout << "\t\t" << "Quanteti Cuctomer in a day = " << numberCustomers << endl
						<< "\t\t" << "Quanteti things left in the stock : " << endl
						<< "\t\t" << "Concol" << "-" << quontityConcol << endl
						<< "\t\t" << "Gamepad" << "-" << quontityGamepad << endl
						<< "\t\t" << "Disk" << "-" << quontityDisk << endl
						<< "\t\t" << "Vr" << "-" << quontityVr << endl
						<< "\t\t" << "Money for the day -" << totalBillTheDay << "\t" << "UAN" << endl;
					goto someCustomersToday;
					break;
				case 	'N':
					goto someCustomersToday;
				default:
					SetConsoleTextAttribute(h, FOREGROUND_RED | FOREGROUND_INTENSITY);
					cout << "You should only enter 'A','B','C','D','E','F','G' ,'N' " << endl;
					goto customerWantToBuy;
					break;
				}
			}


		}
		else
		{
			goto theEnd;

		}

	}

	while (numberCustomers >= 1);
	totalBillOneCustomer = 0;
	summaOneCustomer = 0;

theEnd:
	SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	cout << "\t\t\t" << "GOOD BYE!!!" << endl;
	return 0;
}


