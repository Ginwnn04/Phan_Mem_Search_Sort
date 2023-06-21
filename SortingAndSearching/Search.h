#pragma once

namespace SortingAndSearching {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
	public:
		Search(void)
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
		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::GroupBox^ grSettings;
	protected:

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ lbShowTime;
	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Label^ lbResult;
	private: System::Windows::Forms::TextBox^ textBox1;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->grSettings = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->lbShowTime = (gcnew System::Windows::Forms::Label());
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbResult = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->grSettings->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(248, 26);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 28);
			this->button1->TabIndex = 0;
			this->button1->Tag = L"";
			this->button1->Text = L"Tìm";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// grSettings
			// 
			this->grSettings->Controls->Add(this->label4);
			this->grSettings->Controls->Add(this->lbShowTime);
			this->grSettings->Controls->Add(this->lbTime);
			this->grSettings->Controls->Add(this->lbResult);
			this->grSettings->Controls->Add(this->textBox1);
			this->grSettings->Controls->Add(this->button1);
			this->grSettings->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grSettings->Location = System::Drawing::Point(12, 12);
			this->grSettings->Name = L"grSettings";
			this->grSettings->Size = System::Drawing::Size(343, 174);
			this->grSettings->TabIndex = 1;
			this->grSettings->TabStop = false;
			this->grSettings->Text = L"Settings";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(226, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 19);
			this->label4->TabIndex = 4;
			this->label4->Text = L"/s";
			// 
			// lbShowTime
			// 
			this->lbShowTime->AutoSize = true;
			this->lbShowTime->ForeColor = System::Drawing::Color::Red;
			this->lbShowTime->Location = System::Drawing::Point(117, 121);
			this->lbShowTime->Name = L"lbShowTime";
			this->lbShowTime->Size = System::Drawing::Size(18, 19);
			this->lbShowTime->TabIndex = 3;
			this->lbShowTime->Text = L"0";
			// 
			// lbTime
			// 
			this->lbTime->AutoSize = true;
			this->lbTime->Location = System::Drawing::Point(31, 121);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(53, 19);
			this->lbTime->TabIndex = 2;
			this->lbTime->Text = L"Time: ";
			// 
			// lbResult
			// 
			this->lbResult->AutoSize = true;
			this->lbResult->Location = System::Drawing::Point(31, 80);
			this->lbResult->Name = L"lbResult";
			this->lbResult->Size = System::Drawing::Size(37, 19);
			this->lbResult->TabIndex = 1;
			this->lbResult->Text = L"Hihi";
			this->lbResult->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->AccessibleDescription = L"";
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->textBox1->Location = System::Drawing::Point(31, 26);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(200, 28);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Nhập số cần tìm";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Search::textBox1_TextChanged);
			// 
			// Search
			// 
			this->AcceptButton = this->button1;
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(367, 203);
			this->Controls->Add(this->grSettings);
			this->Name = L"Search";
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			this->grSettings->ResumeLayout(false);
			this->grSettings->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
};
}
