#pragma once
#include "Program.h"

namespace Przychodnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Podsumowanie informacji o Logowanie
	/// </summary>
	public ref class Logowanie : public System::Windows::Forms::Form
	{
	public:
		Logowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Logowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ tbLogin;
	protected:
	private: System::Windows::Forms::TextBox^ tbPassword;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ btLogin;
	private: System::Windows::Forms::Button^ btCancel;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tbLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->btLogin = (gcnew System::Windows::Forms::Button());
			this->btCancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// tbLogin
			// 
			this->tbLogin->Location = System::Drawing::Point(190, 62);
			this->tbLogin->Name = L"tbLogin";
			this->tbLogin->Size = System::Drawing::Size(100, 22);
			this->tbLogin->TabIndex = 0;
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(190, 103);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(100, 22);
			this->tbPassword->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(67, 62);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 17);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Login";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(70, 103);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(69, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Password";
			// 
			// btLogin
			// 
			this->btLogin->Location = System::Drawing::Point(70, 172);
			this->btLogin->Name = L"btLogin";
			this->btLogin->Size = System::Drawing::Size(75, 23);
			this->btLogin->TabIndex = 4;
			this->btLogin->Text = L"Login";
			this->btLogin->UseVisualStyleBackColor = true;
			this->btLogin->Click += gcnew System::EventHandler(this, &Logowanie::btLogin_Click);
			// 
			// btCancel
			// 
			this->btCancel->Location = System::Drawing::Point(190, 172);
			this->btCancel->Name = L"btCancel";
			this->btCancel->Size = System::Drawing::Size(75, 23);
			this->btCancel->TabIndex = 5;
			this->btCancel->Text = L"Cancel";
			this->btCancel->UseVisualStyleBackColor = true;
			this->btCancel->Click += gcnew System::EventHandler(this, &Logowanie::btCancel_Click);
			// 
			// Logowanie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(383, 290);
			this->Controls->Add(this->btCancel);
			this->Controls->Add(this->btLogin);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->tbLogin);
			this->Name = L"Logowanie";
			this->Text = L"Logowanie";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btLogin_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ konfiguracja = L" datasource=localhost; port=3306; username=root;password=haslo;database=gabinet";
		MySqlConnection^ laczBaza = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id From uzytkownik Where uzytkownik_nazwa='" + tbLogin->Text + "' AND haslo=md5('" + tbPassword->Text + "')", laczBaza);
		MySqlDataReader^ odczytanie;
		try
		{
			laczBaza->Open();
			odczytanie = zapytanie->ExecuteReader();

			if (odczytanie->Read())
			{
				int id_uzytkownik = odczytanie->GetInt32(0);
				this->Hide();
				
				Program^ program = gcnew Program(id_uzytkownik);
				program->ShowDialog();
				this->Close();
			}
			else
			{
				MessageBox::Show("B³êdna nazwa u¿ytkownika lub has³o");
			}
		}
		catch (Exception^ ex)
		{
			MessageBox::Show(ex->Message);

		}
		laczBaza->Close();
	}
private: System::Void btCancel_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
};
}
