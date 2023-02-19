#pragma once
#include "EditForm.h"
#include "ViewModel.h"
#include "FunctionalViewModel.h"

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace Newtonsoft::Json;

	/// <summary>
	/// Summary for ResultForm
	/// </summary>
	public ref class ResultForm : public System::Windows::Forms::Form
	{
	public:
		ResultForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			searchKey_comboBox->Items->Add("Название");
			searchKey_comboBox->Items->Add("Автор");
			searchKey_comboBox->Items->Add("Издательство");
			searchKey_comboBox->Items->Add("Раздел");
			searchKey_comboBox->Items->Add("Происхождение");
			searchKey_comboBox->Items->Add("Оценка");
			searchKey_comboBox->Items->Add("Наличие");
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ResultForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListBox^ database_listBox;
	private: System::Windows::Forms::TextBox^ searchBar_textBox;
	protected:

	protected:

	private: System::Windows::Forms::Label^ searchKey_label;
	private: System::Windows::Forms::ComboBox^ searchKey_comboBox;
	private: System::Windows::Forms::Button^ editBook_button;
	private: System::Windows::Forms::Button^ deleteBook_button;








	private: System::Windows::Forms::Button^ search_button;
	private: System::Windows::Forms::Label^ TextField;

	private: System::Windows::Forms::Label^ Title1;
	private: System::Windows::Forms::Label^ Title2;
	private: System::Windows::Forms::Label^ Line;











	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->database_listBox = (gcnew System::Windows::Forms::ListBox());
			this->searchBar_textBox = (gcnew System::Windows::Forms::TextBox());
			this->searchKey_label = (gcnew System::Windows::Forms::Label());
			this->searchKey_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->editBook_button = (gcnew System::Windows::Forms::Button());
			this->deleteBook_button = (gcnew System::Windows::Forms::Button());
			this->search_button = (gcnew System::Windows::Forms::Button());
			this->TextField = (gcnew System::Windows::Forms::Label());
			this->Title1 = (gcnew System::Windows::Forms::Label());
			this->Title2 = (gcnew System::Windows::Forms::Label());
			this->Line = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// database_listBox
			// 
			this->database_listBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->database_listBox->FormattingEnabled = true;
			this->database_listBox->HorizontalScrollbar = true;
			this->database_listBox->ItemHeight = 24;
			this->database_listBox->Location = System::Drawing::Point(12, 246);
			this->database_listBox->Name = L"database_listBox";
			this->database_listBox->Size = System::Drawing::Size(1458, 220);
			this->database_listBox->TabIndex = 0;
			this->database_listBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ResultForm::database_listBox_SelectedIndexChanged);
			// 
			// searchBar_textBox
			// 
			this->searchBar_textBox->Location = System::Drawing::Point(256, 90);
			this->searchBar_textBox->Name = L"searchBar_textBox";
			this->searchBar_textBox->Size = System::Drawing::Size(1214, 22);
			this->searchBar_textBox->TabIndex = 1;
			this->searchBar_textBox->TextChanged += gcnew System::EventHandler(this, &ResultForm::searchBar_textBox_TextChanged);
			// 
			// searchKey_label
			// 
			this->searchKey_label->AutoSize = true;
			this->searchKey_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchKey_label->Location = System::Drawing::Point(13, 59);
			this->searchKey_label->Name = L"searchKey_label";
			this->searchKey_label->Size = System::Drawing::Size(190, 23);
			this->searchKey_label->TabIndex = 2;
			this->searchKey_label->Text = L"Выберите параметр:";
			this->searchKey_label->Click += gcnew System::EventHandler(this, &ResultForm::searchKey_label_Click);
			// 
			// searchKey_comboBox
			// 
			this->searchKey_comboBox->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->searchKey_comboBox->FormattingEnabled = true;
			this->searchKey_comboBox->Location = System::Drawing::Point(256, 59);
			this->searchKey_comboBox->Name = L"searchKey_comboBox";
			this->searchKey_comboBox->Size = System::Drawing::Size(1214, 26);
			this->searchKey_comboBox->TabIndex = 3;
			this->searchKey_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &ResultForm::searchKey_comboBox_SelectedIndexChanged);
			// 
			// editBook_button
			// 
			this->editBook_button->BackColor = System::Drawing::Color::Gainsboro;
			this->editBook_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->editBook_button->Location = System::Drawing::Point(12, 469);
			this->editBook_button->Name = L"editBook_button";
			this->editBook_button->Size = System::Drawing::Size(1458, 32);
			this->editBook_button->TabIndex = 5;
			this->editBook_button->Text = L"Изменить";
			this->editBook_button->UseVisualStyleBackColor = false;
			this->editBook_button->Click += gcnew System::EventHandler(this, &ResultForm::editBook_button_Click);
			// 
			// deleteBook_button
			// 
			this->deleteBook_button->BackColor = System::Drawing::Color::Gainsboro;
			this->deleteBook_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->deleteBook_button->Location = System::Drawing::Point(12, 507);
			this->deleteBook_button->Name = L"deleteBook_button";
			this->deleteBook_button->Size = System::Drawing::Size(1458, 34);
			this->deleteBook_button->TabIndex = 6;
			this->deleteBook_button->Text = L"Удалить";
			this->deleteBook_button->UseVisualStyleBackColor = false;
			this->deleteBook_button->Click += gcnew System::EventHandler(this, &ResultForm::deleteBook_button_Click);
			// 
			// search_button
			// 
			this->search_button->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search_button->Location = System::Drawing::Point(12, 142);
			this->search_button->Name = L"search_button";
			this->search_button->Size = System::Drawing::Size(1458, 32);
			this->search_button->TabIndex = 7;
			this->search_button->Text = L"Найти";
			this->search_button->UseVisualStyleBackColor = true;
			this->search_button->Click += gcnew System::EventHandler(this, &ResultForm::search_button_Click);
			// 
			// TextField
			// 
			this->TextField->AutoSize = true;
			this->TextField->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextField->Location = System::Drawing::Point(13, 89);
			this->TextField->Name = L"TextField";
			this->TextField->Size = System::Drawing::Size(155, 23);
			this->TextField->TabIndex = 8;
			this->TextField->Text = L"Поле для ввода:";
			// 
			// Title1
			// 
			this->Title1->AutoSize = true;
			this->Title1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title1->Location = System::Drawing::Point(578, 9);
			this->Title1->Name = L"Title1";
			this->Title1->Size = System::Drawing::Size(290, 36);
			this->Title1->TabIndex = 9;
			this->Title1->Text = L"Поиск по параметрам";
			// 
			// Title2
			// 
			this->Title2->AutoSize = true;
			this->Title2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title2->Location = System::Drawing::Point(559, 207);
			this->Title2->Name = L"Title2";
			this->Title2->Size = System::Drawing::Size(338, 36);
			this->Title2->TabIndex = 10;
			this->Title2->Text = L"Книги по вашему запросу";
			// 
			// Line
			// 
			this->Line->AutoSize = true;
			this->Line->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Line->Location = System::Drawing::Point(-7, 177);
			this->Line->Name = L"Line";
			this->Line->Size = System::Drawing::Size(1494, 20);
			this->Line->TabIndex = 11;
			this->Line->Text = L"_________________________________________________________________________________"
				L"________________________________________________________________________________"
				L"____";
			this->Line->Click += gcnew System::EventHandler(this, &ResultForm::label4_Click);
			// 
			// ResultForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1482, 553);
			this->Controls->Add(this->Line);
			this->Controls->Add(this->Title2);
			this->Controls->Add(this->Title1);
			this->Controls->Add(this->TextField);
			this->Controls->Add(this->search_button);
			this->Controls->Add(this->deleteBook_button);
			this->Controls->Add(this->editBook_button);
			this->Controls->Add(this->searchKey_comboBox);
			this->Controls->Add(this->searchKey_label);
			this->Controls->Add(this->searchBar_textBox);
			this->Controls->Add(this->database_listBox);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(1500, 600);
			this->MinimumSize = System::Drawing::Size(600, 480);
			this->Name = L"ResultForm";
			this->Text = L"Книги";
			this->Load += gcnew System::EventHandler(this, &ResultForm::ResultForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	// Обработчик кнопки изменения объекта
	private: System::Void editBook_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (database_listBox->Items->Count != 0)
		{
			// получение выбранного объекта в listBox
			Book^ item = (Book^)database_listBox->SelectedItem;
			// создание и открытие формы для изменения объекта
			EditForm^ editForm = gcnew EditForm(item);
			editForm->Show();
		}
		// Если поля для изменения пустые или элемент не выбран
		else
		{
			MessageBox::Show("Список пуст или не выбран элемент");
		}
	}
