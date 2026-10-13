#pragma once
#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsCurrencyList.h"
#include "clsScreen.h"
#include "clsUpdateRate.h"
#include "clsCurrencyCalculator.h"
#include "clsFindCurrencyScreen.h"

class clsCurrencyExchangeScreen : protected clsScreen
{
private:
	enum enCurrencyExchangeOptions { eListCurrencies = 1, eFindCurrency = 2, eUpdateCurrency = 3, eCurrencyCalculation = 4, eExit = 5 };

	static void _ShowListCurrenciesScreen()
	{
		//cout << "\nList Currencies Screen Will Be Here.\n";
		clsCurrencyList::ShowCurrenciesList();
	}

	static void _ShowFindCurrencyScreen()
	{
		//cout << "\nFind Currency Screen Will Be Here.\n";
		clsFindCurrencyScreen::ShowFindCurrencyScreen();
	}

	static void _ShowUpdateCurrencyScreen()
	{
		//cout << "\nUpdate Currency Screen Will Be Here.\n";
		clsUpdateRate::ShowCurrencyRateUpdate();
	}

	static void _ShowCurrencyCalculationScreen()
	{
		//cout << "\nCurrency Calculation Screen Will Be Here.\n";
		clsCurrencyCalculator::ShowCurrencyCalculator();
	}


	static void _GoBackToCurrencyExchangeMenue()
	{
		cout << "\n\nPress any key to go back to Currency Exchange Menue...";
		system("pause>0");
		ShowCurrencyExchangeScreen();
	}

	static void _PerformCurrencyExchangeOption(enCurrencyExchangeOptions CurrencyExchangeOption)
	{
		switch (CurrencyExchangeOption)
		{
		case enCurrencyExchangeOptions::eListCurrencies:
			system("cls");
			_ShowListCurrenciesScreen();
			_GoBackToCurrencyExchangeMenue();
			break;
		case enCurrencyExchangeOptions::eFindCurrency:
			system("cls");
			_ShowFindCurrencyScreen();
			_GoBackToCurrencyExchangeMenue();
			break;
		case enCurrencyExchangeOptions::eUpdateCurrency:
			system("cls");
			_ShowUpdateCurrencyScreen();
			_GoBackToCurrencyExchangeMenue();
			break;
		case enCurrencyExchangeOptions::eCurrencyCalculation:
			system("cls");
			_ShowCurrencyCalculationScreen();
			_GoBackToCurrencyExchangeMenue();
			break;
		case enCurrencyExchangeOptions::eExit:
			system("cls");
			break;
		default:
			cout << "\nInvalid option. Please try again.\n";
			break;
		}
	}
public:
	static void ShowCurrencyExchangeScreen()
	{
		system("cls");
		_DrawScreenHeader("\t\tCurrency Exchange Screen");
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t\tCurrency Exchange Menue\n";
		cout << setw(37) << left << "" << "===========================================\n";
		cout << setw(37) << left << "" << "\t[1] List Currencies.\n";
		cout << setw(37) << left << "" << "\t[2] Find Currency.\n";
		cout << setw(37) << left << "" << "\t[3] Update Currency.\n";
		cout << setw(37) << left << "" << "\t[4] Currency Calculation.\n";
		cout << setw(37) << left << "" << "\t[5] Exit.\n";
		cout << setw(37) << left << "" << "===========================================\n";
		_PerformCurrencyExchangeOption((enCurrencyExchangeOptions)clsInputValidate::ReadIntNumberBetween(1,5));
	}
};

