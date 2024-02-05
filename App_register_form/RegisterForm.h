#pragma once
#include "User.h"

namespace Appregisterform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Description résumée de RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
			this->CenterToScreen();
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ tbName;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ tbPhone;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbAddress;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ tbConfirm;
	private: System::Windows::Forms::Button^ btnOK;
	private: System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::LinkLabel^ llLogin;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tbName = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tbPhone = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbAddress = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tbConfirm = (gcnew System::Windows::Forms::TextBox());
			this->btnOK = (gcnew System::Windows::Forms::Button());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->llLogin = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(12, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(871, 65);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Register";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(12, 108);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 35);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Name";
			// 
			// tbName
			// 
			this->tbName->Location = System::Drawing::Point(263, 105);
			this->tbName->Name = L"tbName";
			this->tbName->Size = System::Drawing::Size(562, 38);
			this->tbName->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(12, 154);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 35);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Email";
			// 
			// tbEmail
			// 
			this->tbEmail->Location = System::Drawing::Point(263, 151);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(562, 38);
			this->tbEmail->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(12, 198);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(104, 35);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Phone";
			// 
			// tbPhone
			// 
			this->tbPhone->Location = System::Drawing::Point(263, 195);
			this->tbPhone->Name = L"tbPhone";
			this->tbPhone->Size = System::Drawing::Size(562, 38);
			this->tbPhone->TabIndex = 2;
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(12, 242);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 35);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Address";
			// 
			// tbAddress
			// 
			this->tbAddress->Location = System::Drawing::Point(263, 239);
			this->tbAddress->Name = L"tbAddress";
			this->tbAddress->Size = System::Drawing::Size(562, 38);
			this->tbAddress->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 286);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(139, 35);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Password";
			// 
			// tbPassword
			// 
			this->tbPassword->Location = System::Drawing::Point(263, 283);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(562, 38);
			this->tbPassword->TabIndex = 2;
			// 
			// label7
			// 
			this->label7->Location = System::Drawing::Point(12, 330);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(245, 35);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Confirm Password";
			// 
			// tbConfirm
			// 
			this->tbConfirm->Location = System::Drawing::Point(263, 327);
			this->tbConfirm->Name = L"tbConfirm";
			this->tbConfirm->PasswordChar = '*';
			this->tbConfirm->Size = System::Drawing::Size(562, 38);
			this->tbConfirm->TabIndex = 2;
			// 
			// btnOK
			// 
			this->btnOK->Location = System::Drawing::Point(263, 402);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(265, 41);
			this->btnOK->TabIndex = 3;
			this->btnOK->Text = L"OK";
			this->btnOK->UseVisualStyleBackColor = true;
			this->btnOK->Click += gcnew System::EventHandler(this, &RegisterForm::btnOK_Click);
			// 
			// btnCancel
			// 
			this->btnCancel->Location = System::Drawing::Point(534, 402);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(291, 41);
			this->btnCancel->TabIndex = 3;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = true;
			this->btnCancel->Click += gcnew System::EventHandler(this, &RegisterForm::btnCancel_Click);
			// 
			// llLogin
			// 
			this->llLogin->AutoSize = true;
			this->llLogin->Location = System::Drawing::Point(730, 446);
			this->llLogin->Name = L"llLogin";
			this->llLogin->Size = System::Drawing::Size(85, 32);
			this->llLogin->TabIndex = 4;
			this->llLogin->TabStop = true;
			this->llLogin->Text = L"Login";
			this->llLogin->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &RegisterForm::llLogin_LinkClicked);
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(16, 31);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->ClientSize = System::Drawing::Size(895, 495);
			this->Controls->Add(this->llLogin);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->tbConfirm);
			this->Controls->Add(this->tbPassword);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->tbAddress);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->tbPhone);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->tbEmail);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->tbName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(6);
			this->Name = L"RegisterForm";
			this->Text = L"Register Form";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	public: bool switchToLogin = false;
private: System::Void llLogin_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	this->switchToLogin = true;
	this->Close();
}
	public: User^ user = nullptr;
private: System::Void btnOK_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = this->tbName->Text;
	String^ email = this->tbEmail->Text;
	String^ phone = this->tbPhone->Text;
	String^ address = this->tbAddress->Text;
	String^ password = this->tbPassword->Text;
	String^ confirmPassword = this->tbConfirm->Text;

	if (name->Length == 0 || email->Length == 0 || phone->Length == 0 || address->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
		MessageBox::Show("Please enter all fields", "One or more empty fields", MessageBoxButtons::OK);
		return;
	}

	if (String::Compare(password, confirmPassword) != 0) {
		MessageBox::Show("Password and confirm Password do not match", "Password error", MessageBoxButtons::OK);
		return;
	}

	try {
		String^ connstring = "Data Source=localhost\\sqlexpress;Initial Catalog=my_db;Integrated Security=True;";
		SqlConnection sqlConn(connstring);
		sqlConn.Open();

		String^ sqlQuery = "INSERT INTO users"+" (name, email, phone, address, password) VALUES "+"(@name, @email, @phone, @address, @pwd);";
		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@email", email);
		command.Parameters->AddWithValue("@pwd", password);
		command.Parameters->AddWithValue("@name", name);
		command.Parameters->AddWithValue("@address", address);
		command.Parameters->AddWithValue("@phone", phone);

		SqlDataReader^ reader = command.ExecuteReader();

		user = gcnew User;
		user->id = reader->GetInt32(0);
		user->name = name;
		user->email = email;
		user->phone = phone;
		user->address = address;
		user->password = password;

		this->Close();
	}
	catch (Exception^ e) {
		MessageBox::Show("Failed to register new user", "Register Failure", MessageBoxButtons::OK);
	}
}
};
}
