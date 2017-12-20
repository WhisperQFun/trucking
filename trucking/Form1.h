#pragma once

namespace trucking {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	

	/// <summary>
	/// Сводка для Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int user_id1;
		Form1(int user_id )
		{
			this->user_id1 = user_id;
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected:
	private: System::Windows::Forms::Button^  button_load;
	private: System::Windows::Forms::Button^  button_add;
	private: System::Windows::Forms::Button^  bttn_edit;
	private: System::Windows::Forms::Button^  bttn_delete;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button_load = (gcnew System::Windows::Forms::Button());
			this->button_add = (gcnew System::Windows::Forms::Button());
			this->bttn_edit = (gcnew System::Windows::Forms::Button());
			this->bttn_delete = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->Size = System::Drawing::Size(539, 246);
			this->dataGridView1->TabIndex = 0;
			// 
			// button_load
			// 
			this->button_load->Location = System::Drawing::Point(12, 264);
			this->button_load->Name = L"button_load";
			this->button_load->Size = System::Drawing::Size(151, 26);
			this->button_load->TabIndex = 1;
			this->button_load->Text = L"Загрузка данных";
			this->button_load->UseVisualStyleBackColor = true;
			this->button_load->Click += gcnew System::EventHandler(this, &Form1::button_load_Click);
			// 
			// button_add
			// 
			this->button_add->Location = System::Drawing::Point(179, 264);
			this->button_add->Name = L"button_add";
			this->button_add->Size = System::Drawing::Size(161, 26);
			this->button_add->TabIndex = 2;
			this->button_add->Text = L"Добавление заказа";
			this->button_add->UseVisualStyleBackColor = true;
			this->button_add->Click += gcnew System::EventHandler(this, &Form1::button_add_Click);
			// 
			// bttn_edit
			// 
			this->bttn_edit->Location = System::Drawing::Point(12, 308);
			this->bttn_edit->Name = L"bttn_edit";
			this->bttn_edit->Size = System::Drawing::Size(151, 23);
			this->bttn_edit->TabIndex = 3;
			this->bttn_edit->Text = L"Изменение заказа";
			this->bttn_edit->UseVisualStyleBackColor = true;
			this->bttn_edit->Click += gcnew System::EventHandler(this, &Form1::bttn_edit_Click);
			// 
			// bttn_delete
			// 
			this->bttn_delete->Location = System::Drawing::Point(179, 308);
			this->bttn_delete->Name = L"bttn_delete";
			this->bttn_delete->Size = System::Drawing::Size(161, 23);
			this->bttn_delete->TabIndex = 4;
			this->bttn_delete->Text = L"Удаление заказа";
			this->bttn_delete->UseVisualStyleBackColor = true;
			this->bttn_delete->Click += gcnew System::EventHandler(this, &Form1::bttn_delete_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(687, 387);
			this->Controls->Add(this->bttn_delete);
			this->Controls->Add(this->bttn_edit);
			this->Controls->Add(this->button_add);
			this->Controls->Add(this->button_load);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Shown += gcnew System::EventHandler(this, &Form1::Form1_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_load_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button_add_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bttn_edit_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form1_Shown(System::Object^  sender, System::EventArgs^  e);
	private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void bttn_delete_Click(System::Object^  sender, System::EventArgs^  e);
};
}
