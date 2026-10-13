
#pragma once
#include <iostream>
#include <cctype>

#include "clsScreen.h"
#include "clsCurrency.h"
#include "clsInputValidate.h"

using namespace std;

class clsUpdateRate : protected clsScreen
{
private:

    static void _Print(clsCurrency Currency)
    {
        cout << "\nCurrency Card:";
        cout << "\n____________________________";
        cout << "\nCountry Name : " << Currency.Country();
        cout << "\nCurrency Code: " << Currency.CurrencyCode();
        cout << "\nCurrency Name: " << Currency.CurrencyName();
        cout << "\nRate (1$)    : " << Currency.Rate();
        cout << "\n____________________________\n";
    }

public:

    static void ShowCurrencyRateUpdate()
    {
        system("cls");

        _DrawScreenHeader("\tUpdate Currency Rate Screen");

        string CurrencyCode;

        cout << "\nPlease Enter Currency Code: ";
        CurrencyCode = clsInputValidate::ReadString();

        while (!clsCurrency::IsCurrencyExist(CurrencyCode))
        {
            cout << "\nCurrency is not found, choose another one: ";
            CurrencyCode = clsInputValidate::ReadString();
        }

        clsCurrency Currency1 = clsCurrency::FindByCode(CurrencyCode);

        if (Currency1.IsEmpty())
        {
            cout << "\nCurrency was not found.\n";
            return;
        }

        _Print(Currency1);

        char Answer = 'N';

        cout << "\nAre you sure you want to update the rate of this currency (Y/N)? ";
        cin >> Answer;

        if (toupper(static_cast<unsigned char>(Answer)) == 'Y')
        {
            float NewRate = 0;

            do
            {
                cout << "\nEnter the New Rate: ";
                NewRate = clsInputValidate::ReadFloatNumber();

                if (NewRate <= 0)
                {
                    cout << "\nRate must be greater than zero.\n";
                }

            } while (NewRate <= 0);

            Currency1.UpdateRate(NewRate);

            cout << "\nCurrency Updated Successfully :-)\n";

            _Print(Currency1);
        }
        else
        {
            cout << "\nUpdate Cancelled.\n";
        }
    }
};
