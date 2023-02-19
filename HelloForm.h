#pragma once
#include "MainForm.h"

namespace PersonalBookLibrary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GreetingForm
	/// </summary>
	public ref class HelloForm : public System::Windows::Forms::Form
	{
	public:
		HelloForm(void)
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
		~HelloForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ greeting_label;
	protected:



	private: System::Windows::Forms::PictureBox^ appLogo_pictureBox;
	private: System::Windows::Forms::Button^ Next;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(HelloForm::typeid));
			this->greeting_label = (gcnew System::Windows::Forms::Label());
			this->appLogo_pictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->Next = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appLogo_pictureBox))->BeginInit();
			this->SuspendLayout();
			// 
			// greeting_label
			// 
			this->greeting_label->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->greeting_label->AutoSize = true;
			this->greeting_label->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->greeting_label->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->greeting_label->Location = System::Drawing::Point(34, 33);
			this->greeting_label->Name = L"greeting_label";
			this->greeting_label->Size = System::Drawing::Size(649, 45);
			this->greeting_label->TabIndex = 1;
			this->greeting_label->Text = L"Приветствуем вас в нашей библиотеке!";
			this->greeting_label->Click += gcnew System::EventHandler(this, &HelloForm::greeting_label_Click);
			// 
			// appLogo_pictureBox
			// 
			this->appLogo_pictureBox->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->appLogo_pictureBox->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"appLogo_pictureBox.BackgroundImage")));
			this->appLogo_pictureBox->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"appLogo_pictureBox.Image")));
			this->appLogo_pictureBox->Location = System::Drawing::Point(23, 108);
			this->appLogo_pictureBox->Name = L"appLogo_pictureBox";
			this->appLogo_pictureBox->Size = System::Drawing::Size(697, 339);
			this->appLogo_pictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->appLogo_pictureBox->TabIndex = 3;
			this->appLogo_pictureBox->TabStop = false;
			this->appLogo_pictureBox->Click += gcnew System::EventHandler(this, &HelloForm::appLogo_pictureBox_Click);
			// 
			// Next
			// 
			this->Next->Font = (gcnew System::Drawing::Font(L"Arial Unicode MS", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Next->Location = System::Drawing::Point(23, 467);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(697, 40);
			this->Next->TabIndex = 4;
			this->Next->Text = L"Далее";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &HelloForm::button1_Click);
			// 
			// HelloForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(732, 519);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->appLogo_pictureBox);
			this->Controls->Add(this->greeting_label);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(750, 566);
			this->MinimizeBox = false;
			this->MinimumSize = System::Drawing::Size(500, 566);
			this->Name = L"HelloForm";
			this->Text = L"Добро пожаловать в программу!";
			this->Load += gcnew System::EventHandler(this, &HelloForm::GreetingForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->appLogo_pictureBox))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GreetingForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Form::CenterToScreen();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	
	private: System::Void greeting_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void appLogo_pictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
}
	   // событие кнопки Next (почему-то не переименовалось)
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
};
}
