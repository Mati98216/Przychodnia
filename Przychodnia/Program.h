#pragma once

namespace Przychodnia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	/// <summary>
	/// Podsumowanie informacji o Program
	/// </summary>
	public ref class Program : public System::Windows::Forms::Form
	{
	public:
		int id_uzytkownika;
	private: System::Windows::Forms::Button^ btnEDodaj;
	private: System::Windows::Forms::Button^ btnEUsun;
	private: System::Windows::Forms::Button^ btnEModyfikuj;
	private: System::Windows::Forms::GroupBox^ gpBoxgodziny;
	private: System::Windows::Forms::TextBox^ tbdopon;

	private: System::Windows::Forms::TextBox^ tbodpon;

	private: System::Windows::Forms::Label^ Poniedzia³ek;
	private: System::Windows::Forms::TextBox^ tbdoso;

	private: System::Windows::Forms::TextBox^ tbodso;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TextBox^ tbdopt;

	private: System::Windows::Forms::TextBox^ tbodpt;



	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ tbdocz;

	private: System::Windows::Forms::TextBox^ tbodcz;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ tbdosr;

	private: System::Windows::Forms::TextBox^ tbodsr;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbdowt;

	private: System::Windows::Forms::TextBox^ tbodwt;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ btn10;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;





	public:

	public:



		String^ konfiguracja = L" datasource=localhost; port=3306; username=root;password=haslo;database=gabinet";
		Program(int uzytkownik)
		{
			InitializeComponent();
			id_uzytkownika = uzytkownik;
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~Program()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ gpBoxEdycjaUzytkownika;
	public:
	private: System::Windows::Forms::CheckBox^ chboxpracownik;
	private: System::Windows::Forms::TextBox^ tbeLogin;
	private: System::Windows::Forms::TextBox^ tbeNazwisko;
	private: System::Windows::Forms::TextBox^ tbeImie;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TabControl^ tabControl1;
	public:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::DataGridView^ dgwuzytkownicy;

	private: System::Windows::Forms::Button^ btSearch;
	private: System::Windows::Forms::TextBox^ tbU¿ytkownik;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ btnChangePsswd;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbConfirmPsswd;
	private: System::Windows::Forms::TextBox^ tbNewPasswd;
	private: System::Windows::Forms::TextBox^ tbOldPsswd;
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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->gpBoxgodziny = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->btn10 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->tbdoso = (gcnew System::Windows::Forms::TextBox());
			this->tbodso = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->tbdopt = (gcnew System::Windows::Forms::TextBox());
			this->tbodpt = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbdocz = (gcnew System::Windows::Forms::TextBox());
			this->tbodcz = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->tbdosr = (gcnew System::Windows::Forms::TextBox());
			this->tbodsr = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->tbdowt = (gcnew System::Windows::Forms::TextBox());
			this->tbodwt = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tbdopon = (gcnew System::Windows::Forms::TextBox());
			this->tbodpon = (gcnew System::Windows::Forms::TextBox());
			this->Poniedzia³ek = (gcnew System::Windows::Forms::Label());
			this->btnEUsun = (gcnew System::Windows::Forms::Button());
			this->btnEModyfikuj = (gcnew System::Windows::Forms::Button());
			this->gpBoxEdycjaUzytkownika = (gcnew System::Windows::Forms::GroupBox());
			this->chboxpracownik = (gcnew System::Windows::Forms::CheckBox());
			this->tbeLogin = (gcnew System::Windows::Forms::TextBox());
			this->tbeNazwisko = (gcnew System::Windows::Forms::TextBox());
			this->tbeImie = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnEDodaj = (gcnew System::Windows::Forms::Button());
			this->dgwuzytkownicy = (gcnew System::Windows::Forms::DataGridView());
			this->btSearch = (gcnew System::Windows::Forms::Button());
			this->tbU¿ytkownik = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->btnChangePsswd = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbConfirmPsswd = (gcnew System::Windows::Forms::TextBox());
			this->tbNewPasswd = (gcnew System::Windows::Forms::TextBox());
			this->tbOldPsswd = (gcnew System::Windows::Forms::TextBox());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->gpBoxgodziny->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->gpBoxEdycjaUzytkownika->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwuzytkownicy))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Alignment = System::Windows::Forms::TabAlignment::Bottom;
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(23, 12);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(868, 549);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->gpBoxgodziny);
			this->tabPage1->Controls->Add(this->btnEUsun);
			this->tabPage1->Controls->Add(this->btnEModyfikuj);
			this->tabPage1->Controls->Add(this->gpBoxEdycjaUzytkownika);
			this->tabPage1->Controls->Add(this->btnEDodaj);
			this->tabPage1->Controls->Add(this->dgwuzytkownicy);
			this->tabPage1->Controls->Add(this->btSearch);
			this->tabPage1->Controls->Add(this->tbU¿ytkownik);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 4);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(860, 520);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"U¿ytkownicy";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Program::tabPage1_Click);
			// 
			// gpBoxgodziny
			// 
			this->gpBoxgodziny->Controls->Add(this->groupBox1);
			this->gpBoxgodziny->Controls->Add(this->tbdoso);
			this->gpBoxgodziny->Controls->Add(this->tbodso);
			this->gpBoxgodziny->Controls->Add(this->label12);
			this->gpBoxgodziny->Controls->Add(this->tbdopt);
			this->gpBoxgodziny->Controls->Add(this->tbodpt);
			this->gpBoxgodziny->Controls->Add(this->label11);
			this->gpBoxgodziny->Controls->Add(this->tbdocz);
			this->gpBoxgodziny->Controls->Add(this->tbodcz);
			this->gpBoxgodziny->Controls->Add(this->label10);
			this->gpBoxgodziny->Controls->Add(this->tbdosr);
			this->gpBoxgodziny->Controls->Add(this->tbodsr);
			this->gpBoxgodziny->Controls->Add(this->label9);
			this->gpBoxgodziny->Controls->Add(this->tbdowt);
			this->gpBoxgodziny->Controls->Add(this->tbodwt);
			this->gpBoxgodziny->Controls->Add(this->label8);
			this->gpBoxgodziny->Controls->Add(this->tbdopon);
			this->gpBoxgodziny->Controls->Add(this->tbodpon);
			this->gpBoxgodziny->Controls->Add(this->Poniedzia³ek);
			this->gpBoxgodziny->Location = System::Drawing::Point(10, 264);
			this->gpBoxgodziny->Name = L"gpBoxgodziny";
			this->gpBoxgodziny->Size = System::Drawing::Size(335, 207);
			this->gpBoxgodziny->TabIndex = 10;
			this->gpBoxgodziny->TabStop = false;
			this->gpBoxgodziny->Text = L"Godziny";
			this->gpBoxgodziny->Visible = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->btn10);
			this->groupBox1->Controls->Add(this->btn9);
			this->groupBox1->Controls->Add(this->btn8);
			this->groupBox1->Controls->Add(this->btn7);
			this->groupBox1->Location = System::Drawing::Point(256, 17);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(79, 184);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Szablon";
			// 
			// btn10
			// 
			this->btn10->Location = System::Drawing::Point(7, 113);
			this->btn10->Name = L"btn10";
			this->btn10->Size = System::Drawing::Size(62, 23);
			this->btn10->TabIndex = 3;
			this->btn10->Text = L"10-18";
			this->btn10->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(6, 84);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(63, 23);
			this->btn9->TabIndex = 2;
			this->btn9->Text = L"9-17";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(6, 53);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(63, 23);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8-16";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(7, 21);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(62, 23);
			this->btn7->TabIndex = 0;
			this->btn7->Text = L"7-15";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// tbdoso
			// 
			this->tbdoso->Location = System::Drawing::Point(179, 162);
			this->tbdoso->Name = L"tbdoso";
			this->tbdoso->Size = System::Drawing::Size(75, 22);
			this->tbdoso->TabIndex = 17;
			// 
			// tbodso
			// 
			this->tbodso->Location = System::Drawing::Point(97, 161);
			this->tbodso->Name = L"tbodso";
			this->tbodso->Size = System::Drawing::Size(76, 22);
			this->tbodso->TabIndex = 16;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(10, 162);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(53, 17);
			this->label12->TabIndex = 15;
			this->label12->Text = L"Sobota";
			// 
			// tbdopt
			// 
			this->tbdopt->Location = System::Drawing::Point(179, 134);
			this->tbdopt->Name = L"tbdopt";
			this->tbdopt->Size = System::Drawing::Size(75, 22);
			this->tbdopt->TabIndex = 14;
			// 
			// tbodpt
			// 
			this->tbodpt->Location = System::Drawing::Point(97, 133);
			this->tbodpt->Name = L"tbodpt";
			this->tbodpt->Size = System::Drawing::Size(75, 22);
			this->tbodpt->TabIndex = 13;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(10, 134);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(47, 17);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Pi¹tek";
			// 
			// tbdocz
			// 
			this->tbdocz->Location = System::Drawing::Point(179, 106);
			this->tbdocz->Name = L"tbdocz";
			this->tbdocz->Size = System::Drawing::Size(75, 22);
			this->tbdocz->TabIndex = 11;
			// 
			// tbodcz
			// 
			this->tbodcz->Location = System::Drawing::Point(97, 105);
			this->tbodcz->Name = L"tbodcz";
			this->tbodcz->Size = System::Drawing::Size(76, 22);
			this->tbodcz->TabIndex = 10;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(10, 106);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(65, 17);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Czwartek";
			// 
			// tbdosr
			// 
			this->tbdosr->Location = System::Drawing::Point(179, 78);
			this->tbdosr->Name = L"tbdosr";
			this->tbdosr->Size = System::Drawing::Size(75, 22);
			this->tbdosr->TabIndex = 8;
			// 
			// tbodsr
			// 
			this->tbodsr->Location = System::Drawing::Point(97, 77);
			this->tbodsr->Name = L"tbodsr";
			this->tbodsr->Size = System::Drawing::Size(75, 22);
			this->tbodsr->TabIndex = 7;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(10, 78);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(46, 17);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Œroda";
			// 
			// tbdowt
			// 
			this->tbdowt->Location = System::Drawing::Point(179, 49);
			this->tbdowt->Name = L"tbdowt";
			this->tbdowt->Size = System::Drawing::Size(75, 22);
			this->tbdowt->TabIndex = 5;
			// 
			// tbodwt
			// 
			this->tbodwt->Location = System::Drawing::Point(97, 49);
			this->tbodwt->Name = L"tbodwt";
			this->tbodwt->Size = System::Drawing::Size(76, 22);
			this->tbodwt->TabIndex = 4;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(10, 50);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(53, 17);
			this->label8->TabIndex = 3;
			this->label8->Text = L"Wtorek";
			// 
			// tbdopon
			// 
			this->tbdopon->Location = System::Drawing::Point(179, 22);
			this->tbdopon->Name = L"tbdopon";
			this->tbdopon->Size = System::Drawing::Size(75, 22);
			this->tbdopon->TabIndex = 2;
			// 
			// tbodpon
			// 
			this->tbodpon->Location = System::Drawing::Point(97, 21);
			this->tbodpon->Name = L"tbodpon";
			this->tbodpon->Size = System::Drawing::Size(75, 22);
			this->tbodpon->TabIndex = 1;
			// 
			// Poniedzia³ek
			// 
			this->Poniedzia³ek->AutoSize = true;
			this->Poniedzia³ek->Location = System::Drawing::Point(10, 22);
			this->Poniedzia³ek->Name = L"Poniedzia³ek";
			this->Poniedzia³ek->Size = System::Drawing::Size(88, 17);
			this->Poniedzia³ek->TabIndex = 0;
			this->Poniedzia³ek->Text = L"Poniedzia³ek";
			// 
			// btnEUsun
			// 
			this->btnEUsun->Visible = false;
			this->btnEUsun->Location = System::Drawing::Point(189, 477);
			this->btnEUsun->Name = L"btnEUsun";
			this->btnEUsun->Size = System::Drawing::Size(75, 23);
			this->btnEUsun->TabIndex = 9;
			this->btnEUsun->Text = L"Usuñ";
			this->btnEUsun->UseVisualStyleBackColor = true;
			this->btnEUsun->Click += gcnew System::EventHandler(this, &Program::btnEUsun_Click);
			// 
			// btnEModyfikuj
			// 
			this->btnEModyfikuj->Visible = false;
			this->btnEModyfikuj->Location = System::Drawing::Point(107, 477);
			this->btnEModyfikuj->Name = L"btnEModyfikuj";
			this->btnEModyfikuj->Size = System::Drawing::Size(75, 23);
			this->btnEModyfikuj->TabIndex = 8;
			this->btnEModyfikuj->Text = L"Modyfikuj";
			this->btnEModyfikuj->UseVisualStyleBackColor = true;
			this->btnEModyfikuj->Click += gcnew System::EventHandler(this, &Program::btnEModyfikuj_Click);
			// 
			// gpBoxEdycjaUzytkownika
			// 
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->chboxpracownik);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->tbeLogin);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->tbeNazwisko);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->tbeImie);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->label7);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->label6);
			this->gpBoxEdycjaUzytkownika->Controls->Add(this->label5);
			this->gpBoxEdycjaUzytkownika->Location = System::Drawing::Point(10, 52);
			this->gpBoxEdycjaUzytkownika->Name = L"gpBoxEdycjaUzytkownika";
			this->gpBoxEdycjaUzytkownika->Size = System::Drawing::Size(335, 206);
			this->gpBoxEdycjaUzytkownika->TabIndex = 4;
			this->gpBoxEdycjaUzytkownika->TabStop = false;
			this->gpBoxEdycjaUzytkownika->Text = L"Edycja danych u¿ytkownika";
			// 
			// chboxpracownik
			// 
			this->chboxpracownik->AutoSize = true;
			this->chboxpracownik->Location = System::Drawing::Point(79, 176);
			this->chboxpracownik->Name = L"chboxpracownik";
			this->chboxpracownik->Size = System::Drawing::Size(94, 21);
			this->chboxpracownik->TabIndex = 6;
			this->chboxpracownik->Text = L"Pracownik";
			this->chboxpracownik->UseVisualStyleBackColor = true;
			this->chboxpracownik->CheckedChanged += gcnew System::EventHandler(this, &Program::chboxpracownik_CheckedChanged);
			// 
			// tbeLogin
			// 
			this->tbeLogin->Location = System::Drawing::Point(78, 128);
			this->tbeLogin->Name = L"tbeLogin";
			this->tbeLogin->Size = System::Drawing::Size(100, 22);
			this->tbeLogin->TabIndex = 5;
			// 
			// tbeNazwisko
			// 
			this->tbeNazwisko->Location = System::Drawing::Point(78, 86);
			this->tbeNazwisko->Name = L"tbeNazwisko";
			this->tbeNazwisko->Size = System::Drawing::Size(100, 22);
			this->tbeNazwisko->TabIndex = 4;
			// 
			// tbeImie
			// 
			this->tbeImie->Location = System::Drawing::Point(78, 45);
			this->tbeImie->Name = L"tbeImie";
			this->tbeImie->Size = System::Drawing::Size(100, 22);
			this->tbeImie->TabIndex = 3;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(7, 128);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 17);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Login";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(67, 17);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nazwisko";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(7, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(33, 17);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Imie";
			// 
			// btnEDodaj
			// 
			this->btnEDodaj->Location = System::Drawing::Point(25, 477);
			this->btnEDodaj->Name = L"btnEDodaj";
			this->btnEDodaj->Size = System::Drawing::Size(75, 23);
			this->btnEDodaj->TabIndex = 7;
			this->btnEDodaj->Text = L"Dodaj";
			this->btnEDodaj->UseVisualStyleBackColor = true;
			this->btnEDodaj->Click += gcnew System::EventHandler(this, &Program::btnEDodaj_Click);
			// 
			// dgwuzytkownicy
			// 
			this->dgwuzytkownicy->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgwuzytkownicy->Location = System::Drawing::Point(351, 4);
			this->dgwuzytkownicy->Name = L"dgwuzytkownicy";
			this->dgwuzytkownicy->RowHeadersWidth = 51;
			this->dgwuzytkownicy->RowTemplate->Height = 24;
			this->dgwuzytkownicy->Size = System::Drawing::Size(503, 510);
			this->dgwuzytkownicy->TabIndex = 3;
			this->dgwuzytkownicy->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Program::dgwuzytkownicy_CellClick);
			// 
			// btSearch
			// 
			this->btSearch->Location = System::Drawing::Point(218, 2);
			this->btSearch->Name = L"btSearch";
			this->btSearch->Size = System::Drawing::Size(75, 23);
			this->btSearch->TabIndex = 2;
			this->btSearch->Text = L"Szukaj";
			this->btSearch->UseVisualStyleBackColor = true;
			this->btSearch->Click += gcnew System::EventHandler(this, &Program::btSearch_Click);
			// 
			// tbU¿ytkownik
			// 
			this->tbU¿ytkownik->Location = System::Drawing::Point(101, 4);
			this->tbU¿ytkownik->Name = L"tbU¿ytkownik";
			this->tbU¿ytkownik->Size = System::Drawing::Size(100, 22);
			this->tbU¿ytkownik->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(7, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(78, 17);
			this->label1->TabIndex = 0;
			this->label1->Text = L"U¿ytkownik";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->btnChangePsswd);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Controls->Add(this->label3);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->tbConfirmPsswd);
			this->tabPage2->Controls->Add(this->tbNewPasswd);
			this->tabPage2->Controls->Add(this->tbOldPsswd);
			this->tabPage2->Location = System::Drawing::Point(4, 4);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(860, 520);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Zmiana has³a";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// btnChangePsswd
			// 
			this->btnChangePsswd->Location = System::Drawing::Point(119, 146);
			this->btnChangePsswd->Name = L"btnChangePsswd";
			this->btnChangePsswd->Size = System::Drawing::Size(75, 23);
			this->btnChangePsswd->TabIndex = 6;
			this->btnChangePsswd->Text = L"Accept";
			this->btnChangePsswd->UseVisualStyleBackColor = true;
			this->btnChangePsswd->Click += gcnew System::EventHandler(this, &Program::btnChangePsswd_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 100);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(107, 17);
			this->label4->TabIndex = 5;
			this->label4->Text = L"PotwierdŸ has³o";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 59);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(81, 17);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Nowe has³o";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 17);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Stare has³o";
			// 
			// tbConfirmPsswd
			// 
			this->tbConfirmPsswd->Location = System::Drawing::Point(119, 97);
			this->tbConfirmPsswd->Name = L"tbConfirmPsswd";
			this->tbConfirmPsswd->Size = System::Drawing::Size(100, 22);
			this->tbConfirmPsswd->TabIndex = 2;
			this->tbConfirmPsswd->TextChanged += gcnew System::EventHandler(this, &Program::tbConfirmPsswd_TextChanged);
			// 
			// tbNewPasswd
			// 
			this->tbNewPasswd->Location = System::Drawing::Point(119, 56);
			this->tbNewPasswd->Name = L"tbNewPasswd";
			this->tbNewPasswd->Size = System::Drawing::Size(100, 22);
			this->tbNewPasswd->TabIndex = 1;
			this->tbNewPasswd->TextChanged += gcnew System::EventHandler(this, &Program::tbNewPasswd_TextChanged);
			// 
			// tbOldPsswd
			// 
			this->tbOldPsswd->Location = System::Drawing::Point(119, 18);
			this->tbOldPsswd->Name = L"tbOldPsswd";
			this->tbOldPsswd->Size = System::Drawing::Size(100, 22);
			this->tbOldPsswd->TabIndex = 0;
			this->tbOldPsswd->TextChanged += gcnew System::EventHandler(this, &Program::tbOldPsswd_TextChanged);
			// 
			// Program
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(903, 573);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Program";
			this->Text = L"Program";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->gpBoxgodziny->ResumeLayout(false);
			this->gpBoxgodziny->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->gpBoxEdycjaUzytkownika->ResumeLayout(false);
			this->gpBoxEdycjaUzytkownika->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgwuzytkownicy))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
		int id_rekordu; 
		int pracownik_typ;
	private: Void uzytkownik_typ() {
		if (chboxpracownik->Checked)
		{
			 pracownik_typ= 1;
		}
		else
		{
			pracownik_typ = 0;
		}
	}
		private: Void btnChangePsswdZmien() {
			if (tbOldPsswd->Text != "" && tbNewPasswd->Text != "" && tbNewPasswd->Text == tbConfirmPsswd->Text && tbNewPasswd->Text->Length > 4)
			{
				btnChangePsswd->Enabled = true;
			}
			else
			{
				btnChangePsswd->Enabled = false;
			}

		}
	private: Void pokaz_siatke() {
		MySqlConnection^ laczBaza = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie,nazwisko,uzytkownik_nazwa AS login,pracownik From uzytkownik;", laczBaza);
		try
		{
			laczBaza->Open();
			MySqlDataAdapter^ GabinetBaza = gcnew MySqlDataAdapter();
			GabinetBaza->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			GabinetBaza->Fill(tabela);

			BindingSource^ zrodloGabinet = gcnew BindingSource();
			zrodloGabinet->DataSource = tabela;

			dgwuzytkownicy->DataSource = zrodloGabinet;
			laczBaza->Close();

		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);

		}
		dgwuzytkownicy->Columns[0]->Visible = false;
	
	}
	private: Void wyczysc(Control^ zbior_kontrolek) {
		for each (Control ^ element in zbior_kontrolek->Controls)
		{	
			if(element->GetType()==TextBox::typeid)
			element->Text = "";
			//chboxpracownik->Checked = false;
		}
	}
