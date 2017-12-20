#pragma once

namespace trucking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::TextBox^  txb_login;
	private: System::Windows::Forms::TextBox^  txb_password;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  log_btn;
	private: System::Windows::Forms::Button^  reg_bttn;



	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txb_login = (gcnew System::Windows::Forms::TextBox());
			this->txb_password = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->log_btn = (gcnew System::Windows::Forms::Button());
			this->reg_bttn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(63, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ћогин";
			// 
			// txb_login
			// 
			this->txb_login->Location = System::Drawing::Point(31, 48);
			this->txb_login->Name = L"txb_login";
			this->txb_login->Size = System::Drawing::Size(100, 20);
			this->txb_login->TabIndex = 1;
			// 
			// txb_password
			// 
			this->txb_password->Location = System::Drawing::Point(31, 87);
			this->txb_password->Name = L"txb_password";
			this->txb_password->Size = System::Drawing::Size(100, 20);
			this->txb_password->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(56, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"ѕароль";
			// 
			// log_btn
			// 
			this->log_btn->Location = System::Drawing::Point(12, 113);
			this->log_btn->Name = L"log_btn";
			this->log_btn->Size = System::Drawing::Size(75, 23);
			this->log_btn->TabIndex = 4;
			this->log_btn->Text = L"¬ход";
			this->log_btn->UseVisualStyleBackColor = true;
			this->log_btn->Click += gcnew System::EventHandler(this, &Login::log_btn_Click);
			// 
			// reg_bttn
			// 
			this->reg_bttn->Location = System::Drawing::Point(93, 113);
			this->reg_bttn->Name = L"reg_bttn";
			this->reg_bttn->Size = System::Drawing::Size(75, 23);
			this->reg_bttn->TabIndex = 5;
			this->reg_bttn->Text = L"–егистраци€";
			this->reg_bttn->UseVisualStyleBackColor = true;
			this->reg_bttn->Click += gcnew System::EventHandler(this, &Login::reg_bttn_Click);
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(191, 192);
			this->Controls->Add(this->reg_bttn);
			this->Controls->Add(this->log_btn);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txb_password);
			this->Controls->Add(this->txb_login);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->Text = L"¬ход";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void log_btn_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void reg_bttn_Click(System::Object^  sender, System::EventArgs^  e);
};
}
