#include "pch.h"

using namespace System;

//int main(array<System::String ^> ^args)
//{
//    return 0;
//}

#include "FlowForm.h"

using namespace System::Windows::Forms;

[STAThread]
int main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew CppCLRWinformsProjekt2::Form2()); 
	return 0;
}