#pragma endregion
	private: System::Void btSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		MySqlConnection^ laczBaza = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT uzytkownik_id, imie,nazwisko,uzytkownik_nazwa AS login,pracownik From uzytkownik Where CONCAT(imie,' ',nazwisko,uzytkownik_nazwa)LIKE'%" + tbU¿ytkownik->Text + "%';", laczBaza);
		try
		{
			laczBaza->Open();
			MySqlDataAdapter^ GabinetBaza = gcnew MySqlDataAdapter();
			GabinetBaza->SelectCommand = zapytanie;
			DataTable^ tabela = gcnew DataTable();
			GabinetBaza->Fill(tabela);

			BindingSource^ zrodloGabinet = gcnew BindingSource();
			zrodloGabinet->DataSource = tabela;

			dgwuzytkownicy->DataSource = zrodloGabinet;
			laczBaza->Close();

		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);

		}
		dgwuzytkownicy->Columns[0]->Visible = false;
	}
private: System::Void btnChangePsswd_Click(System::Object^ sender, System::EventArgs^ e) {
	MySqlConnection^ laczBaza = gcnew MySqlConnection(konfiguracja);
	MySqlCommand^ zapytanie = gcnew MySqlCommand("Update uzytkownik SET haslo=md5('" + tbConfirmPsswd->Text + "') WHERE uzytkownik_id=" + id_uzytkownika + " AND haslo=md5('" + tbOldPsswd->Text + "');", laczBaza);
	try
	{
		laczBaza->Open();


		if (zapytanie->ExecuteNonQuery())
		{
			MessageBox::Show("Has³o zosta³o zmienione");
		}
		else
		{
			MessageBox::Show("B³êdna nazwa uzytkonika lub niepoprawne haslo");
		}


		laczBaza->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);

	}
}
private: System::Void tbOldPsswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnChangePsswdZmien();
}
private: System::Void tbNewPasswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnChangePsswdZmien();
}
private: System::Void tbConfirmPsswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	btnChangePsswdZmien();
}
	private: System::Void dgwuzytkownicy_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if(e->RowIndex>=0)
		{
			id_rekordu = Convert::ToInt32(dgwuzytkownicy->Rows[e->RowIndex]->Cells[0]->Value);
		tbeImie->Text = dgwuzytkownicy->Rows[e->RowIndex]->Cells[1]->Value->ToString();
		tbeNazwisko->Text = dgwuzytkownicy->Rows[e->RowIndex]->Cells["nazwisko"]->Value->ToString();
		tbeLogin->Text = dgwuzytkownicy->Rows[e->RowIndex]->Cells["login"]->Value->ToString();
		chboxpracownik->Checked = Convert::ToBoolean(dgwuzytkownicy->Rows[e->RowIndex]->Cells["pracownik"]->Value);
		btnEModyfikuj->Visible = true;
		btnEUsun->Visible = true;
		if (chboxpracownik->Checked)
		{
			MySqlConnection^ laczBaza = gcnew MySqlConnection(konfiguracja);
			MySqlCommand^ zapytanie = gcnew MySqlCommand("SELECT * From godziny WHERE uzytkownik_id="+id_rekordu+" ;", laczBaza);
			MySqlDataReader^ dane;
			try
			{
				laczBaza->Open();
				dane = zapytanie->ExecuteReader();
				while (dane->Read()) {
				
					tbodpon->Text = dane->GetString("pon_od");
					tbdopon->Text = dane->GetString("pon_do");
					tbodwt->Text = dane->GetString("wt_od");
					tbdowt->Text = dane->GetString("wt_do");
					tbodsr->Text = dane->GetString("sr_od");
					tbdosr->Text = dane->GetString("sr_do");
					tbodcz->Text = dane->GetString("cz_od");
					tbdocz->Text = dane->GetString("cz_do");
					tbodpt->Text = dane->GetString("pt_od");
					tbdopt->Text = dane->GetString("pt_do");
					tbodso->Text = dane->GetString("so_od");
					tbdoso->Text = dane->GetString("so_do");

				}
				laczBaza->Close();
			}
			catch (Exception^ komunikat)
			{
				MessageBox::Show(komunikat->Message);

			}
		}
		
		}
	}
