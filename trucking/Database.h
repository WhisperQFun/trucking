#pragma once

using namespace System::Data::SQLite;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Text;
namespace trucking
{
	public ref class Database
	{

	public:
		SQLiteConnection ^db = gcnew SQLiteConnection();
		
		

		void  Close()
		{
			db->Close();
			delete (IDisposable^)db;
			
		};

		void Open_DB()
		{
			try
			{						
				db->ConnectionString = "Data Source=TRUCKING.db";
				db->Open();
			}
			catch (Exception ^e)
			{
				
			}
		};
		void Create_Table_DB(String^ Table_name, String^ Table_Colums_Name)
		{
			try
			{
				SQLiteCommand ^cmdCreateTable = db->CreateCommand();
				cmdCreateTable->CommandText = ("CREATE TABLE " + Table_name + " (" + Table_Colums_Name + ");");
				cmdCreateTable->ExecuteNonQuery();
			}
			catch (Exception ^e)
			{
				
			}
		};
		SQLiteDataReader^ Select_Table_DB(String^ Table_Selected_Values, String^ Table_Selected_Name)
		{
			
			try
			{
				
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT " + Table_Selected_Values + " FROM " + Table_Selected_Name + ";";
				SQLiteDataReader ^reader = cmdSelect->ExecuteReader();
				
				return reader;


			}
			catch (Exception ^e)
			{
				
			}
		};
		SQLiteDataReader^ Select_Table_DB(String^ Table_Selected_Values, String^ Table_Selected_Name,String^ selected_row_id)
		{

			try
			{

				SQLiteCommand ^cmdSelect1 = db->CreateCommand();
				
				cmdSelect1->CommandText = "SELECT " + Table_Selected_Values + " FROM " + Table_Selected_Name + "WHERE " + selected_row_id + ";";
				//MessageBox::Show("SELECT " + Table_Selected_Values + " FROM " + Table_Selected_Name + " WHERE " + selected_row_id + ";");
				SQLiteDataReader ^reader1 = cmdSelect1->ExecuteReader();



				return reader1;


			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
		};
		int Insert_Table_DB(String^ Table_Inserted_Values, String^ Table_Selected_Name)
		{
			try
			{
				
				
				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "INSERT INTO " + Table_Selected_Name + " VALUES(" + Table_Inserted_Values + ");";
				cmdInsertValue->ExecuteNonQuery();
				SQLiteCommand ^cmdSelect = db->CreateCommand();
				cmdSelect->CommandText = "SELECT last_insert_rowid() as id;";
				return safe_cast<Int64>(cmdSelect->ExecuteScalar());
				
				

				
			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
		};
		void Update_Table_DB(String^ Table_Update_Name, String^ Table_Update_Values, String^ upd_id)
		{
			try
			{
				
				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "UPDATE " + Table_Update_Name + " SET " + Table_Update_Values + upd_id+";";
				cmdInsertValue->ExecuteNonQuery();
				
				
			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
		};
		void Delete_row_db(String^ Table_Name, String^ delete_id)
		{
			try
			{

				SQLiteCommand ^cmdInsertValue = db->CreateCommand();
				cmdInsertValue->CommandText = "DELETE FROM " + Table_Name + " WHERE " + delete_id + ";";
				//MessageBox::Show("DELETE FROM " + Table_Name + " WHERE " + delete_id + ";");
				cmdInsertValue->ExecuteNonQuery();


			}
			catch (Exception ^e)
			{
				MessageBox::Show(e->ToString());
			}
		};
		
	private:

	};


}