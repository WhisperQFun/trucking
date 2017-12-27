#include "Form2.h"
#include "Form1.h"
#include "Database.h"


using namespace System;
using namespace System::Windows::Forms;


int i;
int client_id;


System::Void trucking::Form2::button1_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Database ^DB = gcnew Database();
	DB->Open_DB();
	String^ DB_name_3 = "CLIENTS";
	String^ Inserted_Values_3 = "NULL, '" + textBox1->Text + "', '" + textBox8->Text + "', '" + textBox9->Text+"'";
	String^ DB_name = "TRUCKING";
	if (checkBox1->Checked == true)
	{
		i = 1;
	}
	else 
	{
		i = 0;
	}
	client_id = DB->Insert_Table_DB(Inserted_Values_3, DB_name_3);
	String^ Inserted_Values = "NULL, '" + textBox2->Text + "', '" + textBox3->Text + "', '" + textBox4->Text + "', '" + textBox5->Text + "', '" + textBox6->Text + "', '" + textBox7->Text + "', '" + DateTime::Now.ToString() + "', " + user2_id + ", " + client_id + ", " + i + "";
	//MessageBox::Show(Inserted_Values);
	

	
	
	DB->Insert_Table_DB(Inserted_Values, DB_name);
	
	DB->Close();
	MessageBox::Show("Sucess!!!!");
	this->Close();
}

System::Void trucking::Form2::Form2_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	
	
	if (is_update == true) 
	{
		this->button1->Enabled = false;
		int i = 0;
		Database ^DB = gcnew Database();
		DB->Open_DB();
		String^ Selected_Values = "*";
		String^ DB_name = "TRUCKING";
		SQLiteDataReader ^reader = DB->Select_Table_DB(Selected_Values, DB_name);
		
		while (reader->Read())
		{
			if(reader->GetValue(0)->ToString()==selected_row.ToString())
			{
				truck_db_id->Text = reader->GetValue(0)->ToString();
				textBox2->Text = reader->GetValue(1)->ToString();
				textBox3->Text = reader->GetValue(2)->ToString();
				textBox4->Text = reader->GetValue(3)->ToString();
				textBox5->Text = reader->GetValue(4)->ToString();
				textBox6->Text = reader->GetValue(5)->ToString();
				textBox7->Text = reader->GetValue(6)->ToString();
				clients_db_id->Text = reader->GetValue(9)->ToString();
				break;
			}
		}
		reader->Close();
		DB->Close();
		Database ^DB1 = gcnew Database();
		DB1->Open_DB();
		DB_name = "CLIENTS";
		SQLiteDataReader ^reader1 = DB1->Select_Table_DB(Selected_Values, DB_name);
		while (reader1->Read())
		{
			if (reader1->GetValue(0)->ToString() == clients_db_id->Text)
			{
				
				textBox1->Text = reader1->GetValue(1)->ToString();
				textBox8->Text = reader1->GetValue(2)->ToString();
				textBox9->Text = reader1->GetValue(3)->ToString();
				break;
			}
		}
		reader1->Close();
		DB1->Close();

	}
	else
	{
		this->button2->Enabled = false;
		this->button1->Enabled = true;
	}
	is_update = false;
}

System::Void trucking::Form2::button2_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	Database ^DB = gcnew Database();
	DB->Open_DB();
	if (checkBox1->Checked == true)
	{
		i = 1;
	}
	else
	{
		i = 0;
	}
	DB->Update_Table_DB("TRUCKING","destination='"+ textBox2->Text+"',"+"initial_point='"+ textBox3->Text +"'," + "type_of_cargo='" + textBox4->Text + "'," + "type_of_car='" + textBox5->Text + "'," + "cost='" + textBox6->Text + "'," + "weight='" + textBox7->Text + "'," + "date='" + DateTime::Now.ToString() + "'," + "user_id='" + user2_id + "'," + "client_id='" + clients_db_id->Text + "'," + "inactive='" + i,"' WHERE order_id ="+truck_db_id->Text);
	DB->Update_Table_DB("CLIENTS","owner='" + textBox1->Text + "',"+"passport_series='" + textBox8->Text + "'," + "passport_number='" + textBox9->Text ,"' WHERE client_id =" + clients_db_id->Text);
	DB->Close();

	MessageBox::Show("Sucess!!!!");
	this->Close();
}