// Лист для выведения информации о книгах
private: System::Void database_listBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
// Обработчик формы при её загрузке
private: System::Void ResultForm_Load(System::Object^ sender, System::EventArgs^ e) {
	// присвоение источника данных компоненту listBox (источник данных - объект bookLibrary)
	database_listBox->DataSource = ViewModel::bookLibrary->toList();
	database_listBox->Update();
}

// Обработчик кнопки удаления объекта
private: System::Void deleteBook_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (database_listBox->Items->Count != 0)
	{
		// получение выбранного объекта
		Book^ item = (Book^)database_listBox->SelectedItem;

		// удаление выбранного объекта из списка
		FunctionalViewModel::deleteEntity(item);

		// обновление компонента listBox
		database_listBox->DataSource = nullptr;
		database_listBox->DataSource = ViewModel::bookLibrary->toList();
	}
	// Если объект не выбран или список объектов пустой
	else
	{
		MessageBox::Show("Список пуст или не выбран объект");
	}
}
// кнопка поиска
private: System::Void searchKey_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
/// <summary>
///
/// </summary>
/// <param name="sender"></param>
/// <param name="e"></param>
/// <returns></returns>
private: System::Void searchKey_comboBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}

// Обработчик кнопки поиска
private: System::Void search_button_Click(System::Object^ sender, System::EventArgs^ e) {
	// если ничего не введено
	if (searchBar_textBox->Text == "")
	{
		database_listBox->DataSource = nullptr;
		database_listBox->DataSource = ViewModel::bookLibrary->toList();
	}
	// если ввели название
	if (searchKey_comboBox->SelectedItem == "Название")
	{
		database_listBox->DataSource = nullptr;
		database_listBox->DataSource = ViewModel::bookLibrary->find(searchBar_textBox->Text);
	}
	// если ввели автора, издательство, происхождение
	else if (searchKey_comboBox->SelectedItem == "Автор" 
		|| searchKey_comboBox->SelectedItem == "Издательство" 
		|| searchKey_comboBox->SelectedItem == "Происхождение")
	{
		database_listBox->DataSource = nullptr;
		database_listBox->DataSource = ViewModel::bookLibrary->find(searchBar_textBox->Text, 
			searchBar_textBox->Text, searchBar_textBox->Text, 
			(String^)searchKey_comboBox->SelectedItem);
	}
	// если ввели оценку
	else if (searchKey_comboBox->SelectedItem == "Оценка")
	{
		try
		{
			database_listBox->DataSource = nullptr;
			database_listBox->DataSource = ViewModel::bookLibrary->find(Convert::ToInt32(searchBar_textBox->Text));
		}
		// если оценка меньше 1 или больше 5
		catch (Exception^ ex)
		{
			MessageBox::Show("Указаные данные некорректны");
		}
	}

	else if (searchKey_comboBox->SelectedItem == "Раздел" || searchKey_comboBox->SelectedItem == "Наличие")
	{
		database_listBox->DataSource = nullptr;
		database_listBox->DataSource = ViewModel::bookLibrary->find(searchBar_textBox->Text, 
			searchBar_textBox->Text, (String^)searchKey_comboBox->SelectedItem);
	}
}

private: System::Void searchBar_textBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
