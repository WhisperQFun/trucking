#include "Login.h"
#include "Form1.h"
#include "Database.h"

System::Void trucking::Login::log_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	try 
	{
		SQLiteDataReader ^reader1;
		if (txb_login->Text != ""&&txb_password->Text != "")
		{
			String^ Selected_Values = "*";
			String^ DB_name_2 = "USERS";
			Database ^DB = gcnew Database();
			DB->Open_DB();
			reader1 = DB->Select_Table_DB(Selected_Values, DB_name_2);
			int i = 0;
			while (reader1->Read())
			{
				if ((reader1->GetValue(1)->ToString() == txb_password->Text) && (reader1->GetValue(2)->ToString() == txb_login->Text))
				{
					Form1^ f1 = gcnew Form1(Convert::ToInt32(reader1->GetValue(0)->ToString()));
					this->Visible = false;
					f1->Show();
					i = 1;
				}

			}
			if (i == 0)
			{
				MessageBox::Show("Неверный логин или пароль");
			}
			reader1->Close();
			DB->Close();
		}
		else
		{
			MessageBox::Show("Не все поля Заполнены");
		}
	}
	catch(Exception ^e)
	{
	
	}
	
	
	
	

}

System::Void trucking::Login::reg_bttn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	if((txb_password->Text !="")&&(txb_login->Text !=""))
	{
		Database ^DB = gcnew Database();
		DB->Open_DB();
		String^ Inserted_Values = "NULL, '" + txb_password->Text + "', '" + txb_login->Text + "', '" + "0" + "'";
		String^ DB_name = "USERS";
		DB->Insert_Table_DB(Inserted_Values, DB_name);
		DB->Close();
		MessageBox::Show("Успешно !!!!");
	}
	else
	{
		MessageBox::Show("Заполните поля !!!");
	}
}

System::Void trucking::Login::Login_Load(System::Object ^ sender, System::EventArgs ^ e)
{
	Database ^DB = gcnew Database();
	DB->Open_DB();
	try
	{
		String^ Colums_Name = "order_id INTEGER PRIMARY KEY, destination STRING, initial_point STRING, type_of_cargo STRING, type_of_car STRING, cost STRING, weight STRING, date STRING, user_id INTEGER, client_id INTEGER, inactive BOOLEAN";
		String^ DB_name = "TRUCKING";
		String^ Colums_Name_2 = "users_id INTEGER PRIMARY KEY, password STRING, login STRING, is_admin BOOLEAN";
		String^ DB_name_2 = "USERS";
		String^ DB_name_3 = "CLIENTS";
		String^ Colums_Name_3 = "client_id INTEGER PRIMARY KEY, owner STRING, passport_series STRING, passport_number STRING";
		DB->Create_Table_DB(DB_name, Colums_Name);
		DB->Create_Table_DB(DB_name_2, Colums_Name_2);
		DB->Create_Table_DB(DB_name_3, Colums_Name_3);
	}
	catch (Exception ^e)
	{

	}
	finally
	{
		DB->Close();
	}
}
