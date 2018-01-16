#include "Form1.h"
#include "Database.h"
#include "Form2.h"
#include "Login.h"
#include "Data_Main.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;

[STAThread]
void Main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	trucking::Login form;
	Application::Run(%form);
}

System::Void trucking::Form1::button_load_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	using namespace System::Collections::Generic;
	List<Data_truck^>^ Data1 = gcnew List<Data_truck^>;
	String^ Selected_Values = "*";
	int i = 0;
	Database ^DB = gcnew Database();
	DB->Open_DB();
	String^ DB_name = "TRUCKING";
	SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, DB_name);
	
	DataTable^ Table = gcnew DataTable();
	dataGridView1->DataSource = Table;

	/*-for (int colCtr = 0; colCtr < reader->FieldCount; ++colCtr)
	{
		Table->Columns->Add(reader->GetName(colCtr));
	}*/
	Table->Columns->Add("№");
	Table->Columns->Add("Пункт назначения");
	Table->Columns->Add("Исходная точка");
	Table->Columns->Add("Тип груза");
	Table->Columns->Add("Тип машины");
	Table->Columns->Add("Стоимость");
	Table->Columns->Add("Вес");
	Table->Columns->Add("Дата");
	Table->Columns->Add("Номер пользователя");
	Table->Columns->Add("Номер клиента");
	Table->Columns->Add("Заказ действителен ?");
	array<String^>^ strarray = gcnew array<String^>(reader->FieldCount);
	while (reader->Read())
	{
		try {
			Data1->Insert(i, gcnew Data_truck());
			Data1[i]->order_id = reader->GetValue(0)->ToString();
			Data1[i]->destination = reader->GetValue(1)->ToString();
			Data1[i]->initial_point = reader->GetValue(2)->ToString();
			Data1[i]->type_of_cargo = reader->GetValue(3)->ToString();
			Data1[i]->type_of_car = reader->GetValue(4)->ToString();
			Data1[i]->cost = reader->GetValue(5)->ToString();
			Data1[i]->weight = reader->GetValue(6)->ToString();
			Data1[i]->date = reader->GetValue(7)->ToString();
			Data1[i]->user_id = reader->GetValue(8)->ToString();
			Data1[i]->client_id = reader->GetValue(9)->ToString();
			Data1[i]->inactive = reader->GetValue(10)->ToString();

			i++;
		}
		catch (Exception ^e)
		{
			MessageBox::Show(e->ToString());
		}
		
	}
	try {
		for (int colCtr = 0; colCtr < Data1->Count; ++colCtr)
		{
			strarray[0] = Data1[colCtr]->order_id;
			strarray[1] = Data1[colCtr]->destination;
			strarray[2] = Data1[colCtr]->initial_point;
			strarray[3] = Data1[colCtr]->type_of_cargo;
			strarray[4] = Data1[colCtr]->type_of_car;
			strarray[5] = Data1[colCtr]->cost;
			strarray[6] = Data1[colCtr]->weight;
			strarray[7] = Data1[colCtr]->date;
			strarray[8] = Data1[colCtr]->user_id;
			strarray[9] = Data1[colCtr]->client_id;
			strarray[10] = Data1[colCtr]->inactive;
			Table->Rows->Add(strarray);
		}
	}
	catch (Exception ^e)
	{
		MessageBox::Show(e->ToString());
	}
		
		

		
	reader->Close();
	DB->Close();
	
}

System::Void trucking::Form1::button_add_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Form2^ Frm2 = gcnew Form2(user_id1);
	Frm2->ShowDialog();
	this->button_load->PerformClick();
}

System::Void trucking::Form1::bttn_edit_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	try {
		Form2^ Frm_edit = gcnew Form2(true, this->dataGridView1->SelectedCells[0]->RowIndex + 1,user_id1);

		Frm_edit->Show();
			
		
		
	}
	catch(Exception ^e)
	{

	}
	
	


}

System::Void trucking::Form1::Form1_Shown(System::Object ^ sender, System::EventArgs ^ e)
{
		
}

System::Void trucking::Form1::Form1_FormClosing(System::Object ^ sender, System::Windows::Forms::FormClosingEventArgs ^ e)
{
	Application::Exit();
}

System::Void trucking::Form1::bttn_delete_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	String^ DB_name = "TRUCKING";
	String^ DB_name_3 = "CLIENTS";
	Database ^DB = gcnew Database();
	DB->Open_DB();
	DB->Delete_row_db(DB_name_3,"client_id="+ (this->dataGridView1->SelectedCells[0]->Value));
	DB->Delete_row_db(DB_name, "order_id=" + (this->dataGridView1->SelectedCells[0]->Value));
	DB->Close();
}

System::Void trucking::Form1::report_bbtn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	try {
		using namespace System::IO;
		StreamWriter^ writer = gcnew StreamWriter(Application::StartupPath + "\\rep.txt");
		writer->WriteLine("Отчет по заказу под номером:" + this->dataGridView1->SelectedCells[0]->Value);
		writer->WriteLine("Пункт назначения:" + this->dataGridView1->SelectedCells[1]->Value);
		writer->WriteLine("Исходная точка:" + this->dataGridView1->SelectedCells[2]->Value);
		writer->WriteLine("Тип груза:" + this->dataGridView1->SelectedCells[3]->Value);
		writer->WriteLine("Тип машины:" + this->dataGridView1->SelectedCells[4]->Value);
		writer->WriteLine("Стоимость:" + this->dataGridView1->SelectedCells[5]->Value);
		writer->WriteLine("Вес:" + this->dataGridView1->SelectedCells[6]->Value);
		writer->WriteLine("Дата:" + this->dataGridView1->SelectedCells[7]->Value);
		writer->WriteLine("Номер пользователя:" + this->dataGridView1->SelectedCells[8]->Value);
		writer->WriteLine("Номер клиента:" + this->dataGridView1->SelectedCells[9]->Value);
		writer->WriteLine("Заказ действителен ?:" + this->dataGridView1->SelectedCells[10]->Value);
		writer->Close();
		MessageBox::Show("Успешно");


	}
	catch (Exception ^e)
	{
		
	}
}
