#pragma once
#include <iostream>
#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"
class clsFindCurrencyScreen : protected clsScreen
{
	enum enFindUserOptions { eByCode = 1, eByCountry = 2 };

	static void _PrintCurrency(clsCurrency Currency)
	{
		cout << "\nCurrency Card:";
		cout << "\n___________________";
		cout << "\nCountry Name : " << Currency.Country();
		cout << "\nCurrency Code: " << Currency.CurrencyCode();
		cout << "\nCurrency Name: " << Currency.CurrencyName();
		cout << "\nRate         : " << Currency.Rate();
		cout << "\n___________________\n";
	}

	static void _FindCurrencyByCode()
	{
		string CurrencyCode;
		cout << "\nPlease Enter Currency Code: ";
		CurrencyCode = clsInputValidate::ReadString();

		while (!clsCurrency::IsCurrencyExist(CurrencyCode))
		{
			cout << "\nCurrency is not found, choose another one: ";
			CurrencyCode = clsInputValidate::ReadString();
		}

		clsCurrency Currency1 = clsCurrency::FindByCode(CurrencyCode);
		if (!Currency1.IsEmpty())
		{
			cout << "\nCurrency Found :-)\n";
		}
		else
		{
			cout << "\nCurrency Was not Found :-(\n";
		}

		_PrintCurrency(Currency1);
	}


	static void _FindCurrencyByCountry()
	{
		string Country;

		cout << "\nPlease Enter Country Name: ";
		Country = clsInputValidate::ReadString();

		clsCurrency Currency1 = clsCurrency::FindByCountry(Country);

		while (Currency1.IsEmpty())
		{
			cout << "\nCurrency is not found, choose another one: ";
			Country = clsInputValidate::ReadString();

			Currency1 = clsCurrency::FindByCountry(Country);
		}

		cout << "\nCurrency Found :-)\n";
		_PrintCurrency(Currency1);
	}


public:
	 
	static void ShowFindCurrencyScreen()
	{
		_DrawScreenHeader("\t  Find Currency Screen");
		cout << "\nFind Currency By: ";
		cout << "1. Currency Code ";
		cout << "2. Country Name ";

		short Choice = clsInputValidate::ReadIntNumberBetween(1, 2);

		switch (Choice)
		{
		case enFindUserOptions::eByCode:
			system("cls");
			_FindCurrencyByCode();
			break;
		case enFindUserOptions::eByCountry:
			system("cls");
			_FindCurrencyByCountry();
			break;
		default:
			cout << "\nInvalid option. Please try again.\n";
			break;
		}
	}
};

