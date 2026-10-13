
#pragma once

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>

#include "clsCurrency.h"
#include "clsInputValidate.h"
#include "clsScreen.h"
#include "clsString.h"

using namespace std;

class clsCurrencyCalculator : protected clsScreen
{
private:

    // Convert USD to a foreign currency
    static float _USDToForeignCurrency(float Amount, float ToRate)
    {
        return Amount * ToRate;
    }

    // Convert a foreign currency to USD
    static float _ForeignCurrencyToUSD(float Amount, float FromRate)
    {
        return Amount / FromRate;
    }

    // Convert between two foreign currencies
    static float _ForeignCurrencyToAnother(
        float Amount,
        float FromRate,
        float ToRate)
    {
        float AmountInUSD = _ForeignCurrencyToUSD(Amount, FromRate);

        return _USDToForeignCurrency(AmountInUSD, ToRate);
    }

    // Print currency information
    static void _PrintCurrencyCard(clsCurrency Currency)
    {
        cout << "\nConvert From:\n";
        cout << "-----------------------------------\n";
        cout << "Country      : " << Currency.Country() << '\n';
        cout << "Code         : " << Currency.CurrencyCode() << '\n';
        cout << "Name         : " << Currency.CurrencyName() << '\n';
        cout << "Rate(1$)     : " << Currency.Rate() << '\n';
        cout << "-----------------------------------\n";
    }

    // Read a valid currency code
    static clsCurrency _ReadCurrency(string Message)
    {
        string CurrencyCode;

        cout << "\n" << Message;
        CurrencyCode = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\nCurrency not found, enter another code: ";
            CurrencyCode = clsInputValidate::ReadString();
        }

        return clsCurrency::FindByCode(CurrencyCode);
    }

    // Perform one conversion
    static void _PerformCalculation()
    {
        clsCurrency Currency1 = _ReadCurrency(
            "Please Enter Currency1 Code: ");

        clsCurrency Currency2 = _ReadCurrency(
            "Please Enter Currency2 Code: ");

        float Amount = 0;

        do
        {
            cout << "\nEnter Amount to Exchange: ";
            Amount = clsInputValidate::ReadFloatNumber();

            if (Amount < 0)
                cout << "\nAmount cannot be negative.\n";

        } while (Amount < 0);

        string Code1 =
            clsString::UpperAllString(Currency1.CurrencyCode());

        string Code2 =
            clsString::UpperAllString(Currency2.CurrencyCode());

        float FinalConversion = 0;

        // Validate rates before division
        if (Currency1.Rate() <= 0 || Currency2.Rate() <= 0)
        {
            cout << "\nInvalid currency rate. Cannot perform conversion.\n";
            return;
        }

        // USD to foreign currency
        if (Code1 == "USD")
        {
            FinalConversion = _USDToForeignCurrency(
                Amount, Currency2.Rate());
        }
        // Foreign currency to USD
        else if (Code2 == "USD")
        {
            FinalConversion = _ForeignCurrencyToUSD(
                Amount, Currency1.Rate());
        }
        // Foreign currency to another foreign currency
        else
        {
            FinalConversion = _ForeignCurrencyToAnother(
                Amount,
                Currency1.Rate(),
                Currency2.Rate());
        }

        // Display source currency information
        _PrintCurrencyCard(Currency1);

        // Display conversion result
        cout << fixed << setprecision(3);

        cout << "\n"
            << Amount << " " << Code1
            << " = "
            << FinalConversion << " " << Code2
            << '\n';
    }

public:

    static void ShowCurrencyCalculator()
    {
        char Answer = 'N';

        do
        {
            system("cls");

            _DrawScreenHeader("\tCurrency Calculator Screen");

            _PerformCalculation();

            cout << "\nDo you want to perform another calculation? (Y/N): ";
            cin >> Answer;

        } while (toupper(static_cast<unsigned char>(Answer)) == 'Y');
    }
};
