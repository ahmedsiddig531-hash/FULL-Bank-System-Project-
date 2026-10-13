#pragma once
#include <iostream>
#include <iomanip>
#include "clsCurrency.h"
#include "clsScreen.h"
class clsCurrencyList : protected clsScreen
{
private:
	static void _PrintCurrencyRecordLine(clsCurrency Currency)
	{
		cout << setw(8) << left << "" << "| " << setw(25) << left << Currency.Country();
		cout << "| " << setw(15) << left << Currency.CurrencyCode();
		cout << "| " << setw(40) << left << Currency.CurrencyName();
		cout << "| " << setw(10) << left << Currency.Rate();

	}
public:
	static void ShowCurrenciesList()
	{
		vector <clsCurrency> vCurrencies = clsCurrency::GetCurrenciesList();

		string Title = "\t  Currency List Screen";
		string SubTitle = "\t    (" + to_string(vCurrencies.size()) + ") Currency(s).";
		clsScreen::_DrawScreenHeader(Title, SubTitle);
		cout << setw(8) << left << "" << "\n\t_______________________________________________________";
		cout << "______________________________________________\n" << endl;
		cout << setw(8) << left << "" << "| " << left << setw(25) << "Country";
		cout << "| " << left << setw(15) << "Currency Code";
		cout << "| " << left << setw(40) << "Currency Name";
		cout << "| " << left << setw(10) << "Rate";
		cout << setw(8) << left << "" << "\n\t_______________________________________________________";
		cout << "______________________________________________\n" << endl;
		if (vCurrencies.size() == 0)
			cout << "\t\t\t\tNo Currencies Available In the System!";
		else
			for (clsCurrency Currency : vCurrencies)
			{
				_PrintCurrencyRecordLine(Currency);
				cout << endl;
			}
		cout << setw(8) << left << "" << "\n\t_______________________________________________________";
		cout << "______________________________________________\n" << endl;
	}
};

