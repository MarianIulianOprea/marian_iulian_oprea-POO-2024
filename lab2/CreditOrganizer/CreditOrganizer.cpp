#include "pch.h"
#include "CreditCardAccount.h"

using namespace System;

int main(array<System::String^>^ args) {
	Console::WriteLine("Creating account object");
	CreditCardAccount^ account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	Console::WriteLine("\nMaking a purchase (300)");
	account1->MakePurchase(300);
	Console::WriteLine("\nMaking a purchase (700)");
	account1->MakePurchase(700);
	Console::WriteLine("\nMaking a purchase (500)");
	account1->MakePurchase(500);
	Console::WriteLine("\nRedeeming points");
	account1->RedeemLoyalityPoints();
	/*
	CreditCardAccount^ myAccount;
	myAccount = gcnew CreditCardAccount(12345,2500);
	myAccount->SetCreditLimit(1000);
	myAccount->MakePurchase(1000);
	myAccount->MakeRepayment(700);
	myAccount->PrintStatement();
	long num = myAccount->GetAccountNumber();
	Console::Write("Account Number: ");
	Console::WriteLine(num);
	*/
	/*Console::Write("Card name is: ");
	Console::WriteLine(CreditCardAccount::name);
	int n = CreditCardAccount::GetNumberOfAccounts();
	Console::Write("Number of accounts initially: ");
	Console::WriteLine(n);
	Console::Write("Creating first object\n");
	CreditCardAccount ^account1;
	account1 = gcnew CreditCardAccount(12345, 2000);
	account1->MakePurchase(300);
	account1->PrintStatement();
	Console::WriteLine("Creating second object");
	CreditCardAccount^ account2;
	account1 = gcnew CreditCardAccount(67890, 5000);
	account1->MakePurchase(750);
	account1->PrintStatement();
	//Console::WriteLine(n);
	n = CreditCardAccount::GetNumberOfAccounts();
	Console::Write("Number of accounts now: ");
	Console::WriteLine(n);
	*/
}