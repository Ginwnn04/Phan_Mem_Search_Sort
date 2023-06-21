#include "Search.h"
#include "Sort.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	SortingAndSearching::Sort form;
	Application::Run(% form);
}