private: System::Void btnEDodaj_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbeImie->Text->Length < 3 || tbeNazwisko->Text->Length < 3 || tbeLogin->Text->Length < 6)
	{
		MessageBox::Show("Dane zosta³y wprowadzone niepoprawnie");
	}
	else
	{
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			polecenie->CommandText = "INSERT INTO uzytkownik SET imie='" + tbeImie->Text + "',nazwisko='" + tbeNazwisko->Text + "',uzytkownik_nazwa='" + tbeLogin->Text + "', haslo=md5('" + tbeLogin->Text + "'),pracownik='"+pracownik_typ+"';";
			polecenie->ExecuteNonQuery();
			if (chboxpracownik->Checked)
			{
				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id=last_insert_id(), pon_od='"+tbodpon->Text +"', pon_do='"+tbdopon->Text +"', wt_od='"+tbodwt->Text +"', wt_do='"+tbdowt->Text +"', sr_od='"+tbodsr->Text +"', sr_do='"+tbdosr->Text +"', cz_od='"+tbodcz->Text +"', cz_do='"+tbdocz->Text +"', pt_od='"+tbodpt->Text +"', pt_do='"+tbdopt->Text +"', so_od='"+tbodso->Text +"', so_do='"+tbdoso->Text+"';";
				polecenie->ExecuteNonQuery();
			}



			transakcja->Commit();
			MessageBox::Show("U¿ytkownik '"+tbeLogin->Text+"' zosta³ dodany do bazy danych");
			
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gpBoxEdycjaUzytkownika);
		wyczysc(gpBoxgodziny);
	}
}
private: System::Void btnEModyfikuj_Click(System::Object^ sender, System::EventArgs^ e) {
	if (tbeImie->Text->Length < 3 || tbeNazwisko->Text->Length < 3 || tbeLogin->Text->Length < 6)
	{
		MessageBox::Show("Dane zosta³y wprowadzone niepoprawnie");
	}
	else
	{
		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			polecenie->CommandText = "SELECT * FROM godziny WHERE uzytkownik_id=" + id_rekordu + ";";
			MySqlDataReader^ wynik = polecenie->ExecuteReader();
			wynik->Close();
			polecenie->CommandText = "UPDATE uzytkownik SET imie='" + tbeImie->Text + "',nazwisko='" + tbeNazwisko->Text + "',uzytkownik_nazwa='" + tbeLogin->Text + "',pracownik='" + pracownik_typ + "'WHERE uzytkownik_id='"+id_rekordu+"';";
			polecenie->ExecuteNonQuery();
			if (wynik->HasRows == true && chboxpracownik->Checked == true)
			{
				polecenie->CommandText = "UPDATE godziny SET pon_od='" + tbodpon->Text + "', pon_do='" + tbdopon->Text + "', wt_od='" + tbodwt->Text + "', wt_do='" + tbdowt->Text + "', sr_od='" + tbodsr->Text + "', sr_do='" + tbdosr->Text + "', cz_od='" + tbodcz->Text + "', cz_do='" + tbdocz->Text + "', pt_od='" + tbodpt->Text + "', pt_do='" + tbdopt->Text + "', so_od='" + tbodso->Text + "', so_do='" + tbdoso->Text + "' WHERE uzytkownik_id="+id_rekordu+";";
				polecenie->ExecuteNonQuery();
			}
			else if(chboxpracownik->Checked)
			{

				polecenie->CommandText = "INSERT INTO godziny SET uzytkownik_id="+id_rekordu+", pon_od='" + tbodpon->Text + "', pon_do='" + tbdopon->Text + "', wt_od='" + tbodwt->Text + "', wt_do='" + tbdowt->Text + "', sr_od='" + tbodsr->Text + "', sr_do='" + tbdosr->Text + "', cz_od='" + tbodcz->Text + "', cz_do='" + tbdocz->Text + "', pt_od='" + tbodpt->Text + "', pt_do='" + tbdopt->Text + "', so_od='" + tbodso->Text + "', so_do='" + tbdoso->Text + "';";
				polecenie->ExecuteNonQuery();
			}
			transakcja->Commit();
			MessageBox::Show("Dane u¿ytkownika '" + tbeLogin->Text + "' zosta³y pomyœlnie zmodyfikowane");

		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gpBoxEdycjaUzytkownika);
	}
}
private: System::Void btnEUsun_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id_rekordu == 1) {
		MessageBox::Show("Nie mo¿na usun¹æ Administratora");
	}
	else
	{


		uzytkownik_typ();
		MySqlConnection^ laczBaze = gcnew MySqlConnection(konfiguracja);
		MySqlCommand^ polecenie = laczBaze->CreateCommand();
		MySqlTransaction^ transakcja;
		laczBaze->Open();
		transakcja = laczBaze->BeginTransaction(IsolationLevel::ReadCommitted);
		polecenie->Connection = laczBaze;
		polecenie->Transaction = transakcja;

		try
		{
			if (MessageBox::Show("Czy na pewno chcesz usun¹æ u¿ytkownika "+tbeLogin->Text+"?","Uwaga", MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes)
			{	
				polecenie->CommandText = "DELETE FROM godziny WHERE uzytkownik_id='" + id_rekordu + "';";
				polecenie->ExecuteNonQuery();

				polecenie->CommandText = "DELETE FROM uzytkownik WHERE uzytkownik_id='" + id_rekordu + "';";
				polecenie->ExecuteNonQuery();

				
				transakcja->Commit();
				MessageBox::Show("U¿ytkownik '" + tbeLogin->Text + "' zosta³y usuniêty z bazy danych");
			}
		}
		catch (Exception^ komunikat)
		{
			MessageBox::Show(komunikat->Message);
			transakcja->Rollback();
		}
		laczBaze->Close();
		pokaz_siatke();
		wyczysc(gpBoxEdycjaUzytkownika);
		wyczysc(gpBoxgodziny);
	}
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void chboxpracownik_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (chboxpracownik->Checked)
	{
		gpBoxgodziny->Visible = true;
	}
	else
	{
		gpBoxgodziny->Visible = false;

	}
	wyczysc(gpBoxgodziny);
}
};
}
