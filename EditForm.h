#pragma once
#include "ViewModel.h"
#include "FunctionalViewModel.h"

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace Newtonsoft::Json;
	using namespace System::IO;

	// Класс формы EditForm
	public ref class EditForm : public System::Windows::Forms::Form
	{
	public:
		Book^ selectedItem;
		// В форму передается объект класса Book для изменения выбранного объекта
		EditForm(Book^ item) 
		{
			InitializeComponent();
			selectedItem = item;
		}

	protected:
		// очещение компонентов
		~EditForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ bookName_label;
	private: System::Windows::Forms::Label^ authorName_label;
	protected:
	protected:
	protected:
	private: System::Windows::Forms::TextBox^ bookName_textBox;
	private: System::Windows::Forms::TextBox^ authorName_textBox;
	private: System::Windows::Forms::Label^ publisher_label;
	private: System::Windows::Forms::TextBox^ publisher_textBox;
	private: System::Windows::Forms::Label^ libSection_label;
	private: System::Windows::Forms::TextBox^ libSection_textBox;
	private: System::Windows::Forms::Label^ origin_label;
	private: System::Windows::Forms::TextBox^ origin_textBox;
	private: System::Windows::Forms::Label^ assessment_label;
	private: System::Windows::Forms::Button^ saveInDb_button;
	private: System::Windows::Forms::RadioButton^ existance_radioButton1;
	private: System::Windows::Forms::RadioButton^ existance_radioButton2;
	private: System::Windows::Forms::GroupBox^ bookExistance_groupBox;
	private: System::Windows::Forms::TextBox^ rating_textBox;
	private: System::Windows::Forms::Label^ Title;
	private:
	//Переменные для конструктора
		System::ComponentModel::Container ^components;
#pragma region Windows Form Designer generated code
	// НЕ МЕНЯТЬ!!! 
	// Переменные для конструктора
		void InitializeComponent(void)
		{
			this->bookName_label = (gcnew System::Windows::Forms::Label());
			this->authorName_label = (gcnew System::Windows::Forms::Label());
			this->bookName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->authorName_textBox = (gcnew System::Windows::Forms::TextBox());
			this->publisher_label = (gcnew System::Windows::Forms::Label());
			this->publisher_textBox = (gcnew System::Windows::Forms::TextBox());
			this->libSection_label = (gcnew System::Windows::Forms::Label());
			this->libSection_textBox = (gcnew System::Windows::Forms::TextBox());
			this->origin_label = (gcnew System::Windows::Forms::Label());
			this->origin_textBox = (gcnew System::Windows::Forms::TextBox());
			this->assessment_label = (gcnew System::Windows::Forms::Label());
			this->saveInDb_button = (gcnew System::Windows::Forms::Button());
			this->existance_radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->existance_radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->bookExistance_groupBox = (gcnew System::Windows::Forms::GroupBox());
			this->rating_textBox = (gcnew System::Windows::Forms::TextBox());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->bookExistance_groupBox->SuspendLayout();
			this->SuspendLayout();

		// bookName_label
		
			this->bookName_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookName_label->AutoSize = true;
			this->bookName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bookName_label->Location = System::Drawing::Point(13, 112);
			this->bookName_label->Name = L"bookName_label";
			this->bookName_label->Size = System::Drawing::Size(159, 28);
			this->bookName_label->TabIndex = 0;
			this->bookName_label->Text = L"Название книги";
			this->bookName_label->Click += gcnew System::EventHandler(this, &EditForm::bookName_label_Click);
		
		// authorName_label
	
			this->authorName_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->authorName_label->AutoSize = true;
			this->authorName_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->authorName_label->Location = System::Drawing::Point(13, 158);
			this->authorName_label->Name = L"authorName_label";
			this->authorName_label->Size = System::Drawing::Size(68, 28);
			this->authorName_label->TabIndex = 1;
			this->authorName_label->Text = L"Автор";
		
		// bookName_textBox
		 
			this->bookName_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->bookName_textBox->Location = System::Drawing::Point(178, 118);
			this->bookName_textBox->Name = L"bookName_textBox";
			this->bookName_textBox->Size = System::Drawing::Size(231, 22);
			this->bookName_textBox->TabIndex = 7;
		
		// authorName_textBox
		
			this->authorName_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->authorName_textBox->Location = System::Drawing::Point(178, 165);
			this->authorName_textBox->Name = L"authorName_textBox";
			this->authorName_textBox->Size = System::Drawing::Size(231, 22);
			this->authorName_textBox->TabIndex = 8;
		
		// publisher_label
		
			this->publisher_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->publisher_label->AutoSize = true;
			this->publisher_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->publisher_label->Location = System::Drawing::Point(13, 203);
			this->publisher_label->Name = L"publisher_label";
			this->publisher_label->Size = System::Drawing::Size(136, 28);
			this->publisher_label->TabIndex = 9;
			this->publisher_label->Text = L"Издательство";
		
		// publisher_textBox
		
			this->publisher_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->publisher_textBox->Location = System::Drawing::Point(178, 210);
			this->publisher_textBox->Name = L"publisher_textBox";
			this->publisher_textBox->Size = System::Drawing::Size(231, 22);
			this->publisher_textBox->TabIndex = 10;
			// 
			// libSection_label
			// 
			this->libSection_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->libSection_label->AutoSize = true;
			this->libSection_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->libSection_label->Location = System::Drawing::Point(13, 245);
			this->libSection_label->Name = L"libSection_label";
			this->libSection_label->Size = System::Drawing::Size(63, 28);
			this->libSection_label->TabIndex = 11;
			this->libSection_label->Text = L"Жанр";
			// 
			// libSection_textBox
			// 
			this->libSection_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->libSection_textBox->Location = System::Drawing::Point(178, 251);
			this->libSection_textBox->Name = L"libSection_textBox";
			this->libSection_textBox->Size = System::Drawing::Size(231, 22);
			this->libSection_textBox->TabIndex = 12;
			// 
			// origin_label
			// 
			this->origin_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->origin_label->AutoSize = true;
			this->origin_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->origin_label->Location = System::Drawing::Point(13, 284);
			this->origin_label->Name = L"origin_label";
			this->origin_label->Size = System::Drawing::Size(162, 28);
			this->origin_label->TabIndex = 13;
			this->origin_label->Text = L"Происхождение";
			// 
			// origin_textBox
			// 
			this->origin_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->origin_textBox->Location = System::Drawing::Point(178, 291);
			this->origin_textBox->Name = L"origin_textBox";
			this->origin_textBox->Size = System::Drawing::Size(231, 22);
			this->origin_textBox->TabIndex = 14;
			// 
			// assessment_label
			// 
			this->assessment_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->assessment_label->AutoSize = true;
			this->assessment_label->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->assessment_label->Location = System::Drawing::Point(13, 326);
			this->assessment_label->Name = L"assessment_label";
			this->assessment_label->Size = System::Drawing::Size(144, 28);
			this->assessment_label->TabIndex = 15;
			this->assessment_label->Text = L"Рейтинг книги";
			// 
			// saveInDb_button
			// 
			this->saveInDb_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->saveInDb_button->BackColor = System::Drawing::Color::Gainsboro;
			this->saveInDb_button->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->saveInDb_button->Location = System::Drawing::Point(12, 465);
			this->saveInDb_button->Name = L"saveInDb_button";
			this->saveInDb_button->Size = System::Drawing::Size(396, 36);
			this->saveInDb_button->TabIndex = 17;
			this->saveInDb_button->Text = L"Сохранить";
			this->saveInDb_button->UseVisualStyleBackColor = false;
			this->saveInDb_button->Click += gcnew System::EventHandler(this, &EditForm::saveInDb_button_Click);
			// 
			// existance_radioButton1
			// 
			this->existance_radioButton1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->existance_radioButton1->AutoSize = true;
			this->existance_radioButton1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->existance_radioButton1->Location = System::Drawing::Point(6, 21);
			this->existance_radioButton1->Name = L"existance_radioButton1";
			this->existance_radioButton1->Size = System::Drawing::Size(135, 24);
			this->existance_radioButton1->TabIndex = 19;
			this->existance_radioButton1->TabStop = true;
			this->existance_radioButton1->Text = L"Есть в наличии";
			this->existance_radioButton1->UseVisualStyleBackColor = true;
			// 
			// existance_radioButton2
			// 
			this->existance_radioButton2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->existance_radioButton2->AutoSize = true;
			this->existance_radioButton2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->existance_radioButton2->Location = System::Drawing::Point(5, 51);
			this->existance_radioButton2->Name = L"existance_radioButton2";
			this->existance_radioButton2->Size = System::Drawing::Size(131, 24);
			this->existance_radioButton2->TabIndex = 20;
			this->existance_radioButton2->TabStop = true;
			this->existance_radioButton2->Text = L"Нет в наличии";
			this->existance_radioButton2->UseVisualStyleBackColor = true;
			// 
			// bookExistance_groupBox
			// 
			this->bookExistance_groupBox->Controls->Add(this->existance_radioButton1);
			this->bookExistance_groupBox->Controls->Add(this->existance_radioButton2);
			this->bookExistance_groupBox->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->bookExistance_groupBox->Location = System::Drawing::Point(12, 377);
			this->bookExistance_groupBox->Name = L"bookExistance_groupBox";
			this->bookExistance_groupBox->Size = System::Drawing::Size(396, 82);
			this->bookExistance_groupBox->TabIndex = 22;
			this->bookExistance_groupBox->TabStop = false;
			this->bookExistance_groupBox->Text = L"Наличие";
			// 
			// rating_textBox
			// 
			this->rating_textBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->rating_textBox->Location = System::Drawing::Point(178, 333);
			this->rating_textBox->Name = L"rating_textBox";
			this->rating_textBox->Size = System::Drawing::Size(231, 22);
			this->rating_textBox->TabIndex = 23;
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title->Location = System::Drawing::Point(87, 23);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(263, 31);
			this->Title->TabIndex = 24;
			this->Title->Text = L"ИЗМЕНИТЬ КНИГУ";
			// 
			// EditForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(432, 513);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->rating_textBox);
			this->Controls->Add(this->bookExistance_groupBox);
			this->Controls->Add(this->saveInDb_button);
			this->Controls->Add(this->assessment_label);
			this->Controls->Add(this->origin_textBox);
			this->Controls->Add(this->origin_label);
			this->Controls->Add(this->libSection_textBox);
			this->Controls->Add(this->libSection_label);
			this->Controls->Add(this->publisher_textBox);
			this->Controls->Add(this->publisher_label);
			this->Controls->Add(this->authorName_textBox);
			this->Controls->Add(this->bookName_textBox);
			this->Controls->Add(this->authorName_label);
			this->Controls->Add(this->bookName_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(710, 710);
			this->MinimumSize = System::Drawing::Size(450, 560);
			this->Name = L"EditForm";
			this->Text = L"Изменение книги";
			this->Load += gcnew System::EventHandler(this, &EditForm::EditForm_Load);
			this->bookExistance_groupBox->ResumeLayout(false);
			this->bookExistance_groupBox->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EditForm_Load(System::Object^ sender, System::EventArgs^ e) {
		bookExistance_groupBox->Controls->Add(existance_radioButton1);
		bookExistance_groupBox->Controls->Add(existance_radioButton2);

		bookName_textBox->Text = selectedItem->name;
		authorName_textBox->Text = selectedItem->author;
		publisher_textBox->Text = selectedItem->publisher;
		libSection_textBox->Text = selectedItem->libSection;
		origin_textBox->Text = selectedItem->origin;
		rating_textBox->Text = Convert::ToString(selectedItem->rating);
		
		if (selectedItem->exists == true)
		{
			existance_radioButton1->Checked = true;
		}
		else if (selectedItem->exists == false)
		{
			existance_radioButton2->Checked = true;
		}
	}

// Обработчик кнопки для сохранения изменений в БД
private: System::Void saveInDb_button_Click(System::Object^ sender, System::EventArgs^ e) {
	// получение выбранного в listBox (ResultForm.h) объекта
	Book^ selectedBook = ViewModel::bookLibrary->toList()[ViewModel::bookLibrary->toList()->IndexOf(selectedItem)];
	try
	{
		// присваивание переменным значений из текстовых полей
		String^ bookName = bookName_textBox->Text;
		String^ authorName = authorName_textBox->Text;
		String^ publisherName = publisher_textBox->Text;
		String^ librarySection = libSection_textBox->Text;
		String^ bookOrigin = origin_textBox->Text;
		int bookRating = Convert::ToInt32(rating_textBox->Text);
		bool bookExistance;

		// присваивание маркеру о наличии/отсутствии значения в зависимости от выбранного компонента RadioButton
		if (existance_radioButton1->Checked)
		{
			bookExistance = true;
		}
		else if (existance_radioButton2->Checked)
		{
			bookExistance = false;
		}

		// валидация
		if (String::IsNullOrWhiteSpace(bookName)
			|| String::IsNullOrWhiteSpace(authorName)
			|| String::IsNullOrWhiteSpace(publisherName)
			|| String::IsNullOrWhiteSpace(librarySection)
			|| String::IsNullOrWhiteSpace(bookOrigin)
			|| bookRating < 1
			|| bookRating > 5)
		{
			MessageBox::Show("Введены неполные данные о книге или неверно задан рейтинг книги");
		}
		else
		{
			// изменение значений свойств выбранного объекта
			FunctionalViewModel::updateEntity(selectedBook, bookName, 
				authorName, publisherName, 
				librarySection, bookOrigin, 
				bookRating, bookExistance);

			this->Close();
		}
	}
	// сообщение, если данные заполнены некорректно или не полностью
	catch (Exception^ ex)
	{
		MessageBox::Show("Указаны некорректные данные");
	}
}
private: System::Void bookName_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
