#pragma once

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for HelpForm
	/// </summary>
	public ref class HelpForm : public System::Windows::Forms::Form
	{
	public:
		HelpForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~HelpForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ Info;
	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;
	private: System::Windows::Forms::Button^ Ok;

	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelpForm::typeid));
			this->Info = (gcnew System::Windows::Forms::RichTextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->Ok = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// Info
			// 
			this->Info->BackColor = System::Drawing::SystemColors::Menu;
			this->Info->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Info->Location = System::Drawing::Point(12, 12);
			this->Info->Name = L"Info";
			this->Info->Size = System::Drawing::Size(620, 260);
			this->Info->TabIndex = 0;
			this->Info->Text = resources->GetString(L"Info.Text");
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 321);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(197, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Адрес электронной почты: ";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(201, 321);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(188, 20);
			this->linkLabel1->TabIndex = 2;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"nikita.mishunin@mail.ru";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 292);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(567, 20);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Контактные данные разработчика Мишунина Никиты Александровича: ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 338);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(130, 20);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Номер телефона:";
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->linkLabel2->Location = System::Drawing::Point(201, 338);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(118, 20);
			this->linkLabel2->TabIndex = 5;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"+79525188515";
			// 
			// Ok
			// 
			this->Ok->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ok->Location = System::Drawing::Point(205, 373);
			this->Ok->Name = L"Ok";
			this->Ok->Size = System::Drawing::Size(150, 33);
			this->Ok->TabIndex = 6;
			this->Ok->Text = L"Ок";
			this->Ok->UseVisualStyleBackColor = true;
			this->Ok->Click += gcnew System::EventHandler(this, &HelpForm::Ok_Click);
			// 
			// HelpForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(662, 418);
			this->Controls->Add(this->Ok);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Info);
			this->Name = L"HelpForm";
			this->Text = L"Раздел помощи";
			this->Load += gcnew System::EventHandler(this, &HelpForm::HelpForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void helpInfo_richTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}

	// Обработчик формы при её загрузке
	private: System::Void HelpForm_Load(System::Object^ sender, System::EventArgs^ e) 
	{

	}
	private: System::Void Ok_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
};
}
