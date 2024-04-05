#include "pch.h"
#include "CurrentAccount.h"
#include "SavingsAccount.h"

using namespace System;

int main(array<System::String ^> ^args)
{
    CurrentAccount acc("Me", 2000.0);
    acc.Credit(100.0);

    double balance = acc.GetBalance();
    double overdraft = acc.GetOverdraftLimit();

    Console::WriteLine("Balance: {0}", balance);
    Console::WriteLine("Overdraft: {0}", overdraft);

    SavingsAccount::SetInterestRate(2.5);
    SavingsAccount sacc("You");
    double rate = sacc.GetInterestRate();

    Console::WriteLine("Interest rate: {0}", rate);
    return 0;
}
