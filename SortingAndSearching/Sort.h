#pragma once



void quickSortAsc(array<long>^ arr, int l, int r) {
	int i = l;
	int j = r;
	int pivot = arr[(l + r) / 2];
	while (i <= j) {
		while (arr[i] < pivot) {
			i++;
		}
		while (arr[j] > pivot) {
			j--;
		}
		if (i <= j) {
			long tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if (l < r) {
		quickSortAsc(arr, l, i - 1);
		quickSortAsc(arr, i, r);
	}

}
void quickSortDec(array<long>^ arr, int l, int r) {
	int i = l;
	int j = r;
	int pivot = arr[(l + r) / 2];
	while (i <= j) {
		while (arr[i] > pivot) {
			i++;
		}
		while (arr[j] < pivot) {
			j--;
		}
		if (i <= j) {
			long tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
			i++;
			j--;
		}
	}
	if (l < r) {
		quickSortDec(arr, l, i - 1);
		quickSortDec(arr, i, r);
	}

}


namespace SortingAndSearching {

	using namespace System;
	using namespace System::IO;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Sort
	/// </summary>
	public ref class Sort : public System::Windows::Forms::Form
	{
	public:
		Sort(void) {
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Sort()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ btnPath;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ lbTime;
	private: System::Windows::Forms::Label^ lbShowTime;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::GroupBox^ grSetting;
	private: System::Windows::Forms::Button^ btnStart;
	private: System::Windows::Forms::TextBox^ tbPath;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;


	private: System::ComponentModel::IContainer^ components;
	protected:

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
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::ListViewGroup^ listViewGroup1 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			System::Windows::Forms::ListViewGroup^ listViewGroup2 = (gcnew System::Windows::Forms::ListViewGroup(L"ListViewGroup", System::Windows::Forms::HorizontalAlignment::Left));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->btnPath = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->lbTime = (gcnew System::Windows::Forms::Label());
			this->lbShowTime = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->grSetting = (gcnew System::Windows::Forms::GroupBox());
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->tbPath = (gcnew System::Windows::Forms::TextBox());
			this->grSetting->SuspendLayout();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Tăng dần", L"Giảm dần" });
			this->comboBox1->Location = System::Drawing::Point(14, 31);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(173, 27);
			this->comboBox1->TabIndex = 0;
			// 
			// btnPath
			// 
			this->btnPath->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPath->Location = System::Drawing::Point(407, 103);
			this->btnPath->Name = L"btnPath";
			this->btnPath->Size = System::Drawing::Size(217, 63);
			this->btnPath->TabIndex = 2;
			this->btnPath->Text = L"Open file";
			this->btnPath->UseVisualStyleBackColor = true;
			this->btnPath->Click += gcnew System::EventHandler(this, &Sort::btnStart_Click);
			// 
			// lbTime
			// 
			this->lbTime->AutoSize = true;
			this->lbTime->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTime->Location = System::Drawing::Point(14, 65);
			this->lbTime->Name = L"lbTime";
			this->lbTime->Size = System::Drawing::Size(48, 19);
			this->lbTime->TabIndex = 3;
			this->lbTime->Text = L"Time:";
			// 
			// lbShowTime
			// 
			this->lbShowTime->AutoSize = true;
			this->lbShowTime->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbShowTime->ForeColor = System::Drawing::Color::Red;
			this->lbShowTime->Location = System::Drawing::Point(73, 65);
			this->lbShowTime->Name = L"lbShowTime";
			this->lbShowTime->Size = System::Drawing::Size(18, 19);
			this->lbShowTime->TabIndex = 4;
			this->lbShowTime->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(228, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 19);
			this->label3->TabIndex = 5;
			this->label3->Text = L"/s";
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			listViewGroup1->Header = L"ListViewGroup";
			listViewGroup1->Name = L"listViewGroup1";
			listViewGroup2->Header = L"ListViewGroup";
			listViewGroup2->Name = L"listViewGroup2";
			this->listView1->Groups->AddRange(gcnew cli::array< System::Windows::Forms::ListViewGroup^  >(2) { listViewGroup1, listViewGroup2 });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(12, 12);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(662, 220);
			this->listView1->TabIndex = 6;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"Stt";
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Phần tử";
			this->columnHeader2->Width = 590;
			// 
			// grSetting
			// 
			this->grSetting->Controls->Add(this->btnStart);
			this->grSetting->Controls->Add(this->tbPath);
			this->grSetting->Controls->Add(this->comboBox1);
			this->grSetting->Controls->Add(this->lbTime);
			this->grSetting->Controls->Add(this->btnPath);
			this->grSetting->Controls->Add(this->label3);
			this->grSetting->Controls->Add(this->lbShowTime);
			this->grSetting->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->grSetting->Location = System::Drawing::Point(12, 238);
			this->grSetting->Name = L"grSetting";
			this->grSetting->Size = System::Drawing::Size(662, 179);
			this->grSetting->TabIndex = 7;
			this->grSetting->TabStop = false;
			this->grSetting->Text = L"Settings";
			// 
			// btnStart
			// 
			this->btnStart->Enabled = false;
			this->btnStart->Font = (gcnew System::Drawing::Font(L"Arial", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnStart->Location = System::Drawing::Point(14, 103);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(213, 63);
			this->btnStart->TabIndex = 8;
			this->btnStart->Text = L"Start";
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &Sort::btnStart_Click_1);
			// 
			// tbPath
			// 
			this->tbPath->Enabled = false;
			this->tbPath->Location = System::Drawing::Point(255, 31);
			this->tbPath->Multiline = true;
			this->tbPath->Name = L"tbPath";
			this->tbPath->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tbPath->Size = System::Drawing::Size(369, 29);
			this->tbPath->TabIndex = 6;
			this->tbPath->WordWrap = false;
			// 
			// Sort
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 425);
			this->Controls->Add(this->grSetting);
			this->Controls->Add(this->listView1);
			this->Name = L"Sort";
			this->Text = L"Sort";
			this->grSetting->ResumeLayout(false);
			this->grSetting->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion


	// Ấn vào btnStart thì sẽ trỏ đến file bất kì và đọc file
	private: System::Void btnStart_Click(System::Object^ sender, System::EventArgs^ e) {		
		// Đọc file
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "Text Files (.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->Multiselect = true;


		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			// Hiển thị địa chỉ file trong tbPath
			tbPath->Text = openFileDialog1->FileName;
			// Mở lại giao diện Setting
			btnStart->Enabled = "true";
			comboBox1->Enabled = "true";
			// Đọc file
			String^ fileName = openFileDialog1->FileName;
			StreamReader^ sr = gcnew StreamReader(fileName);
			String^ line;
	
			while ((line = sr->ReadLine()) != nullptr)
			{
				// Đọc từng dòng trong file
				array<String^>^ words = line->Split(' ');
				// Tạo mảng arr có kiểu dữ liệu số nguyên
				// ArrayList^ arr = gcnew ArrayList();
				array<long>^ arr = gcnew array<long>(words->Length);
				
				for (int i = 0; i < words->Length; i++)
				{
					// Thêm từng từ vào mảng
					arr[i] = Convert::ToInt32(words[i]);
				}

				// tạo 1 chuỗi và lưu mảng số vào chuỗi
				String^ arrString = "";
				for (int i = 0; i < arr->Length; i++)
				{
					arrString += arr[i] + " ";
				}

				// Hiển thị stt vào cột 1 và chuỗi vào cột 2
				ListViewItem^ item = gcnew ListViewItem();
				item->Text = Convert::ToString(-1);
				item->SubItems->Add(arrString);
				listView1->Items->Add(item);
				arrString = "";
				
			}
			
			sr->Close();
		
		}

	}
	private: System::Void btnStart_Click_1(System::Object^ sender, System::EventArgs^ e) {
		// Nếu sort->text = "Bubble Sort" thì sẽ sắp xếp theo thuật toán Bubble Sort
		if (this->Text == "Bubble Sort") {
			// Lấy dữ liệu từ chuỗi trong cột 2 và chuyển sang mảng số nguyên
			String^ arrString = listView1->Items[0]->SubItems[1]->Text;
			array<String^>^ words = arrString->Split(' ');
			array<long>^ arr = gcnew array<long>(words->Length);
			int n = words->Length -1;
			for (int i = 0; i < n; i++)
			{
				arr[i] = Convert::ToInt32(words[i]);
			}
			// Reset listview1 và hiển thị lại dữ liệu
			listView1->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem();
			item->Text = Convert::ToString(-1);
			item->SubItems->Add(arrString);
			listView1->Items->Add(item);
			arrString = "";
			// Sắp xếp mảng
			DateTime^ start = DateTime::Now;
			if (comboBox1->Text == "Tăng dần") {
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n - i - 1; j++) {
						if (arr[j] > arr[j + 1]) {
							long tmp = arr[j];
							arr[j] = arr[j + 1];
							arr[j + 1] = tmp;
						}
					}
					arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);

				}
			}
			else if (comboBox1->Text == "Giảm dần") {
				for (int i = 0; i < n; i++)
				{
					for (int j = 0; j < n - i - 1; j++) {
						if (arr[j] < arr[j + 1]) {
						long tmp = arr[j];
						arr[j] = arr[j+1];
						arr[j + 1] = tmp;
					}
				}
				arrString = "";
				for (int k = 0; k < n; k++)
				{
					arrString += arr[k] + " ";
				}
				ListViewItem^ item = gcnew ListViewItem();
				item->Text = Convert::ToString(i);
				item->SubItems->Add(arrString);
				listView1->Items->Add(item);
				}
			}
			// Đếm thời gian sắp xếp và hiển thị ra màn hình bằng lbShowTime
			DateTime^ end = DateTime::Now;
			// In ra màn hình thời gian sắp xếp và thời  gian là số thập phân 4 số
			// lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// In ra messageBox thời gian thập phân 4 số
			lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
		}
		else if (this->Text == "Quick Sort") {
			String^ arrString = listView1->Items[0]->SubItems[1]->Text;
			array<String^>^ words = arrString->Split(' ');
			array<long>^ arr = gcnew array<long>(words->Length);
			int n = words->Length - 1;
			for (int i = 0; i < n; i++)
			{
				arr[i] = Convert::ToInt32(words[i]);
			}
			// Reset listview1 và hiển thị lại dữ liệu
			listView1->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem();
			item->Text = Convert::ToString(-1);
			item->SubItems->Add(arrString);
			listView1->Items->Add(item);
			arrString = "";
			// Sắp xếp mảng
			DateTime^ start = DateTime::Now;
			if (comboBox1->Text == "Tăng dần") {
				quickSortAsc(arr, 0, n - 1);
				String^ arrString = "";
				for (int k = 0; k < n; k++)
				{
					arrString += arr[k] + " ";
				}
				ListViewItem^ item = gcnew ListViewItem();
				item->Text = Convert::ToString(0);
				item->SubItems->Add(arrString);
				listView1->Items->Add(item);
			}
			else if (comboBox1->Text == "Giảm dần") {
				quickSortDec(arr, 0, n - 1);
				String^ arrString = "";
				for (int k = 0; k < n; k++)
				{
					arrString += arr[k] + " ";
				}
				ListViewItem^ item = gcnew ListViewItem();
				item->Text = Convert::ToString(0);
				item->SubItems->Add(arrString);
				listView1->Items->Add(item);
			}

			// Đếm thời gian sắp xếp và hiển thị ra màn hình bằng lbShowTime
			DateTime^ end = DateTime::Now;
			// In ra màn hình thời gian sắp xếp và thời  gian là số thập phân 4 số
			// lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// In ra messageBox thời gian thập phân 4 số
			lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// Khi click lại nút Start thì listview được reset và in lại dữ liệu ban đầu

		}
		else if (this->Text == "Interchange Sort") {
			// Lấy dữ liệu từ chuỗi trong cột 2 và chuyển sang mảng số nguyên
			String^ arrString = listView1->Items[0]->SubItems[1]->Text;
			array<String^>^ words = arrString->Split(' ');
			array<long>^ arr = gcnew array<long>(words->Length);
			int n = words->Length - 1;
			for (int i = 0; i < n; i++)
			{
				arr[i] = Convert::ToInt32(words[i]);
			}
			// Reset listview1 và hiển thị lại dữ liệu
			listView1->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem();
			item->Text = Convert::ToString(-1);
			item->SubItems->Add(arrString);
			listView1->Items->Add(item);
			arrString = "";
			// Sắp xếp mảng
			DateTime^ start = DateTime::Now;
			if (comboBox1->Text == "Tăng dần") {
				for (int i = 0; i < n; i++) {
					for (int j = i + 1; j < n; j++) {
						if (arr[i] > arr[j]) {
							long tmp = arr[i];
							arr[i] = arr[j];
							arr[j] = tmp;
						}
					}
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			else if (comboBox1->Text == "Giảm dần") {
				for (int i = 0; i < n; i++) {
					for (int j = i + 1; j < n; j++) {
						if (arr[i] < arr[j]) {
							long tmp = arr[i];
							arr[i] = arr[j];
							arr[j] = tmp;
						}
					}
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			// Đếm thời gian sắp xếp và hiển thị ra màn hình bằng lbShowTime
			DateTime^ end = DateTime::Now;
			// In ra màn hình thời gian sắp xếp và thời  gian là số thập phân 4 số
			// lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// In ra messageBox thời gian thập phân 4 số
			lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// Khi click lại nút Start thì listview được reset và in lại dữ liệu ban đầu
			

			
		}
		else if (this->Text == "Selection Sort") {
			// Lấy dữ liệu từ chuỗi trong cột 2 và chuyển sang mảng số nguyên
			String^ arrString = listView1->Items[0]->SubItems[1]->Text;
			array<String^>^ words = arrString->Split(' ');
			array<long>^ arr = gcnew array<long>(words->Length);
			int n = words->Length - 1;
			for (int i = 0; i < n; i++)
			{
				arr[i] = Convert::ToInt32(words[i]);
			}
			// Reset listview1 và hiển thị lại dữ liệu
			listView1->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem();
			item->Text = Convert::ToString(-1);
			item->SubItems->Add(arrString);
			listView1->Items->Add(item);
			arrString = "";
			// Sắp xếp mảng
			DateTime^ start = DateTime::Now;
			if (comboBox1->Text == "Tăng dần") {
				for (int i = 0; i < n; i++) {
					int pos = i;
					for (int j = i + 1; j < n; j++) {
						if (arr[j] < arr[pos]) {
							pos = j;
						}
					}
					if (arr[i] > arr[pos]) {
						long temp = arr[i];
						arr[i] = arr[pos];
						arr[pos] = temp;
					}
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			else if (comboBox1->Text == "Giảm dần") {
				for (int i = 0; i < n; i++) {
					int pos = i;
					for (int j = i + 1; j < n; j++) {
						if (arr[j] > arr[pos]) {
							pos = j;
						}
					}
					if (arr[i] < arr[pos]) {
						long temp = arr[i];
						arr[i] = arr[pos];
						arr[pos] = temp;
					}
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			// Đếm thời gian sắp xếp và hiển thị ra màn hình bằng lbShowTime
			DateTime^ end = DateTime::Now;
			// In ra màn hình thời gian sắp xếp và thời  gian là số thập phân 4 số
			// lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// In ra messageBox thời gian thập phân 4 số
			lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// Khi click lại nút Start thì listview được reset và in lại dữ liệu ban đầu

		}
		else if (this->Text == "Merge Sort") {
			
		}
		else if (this->Text == "Insertion Sort") {
			String^ arrString = listView1->Items[0]->SubItems[1]->Text;
			array<String^>^ words = arrString->Split(' ');
			array<long>^ arr = gcnew array<long>(words->Length);
			int n = words->Length - 1;
			for (int i = 0; i < n; i++)
			{
				arr[i] = Convert::ToInt32(words[i]);
			}
			// Reset listview1 và hiển thị lại dữ liệu
			listView1->Items->Clear();
			ListViewItem^ item = gcnew ListViewItem();
			item->Text = Convert::ToString(-1);
			item->SubItems->Add(arrString);
			listView1->Items->Add(item);
			arrString = "";
			// Sắp xếp mảng
			DateTime^ start = DateTime::Now;
			if (comboBox1->Text == "Tăng dần") {
				for (int i = 0; i < n; i++) {
					int j = i;
					int pos = j + 1;
					int tmp = arr[pos];
					while (j >= 0 && arr[j] > tmp) {
						arr[j + 1] = arr[j];
						j--;
					}
					arr[j + 1] = tmp;
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			else if(comboBox1->Text == "Giảm dần") {
				for (int i = 0; i < n; i++) {
					int j = i;
					int pos = j + 1;
					int tmp = arr[pos];
					while (j >= 0 && arr[j] < tmp) {
						arr[j + 1] = arr[j];
						j--;
					}
					arr[j + 1] = tmp;
					String^ arrString = "";
					for (int k = 0; k < n; k++)
					{
						arrString += arr[k] + " ";
					}
					ListViewItem^ item = gcnew ListViewItem();
					item->Text = Convert::ToString(i);
					item->SubItems->Add(arrString);
					listView1->Items->Add(item);
				}
			}
			// Đếm thời gian sắp xếp và hiển thị ra màn hình bằng lbShowTime
			DateTime^ end = DateTime::Now;
			// In ra màn hình thời gian sắp xếp và thời  gian là số thập phân 4 số
			// lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// In ra messageBox thời gian thập phân 4 số
			lbShowTime->Text = Convert::ToString((end->Ticks - start->Ticks) / 10000000.0);
			// Khi click lại nút Start thì listview được reset và in lại dữ liệu ban đầu

		}

	}
};
}
