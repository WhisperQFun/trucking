#include "Login.h"
#include "Form1.h"
#include "Database.h"

System::Void trucking::Login::log_btn_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	SQLiteDataReader ^reader1;
	if(txb_login->Text!=""&&txb_password->Text!="")
	{
		String^ Selected_Values = "*";
		String^ DB_name_2 = "USERS";
		Database ^DB = gcnew Database();
		DB->Open_DB();
		reader1 =  DB->Select_Table_DB(Selected_Values, DB_name_2);
		int i = 0;
		while (reader1->Read())
		{
			if ((reader1->GetValue(1)->ToString() == txb_password->Text)&&(reader1->GetValue(2)->ToString() == txb_login->Text) )
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
	}
	else
	{
		MessageBox::Show("Заполните поля !!!");
	}
}
