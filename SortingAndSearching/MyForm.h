#pragma once

#include "Sort.h"
#include "Search.h"
namespace SortingAndSearching {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// Sort 
	/// <summary>
	/// MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ grPath;




	protected:

	protected:

	private: System::Windows::Forms::GroupBox^ grSort;
	private: System::Windows::Forms::RadioButton^ btnQuick;


	private: System::Windows::Forms::RadioButton^ btnMerge;

	private: System::Windows::Forms::RadioButton^ btnBubble;

	private: System::Windows::Forms::RadioButton^ btnInsert;

	private: System::Windows::Forms::RadioButton^ btnSelect;

	private: System::Windows::Forms::RadioButton^ btnInterC;

	private: System::Windows::Forms::GroupBox^ grSearch;
	private: System::Windows::Forms::RadioButton^ btnBinary;


	private: System::Windows::Forms::RadioButton^ btnJump;

	private: System::Windows::Forms::RadioButton^ btnLinear;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::RadioButton^ btnSearching;

	private: System::Windows::Forms::RadioButton^ btnSort;




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
			this->grPath = (gcnew System::Windows::Forms::GroupBox());
			this->btnSearching = (gcnew System::Windows::Forms::RadioButton());
			this->btnSort = (gcnew System::Windows::Forms::RadioButton());
			this->grSort = (gcnew System::Windows::Forms::GroupBox());
			this->btnQuick = (gcnew System::Windows::Forms::RadioButton());
			this->btnMerge = (gcnew System::Windows::Forms::RadioButton());
			this->btnBubble = (gcnew System::Windows::Forms::RadioButton());
			this->btnInsert = (gcnew System::Windows::Forms::RadioButton());
			this->btnSelect = (gcnew System::Windows::Forms::RadioButton());
			this->btnInterC = (gcnew System::Windows::Forms::RadioButton());
			this->grSearch = (gcnew System::Windows::Forms::GroupBox());
			this->btnBinary = (gcnew System::Windows::Forms::RadioButton());
			this->btnJump = (gcnew System::Windows::Forms::RadioButton());
			this->btnLinear = (gcnew System::Windows::Forms::RadioButton());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->grPath->SuspendLayout();
			this->grSort->SuspendLayout();
			this->grSearch->SuspendLayout();
			this->SuspendLayout();
			// 
			// grPath
			// 
			this->grPath->Controls->Add(this->btnSearching);
			this->grPath->Controls->Add(this->btnSort);
			this->grPath->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grPath->Location = System::Drawing::Point(12, 12);
			this->grPath->Name = L"grPath";
			this->grPath->Size = System::Drawing::Size(337, 87);
			this->grPath->TabIndex = 0;
			this->grPath->TabStop = false;
			this->grPath->Text = L"Settings";
			// 
			// btnSearching
			// 
			this->btnSearching->AutoSize = true;
			this->btnSearching->Location = System::Drawing::Point(190, 37);
			this->btnSearching->Name = L"btnSearching";
			this->btnSearching->Size = System::Drawing::Size(105, 23);
			this->btnSearching->TabIndex = 1;
			this->btnSearching->Text = L"Searching";
			this->btnSearching->UseVisualStyleBackColor = true;
			this->btnSearching->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnSearching_CheckedChanged);
			// 
			// btnSort
			// 
			this->btnSort->AutoSize = true;
			this->btnSort->Location = System::Drawing::Point(30, 37);
			this->btnSort->Name = L"btnSort";
			this->btnSort->Size = System::Drawing::Size(82, 23);
			this->btnSort->TabIndex = 0;
			this->btnSort->Text = L"Sorting";
			this->btnSort->UseVisualStyleBackColor = true;
			this->btnSort->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// grSort
			// 
			this->grSort->Controls->Add(this->btnQuick);
			this->grSort->Controls->Add(this->btnMerge);
			this->grSort->Controls->Add(this->btnBubble);
			this->grSort->Controls->Add(this->btnInsert);
			this->grSort->Controls->Add(this->btnSelect);
			this->grSort->Controls->Add(this->btnInterC);
			this->grSort->Enabled = false;
			this->grSort->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grSort->Location = System::Drawing::Point(12, 135);
			this->grSort->Name = L"grSort";
			this->grSort->Size = System::Drawing::Size(545, 121);
			this->grSort->TabIndex = 1;
			this->grSort->TabStop = false;
			this->grSort->Text = L"Sorting";
			// 
			// btnQuick
			// 
			this->btnQuick->AutoSize = true;
			this->btnQuick->Location = System::Drawing::Point(383, 70);
			this->btnQuick->Name = L"btnQuick";
			this->btnQuick->Size = System::Drawing::Size(107, 23);
			this->btnQuick->TabIndex = 5;
			this->btnQuick->TabStop = true;
			this->btnQuick->Text = L"Quick Sort";
			this->btnQuick->UseVisualStyleBackColor = true;
			this->btnQuick->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnQuick_CheckedChanged);
			// 
			// btnMerge
			// 
			this->btnMerge->AutoSize = true;
			this->btnMerge->Location = System::Drawing::Point(383, 26);
			this->btnMerge->Name = L"btnMerge";
			this->btnMerge->Size = System::Drawing::Size(111, 23);
			this->btnMerge->TabIndex = 4;
			this->btnMerge->TabStop = true;
			this->btnMerge->Text = L"Merge Sort";
			this->btnMerge->UseVisualStyleBackColor = true;
			this->btnMerge->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnMerge_CheckedChanged);
			// 
			// btnBubble
			// 
			this->btnBubble->AutoSize = true;
			this->btnBubble->Location = System::Drawing::Point(201, 70);
			this->btnBubble->Name = L"btnBubble";
			this->btnBubble->Size = System::Drawing::Size(115, 23);
			this->btnBubble->TabIndex = 3;
			this->btnBubble->TabStop = true;
			this->btnBubble->Text = L"Bubble Sort";
			this->btnBubble->UseVisualStyleBackColor = true;
			this->btnBubble->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnBubble_CheckedChanged);
			// 
			// btnInsert
			// 
			this->btnInsert->AutoSize = true;
			this->btnInsert->Location = System::Drawing::Point(201, 26);
			this->btnInsert->Name = L"btnInsert";
			this->btnInsert->Size = System::Drawing::Size(128, 23);
			this->btnInsert->TabIndex = 2;
			this->btnInsert->TabStop = true;
			this->btnInsert->Text = L"Insertion Sort";
			this->btnInsert->UseVisualStyleBackColor = true;
			this->btnInsert->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnInsert_CheckedChanged);
			// 
			// btnSelect
			// 
			this->btnSelect->AutoSize = true;
			this->btnSelect->Location = System::Drawing::Point(15, 70);
			this->btnSelect->Name = L"btnSelect";
			this->btnSelect->Size = System::Drawing::Size(132, 23);
			this->btnSelect->TabIndex = 1;
			this->btnSelect->TabStop = true;
			this->btnSelect->Text = L"Selection Sort";
			this->btnSelect->UseVisualStyleBackColor = true;
			this->btnSelect->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnSelect_CheckedChanged);
			// 
			// btnInterC
			// 
			this->btnInterC->AutoSize = true;
			this->btnInterC->Location = System::Drawing::Point(15, 26);
			this->btnInterC->Name = L"btnInterC";
			this->btnInterC->Size = System::Drawing::Size(152, 23);
			this->btnInterC->TabIndex = 0;
			this->btnInterC->TabStop = true;
			this->btnInterC->Text = L"Interchange Sort";
			this->btnInterC->UseVisualStyleBackColor = true;
			this->btnInterC->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnInterC_CheckedChanged);
			// 
			// grSearch
			// 
			this->grSearch->Controls->Add(this->btnBinary);
			this->grSearch->Controls->Add(this->btnJump);
			this->grSearch->Controls->Add(this->btnLinear);
			this->grSearch->Enabled = false;
			this->grSearch->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grSearch->Location = System::Drawing::Point(12, 278);
			this->grSearch->Name = L"grSearch";
			this->grSearch->Size = System::Drawing::Size(366, 100);
			this->grSearch->TabIndex = 2;
			this->grSearch->TabStop = false;
			this->grSearch->Text = L"Searching";
			// 
			// btnBinary
			// 
			this->btnBinary->AutoSize = true;
			this->btnBinary->Location = System::Drawing::Point(201, 21);
			this->btnBinary->Name = L"btnBinary";
			this->btnBinary->Size = System::Drawing::Size(136, 23);
			this->btnBinary->TabIndex = 2;
			this->btnBinary->TabStop = true;
			this->btnBinary->Text = L"Binary Search";
			this->btnBinary->UseVisualStyleBackColor = true;
			this->btnBinary->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnBinary_CheckedChanged);
			// 
			// btnJump
			// 
			this->btnJump->AutoSize = true;
			this->btnJump->Location = System::Drawing::Point(15, 63);
			this->btnJump->Name = L"btnJump";
			this->btnJump->Size = System::Drawing::Size(128, 23);
			this->btnJump->TabIndex = 1;
			this->btnJump->TabStop = true;
			this->btnJump->Text = L"Jump Search";
			this->btnJump->UseVisualStyleBackColor = true;
			this->btnJump->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnJump_CheckedChanged);
			// 
			// btnLinear
			// 
			this->btnLinear->AutoSize = true;
			this->btnLinear->Location = System::Drawing::Point(15, 22);
			this->btnLinear->Name = L"btnLinear";
			this->btnLinear->Size = System::Drawing::Size(134, 23);
			this->btnLinear->TabIndex = 0;
			this->btnLinear->TabStop = true;
			this->btnLinear->Text = L"Linear Search";
			this->btnLinear->UseVisualStyleBackColor = true;
			this->btnLinear->CheckedChanged += gcnew System::EventHandler(this, &MyForm::btnLinear_CheckedChanged);
			// 
			// btnAdd
			// 
			this->btnAdd->Enabled = false;
			this->btnAdd->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAdd->Location = System::Drawing::Point(395, 278);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(158, 100);
			this->btnAdd->TabIndex = 3;
			this->btnAdd->Text = L"Add";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &MyForm::btnAdd_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(569, 399);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->grSearch);
			this->Controls->Add(this->grSort);
			this->Controls->Add(this->grPath);
			this->Name = L"MyForm";
			this->Text = L"Sorting and Searching";
			this->grPath->ResumeLayout(false);
			this->grPath->PerformLayout();
			this->grSort->ResumeLayout(false);
			this->grSort->PerformLayout();
			this->grSearch->ResumeLayout(false);
			this->grSearch->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	//private: System::Void btnFile_Click(System::Object^ sender, System::EventArgs^ e) {
	//	// Trỏ tới file và tbPath hiện địa chỉ file dẫn
	//	OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
	//	openFileDialog1->InitialDirectory = "C:\\";
	//	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
	//	openFileDialog1->FilterIndex = 2;
	//	openFileDialog1->RestoreDirectory = true;
	//	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	//	{
	//		tbPath->Text = openFileDialog1->FileName;
	//	}
	//	// Enable các button và grBox được true
	//	btnRandom->Enabled = true;
	//	grSort->Enabled = true;
	//	grSearch->Enabled = true;
	//	btnAdd->Enabled = true;
	//}
		   // Khi ấn vào những button Sort thì các button Search sẽ được enable
	private: System::Void btnInterC_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}
	private: System::Void btnInsert_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}
	private: System::Void btnMerge_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}
	private: System::Void btnQuick_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}
	private: System::Void btnBubble_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}
	private: System::Void btnSelect_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSearch->Enabled = false;
	}

		   // Ngược lại

	private: System::Void btnLinear_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSort->Enabled = false;
	}
	private: System::Void btnBinary_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSort->Enabled = false;
	}
	private: System::Void btnJump_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		grSort->Enabled = false;
	}
	// Khi ấn vào button Add mà grBoxSort->enabled = true thì sẽ tạo form sort
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		if (grSort->Enabled == true) {
			// Trước đó thì kiểm tra xem đã chọn loại sort nào chưa
			// Và tạo form tương ứng
			if (btnInterC->Checked == true) {
				Sort^ fInter = gcnew Sort();
				fInter->Text = "Interchange Sort";
				fInter->Show();
			}
			else if (btnInsert->Checked == true) {
				Sort^ fInsert = gcnew Sort();
				fInsert->Text = "Insertion Sort";
				fInsert->Show();
			}
			else if (btnMerge->Checked == true) {
				Sort^ fMerge = gcnew Sort();
				fMerge->Text = "Merge Sort";
				fMerge->Show();
			}
			else if (btnQuick->Checked == true) {
				Sort^ fQuick = gcnew Sort();
				fQuick->Text = "Quick Sort";
				fQuick->Show();
			}
			else if (btnBubble->Checked == true) {
				Sort^ fBubble = gcnew Sort();
				fBubble->Text = "Bubble Sort";
				fBubble->Show();
			}
			else if (btnSelect->Checked == true) {
				Sort^ fSelect = gcnew Sort();
				fSelect->Text = "Selection Sort";
				fSelect->Show();
			}
			
		}
		else {
			if (btnJump->Checked == true) {
				Search^ fJump = gcnew Search();
				fJump->Text = "Jump Search";
				fJump->Show();
			}
			else if (btnLinear->Checked == true) {
				Search^ fLinear = gcnew Search();
				fLinear->Text = "Linear Search";
				fLinear->Show();
			}
			else if (btnBinary->Checked == true) {
				Search^ fBinary = gcnew Search();
				fBinary->Text = "Binary Search";
				fBinary->Show();
			}
			
		}
	}
	
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Các checked của radiotextbox search tắt hết
		btnLinear->Checked = false;
		btnBinary->Checked = false;
		btnJump->Checked = false;

		grSort->Enabled = true;
		grSearch->Enabled = false;
		btnAdd->Enabled = true;

	}
	private: System::Void btnSearching_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		// Các checked của radiotextbox sort tắt hết
		btnInterC->Checked = false;
		btnInsert->Checked = false;
		btnMerge->Checked = false;
		btnQuick->Checked = false;
		btnBubble->Checked = false;
		btnSelect->Checked = false;


		grSearch->Enabled = true;
		grSort->Enabled = false;
		btnAdd->Enabled = true;
	}
	};
}
