#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ afisaj;
	protected:

	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;

	private: System::Windows::Forms::Button^ inmultire;
	private: System::Windows::Forms::Button^ adunare;
	private: System::Windows::Forms::Button^ scadere;
	private: System::Windows::Forms::Button^ egal;





	private: System::Windows::Forms::Button^ impartire;



	private:
		//inceput declarare variabile
		double stocare;
		char operatie;
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->inmultire = (gcnew System::Windows::Forms::Button());
			this->adunare = (gcnew System::Windows::Forms::Button());
			this->scadere = (gcnew System::Windows::Forms::Button());
			this->egal = (gcnew System::Windows::Forms::Button());
			this->impartire = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Location = System::Drawing::Point(96, 60);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(280, 65);
			this->afisaj->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(201, 344);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(301, 344);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(99, 290);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(201, 289);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(301, 289);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(99, 233);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(75, 23);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(201, 233);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(301, 232);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(99, 389);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::Salmon;
			this->button11->Location = System::Drawing::Point(201, 389);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 12;
			this->button11->Text = L"CLEAR";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &Form1::button11_Click);
			// 
			// inmultire
			// 
			this->inmultire->Location = System::Drawing::Point(401, 289);
			this->inmultire->Name = L"inmultire";
			this->inmultire->Size = System::Drawing::Size(75, 23);
			this->inmultire->TabIndex = 14;
			this->inmultire->Text = L"*";
			this->inmultire->UseVisualStyleBackColor = true;
			this->inmultire->Click += gcnew System::EventHandler(this, &Form1::inmultire_Click);
			// 
			// adunare
			// 
			this->adunare->Location = System::Drawing::Point(401, 344);
			this->adunare->Name = L"adunare";
			this->adunare->Size = System::Drawing::Size(75, 23);
			this->adunare->TabIndex = 15;
			this->adunare->Text = L"+";
			this->adunare->UseVisualStyleBackColor = true;
			this->adunare->Click += gcnew System::EventHandler(this, &Form1::adunare_Click);
			// 
			// scadere
			// 
			this->scadere->Location = System::Drawing::Point(401, 389);
			this->scadere->Name = L"scadere";
			this->scadere->Size = System::Drawing::Size(75, 23);
			this->scadere->TabIndex = 16;
			this->scadere->Text = L"-";
			this->scadere->UseVisualStyleBackColor = true;
			this->scadere->Click += gcnew System::EventHandler(this, &Form1::scadere_Click);
			// 
			// egal
			// 
			this->egal->Location = System::Drawing::Point(301, 389);
			this->egal->Name = L"egal";
			this->egal->Size = System::Drawing::Size(75, 23);
			this->egal->TabIndex = 17;
			this->egal->Text = L"=";
			this->egal->UseVisualStyleBackColor = true;
			this->egal->Click += gcnew System::EventHandler(this, &Form1::egal_Click);
			// 
			// impartire
			// 
			this->impartire->Location = System::Drawing::Point(401, 232);
			this->impartire->Name = L"impartire";
			this->impartire->Size = System::Drawing::Size(75, 23);
			this->impartire->TabIndex = 18;
			this->impartire->Text = L"/";
			this->impartire->UseVisualStyleBackColor = true;
			this->impartire->Click += gcnew System::EventHandler(this, &Form1::impartire_Click_1);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(694, 546);
			this->Controls->Add(this->impartire);
			this->Controls->Add(this->egal);
			this->Controls->Add(this->scadere);
			this->Controls->Add(this->adunare);
			this->Controls->Add(this->inmultire);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->afisaj);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "1";
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "2";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "3";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "4";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "5";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "6";
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "7";
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "8";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "9";
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Text += "0";
}

private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	afisaj->Clear();
	stocare = Double::NaN;
	operatie = ']';
}
private: System::Void impartire_Click_1(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (Double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '/';
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("INTRODUCETI O VALOARE INAINTE DE A EFECTUA IMPARTIREA", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}

private: System::Void inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (Double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '*';
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("INTRODUCETI O VALOARE INAINTE DE A EFECTUA INMULTIREA", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void adunare_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (Double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '+';
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("INTRODUCETI O VALOARE INAINTE DE A EFECTUA ADUNAREA", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void scadere_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		double numar;
		if (Double::TryParse(afisaj->Text, numar))
		{
			stocare = numar;
			afisaj->Text = "";
			operatie = '-';
		}
		else
		{
			MessageBox::Show("Introduceti un numar valid!!!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	else
	{
		MessageBox::Show("INTRODUCETI O VALOARE INAINTE DE A EFECTUA SCADEREA", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
}
private: System::Void egal_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(afisaj->Text))
	{
		int numar;
		if (int::TryParse(afisaj->Text, numar))
		{
			double rezultat;
			switch (operatie)
			{
			case '+' :
				rezultat = stocare + numar;
				break;
			case '-':
				rezultat = stocare - numar;
				break;
			case '*':
				rezultat = stocare * numar;
				break;
			case '/':
				if (numar != 0)
				{
					rezultat = stocare / numar;
				}
				else
				{
					MessageBox::Show("NU SE POATE IMPARTI LA 0!", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
				break;
			default:
				MessageBox::Show("Operatie nedefinita", "EROARE", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return;
		    }
			afisaj->Text = rezultat.ToString();
			stocare = rezultat;
		}
	}
}
};
}
