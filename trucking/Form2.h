#pragma once

namespace trucking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		int user2_id;
		Form2(int user_id)
		{
			this->user2_id = user_id;
			InitializeComponent();
			
			//
			//TODO: добавьте код конструктора
			//
		}
		static bool is_update;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  truck_db_id;
	private: System::Windows::Forms::Label^  clients_db_id;
	public:
		static int selected_row;
		Form2(bool is_upd,int select_row, int usr_id)
		{
			InitializeComponent();
			this->is_update = is_upd;
			this->selected_row = select_row;
			this->user2_id = usr_id;
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::TextBox^  textBox9;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->truck_db_id = (gcnew System::Windows::Forms::Label());
			this->clients_db_id = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 8);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(99, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Пункт назначения";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 24);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 51);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Исходный пункт";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(13, 67);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(186, 20);
			this->textBox3->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(13, 90);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(57, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Тип груза";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(12, 106);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(187, 20);
			this->textBox4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(13, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Тип машины";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(12, 145);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(187, 20);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(13, 168);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Стоимость";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(13, 184);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(186, 20);
			this->textBox6->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(13, 207);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Вес";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(12, 223);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(187, 20);
			this->textBox7->TabIndex = 13;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(13, 249);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(101, 17);
			this->checkBox1->TabIndex = 15;
			this->checkBox1->Text = L"Заказ активен";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 23);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Сохранить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(241, 8);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Заказчик";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(244, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(151, 20);
			this->textBox1->TabIndex = 18;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(241, 51);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(88, 13);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Серия паспорта";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(244, 67);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(151, 20);
			this->textBox8->TabIndex = 20;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(241, 90);
			this->label9->Name = L"label9";
			this->label9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->label9->Size = System::Drawing::Size(91, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"Номер паспорта";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(244, 105);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(151, 20);
			this->textBox9->TabIndex = 22;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(221, 287);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(174, 23);
			this->button2->TabIndex = 23;
			this->button2->Text = L"Обновить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// truck_db_id
			// 
			this->truck_db_id->AutoSize = true;
			this->truck_db_id->Location = System::Drawing::Point(288, 148);
			this->truck_db_id->Name = L"truck_db_id";
			this->truck_db_id->Size = System::Drawing::Size(41, 13);
			this->truck_db_id->TabIndex = 24;
			this->truck_db_id->Text = L"label10";
			this->truck_db_id->Visible = false;
			// 
			// clients_db_id
			// 
			this->clients_db_id->AutoSize = true;
			this->clients_db_id->Location = System::Drawing::Point(288, 184);
			this->clients_db_id->Name = L"clients_db_id";
			this->clients_db_id->Size = System::Drawing::Size(41, 13);
			this->clients_db_id->TabIndex = 25;
			this->clients_db_id->Text = L"label11";
			this->clients_db_id->Visible = false;
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(579, 420);
			this->Controls->Add(this->clients_db_id);
			this->Controls->Add(this->truck_db_id);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Name = L"Form2";
			this->Text = L"Form2";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e);
};
}
