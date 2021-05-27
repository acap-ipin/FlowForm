#pragma once
#include <fstream>
#include <vcclr.h>
#include <iostream>
#include <chrono>
#include <thread>

namespace CppCLRWinformsProjekt3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Xml;
	using namespace OpenIntegrationOSD2GEM300_EQ_COM;


	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public: static String^ passFlowName;
	public: static bool S2F41Triggered;
	public: static String^ commandReceived;
	public:
		Form3(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ textBoxFlowName;
	private: System::Windows::Forms::GroupBox^ groupBoxProcessFlow;
	private: System::Windows::Forms::Label^ labelFlowName;
	private: System::Windows::Forms::DataGridView^ dataGridViewFlows;
	private: System::Windows::Forms::Button^ buttonClearLog;
	private: System::Windows::Forms::Button^ buttonExecuteAgain;
	private: System::Windows::Forms::Label^ labelLog;
	private: System::Windows::Forms::TextBox^ textBoxLog;
	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->labelFlowName = (gcnew System::Windows::Forms::Label());
			this->textBoxFlowName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxProcessFlow = (gcnew System::Windows::Forms::GroupBox());
			this->buttonClearLog = (gcnew System::Windows::Forms::Button());
			this->labelLog = (gcnew System::Windows::Forms::Label());
			this->textBoxLog = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewFlows = (gcnew System::Windows::Forms::DataGridView());
			this->buttonExecuteAgain = (gcnew System::Windows::Forms::Button());
			this->groupBoxProcessFlow->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFlows))->BeginInit();
			this->SuspendLayout();
			// 
			// labelFlowName
			// 
			this->labelFlowName->AutoSize = true;
			this->labelFlowName->Location = System::Drawing::Point(41, 30);
			this->labelFlowName->Name = L"labelFlowName";
			this->labelFlowName->Size = System::Drawing::Size(140, 17);
			this->labelFlowName->TabIndex = 0;
			this->labelFlowName->Text = L"Process Flow Name :";
			// 
			// textBoxFlowName
			// 
			this->textBoxFlowName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxFlowName->Location = System::Drawing::Point(195, 25);
			this->textBoxFlowName->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBoxFlowName->Name = L"textBoxFlowName";
			this->textBoxFlowName->Size = System::Drawing::Size(245, 22);
			this->textBoxFlowName->TabIndex = 1;
			// 
			// groupBoxProcessFlow
			// 
			this->groupBoxProcessFlow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxProcessFlow->Controls->Add(this->buttonClearLog);
			this->groupBoxProcessFlow->Controls->Add(this->labelLog);
			this->groupBoxProcessFlow->Controls->Add(this->textBoxLog);
			this->groupBoxProcessFlow->Controls->Add(this->dataGridViewFlows);
			this->groupBoxProcessFlow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxProcessFlow->Location = System::Drawing::Point(12, 71);
			this->groupBoxProcessFlow->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxProcessFlow->Name = L"groupBoxProcessFlow";
			this->groupBoxProcessFlow->Padding = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->groupBoxProcessFlow->Size = System::Drawing::Size(1157, 476);
			this->groupBoxProcessFlow->TabIndex = 15;
			this->groupBoxProcessFlow->TabStop = false;
			this->groupBoxProcessFlow->Text = L"Process Flow";
			// 
			// buttonClearLog
			// 
			this->buttonClearLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->buttonClearLog->Location = System::Drawing::Point(52, 434);
			this->buttonClearLog->Margin = System::Windows::Forms::Padding(4);
			this->buttonClearLog->Name = L"buttonClearLog";
			this->buttonClearLog->Size = System::Drawing::Size(29, 28);
			this->buttonClearLog->TabIndex = 11;
			this->buttonClearLog->Text = L"X";
			this->buttonClearLog->UseVisualStyleBackColor = false;
			this->buttonClearLog->Click += gcnew System::EventHandler(this, &Form3::buttonClearLog_Click);
			// 
			// labelLog
			// 
			this->labelLog->AutoSize = true;
			this->labelLog->Location = System::Drawing::Point(29, 337);
			this->labelLog->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->labelLog->Name = L"labelLog";
			this->labelLog->Size = System::Drawing::Size(55, 18);
			this->labelLog->TabIndex = 10;
			this->labelLog->Text = L"Logs :";
			// 
			// textBoxLog
			// 
			this->textBoxLog->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBoxLog->Location = System::Drawing::Point(95, 341);
			this->textBoxLog->Margin = System::Windows::Forms::Padding(4);
			this->textBoxLog->Multiline = true;
			this->textBoxLog->Name = L"textBoxLog";
			this->textBoxLog->ReadOnly = true;
			this->textBoxLog->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBoxLog->Size = System::Drawing::Size(1048, 123);
			this->textBoxLog->TabIndex = 9;
			// 
			// dataGridViewFlows
			// 
			this->dataGridViewFlows->AllowUserToAddRows = false;
			this->dataGridViewFlows->AllowUserToDeleteRows = false;
			this->dataGridViewFlows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewFlows->BackgroundColor = System::Drawing::SystemColors::ButtonFace;
			this->dataGridViewFlows->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridViewFlows->DefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridViewFlows->Location = System::Drawing::Point(20, 30);
			this->dataGridViewFlows->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridViewFlows->Name = L"dataGridViewFlows";
			this->dataGridViewFlows->ReadOnly = true;
			this->dataGridViewFlows->RowHeadersVisible = false;
			this->dataGridViewFlows->RowHeadersWidth = 51;
			this->dataGridViewFlows->RowTemplate->Height = 24;
			this->dataGridViewFlows->Size = System::Drawing::Size(1125, 292);
			this->dataGridViewFlows->TabIndex = 8;
			// 
			// buttonExecuteAgain
			// 
			this->buttonExecuteAgain->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonExecuteAgain->BackColor = System::Drawing::Color::Green;
			this->buttonExecuteAgain->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonExecuteAgain->ForeColor = System::Drawing::Color::White;
			this->buttonExecuteAgain->Location = System::Drawing::Point(1026, 30);
			this->buttonExecuteAgain->Name = L"buttonExecuteAgain";
			this->buttonExecuteAgain->Size = System::Drawing::Size(129, 42);
			this->buttonExecuteAgain->TabIndex = 16;
			this->buttonExecuteAgain->Text = L"Execute";
			this->buttonExecuteAgain->UseVisualStyleBackColor = false;
			this->buttonExecuteAgain->Click += gcnew System::EventHandler(this, &Form3::buttonExecuteAgain_Click);
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1184, 561);
			this->Controls->Add(this->buttonExecuteAgain);
			this->Controls->Add(this->groupBoxProcessFlow);
			this->Controls->Add(this->textBoxFlowName);
			this->Controls->Add(this->labelFlowName);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MinimumSize = System::Drawing::Size(1199, 598);
			this->Name = L"Form3";
			this->Text = L"Process FLow";
			this->Load += gcnew System::EventHandler(this, &Form3::Form3_Load);
			this->Shown += gcnew System::EventHandler(this, &Form3::Form3_Shown);
			this->groupBoxProcessFlow->ResumeLayout(false);
			this->groupBoxProcessFlow->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFlows))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//used in getting a clean file content string

	private: System::Void SkipBOM(std::ifstream& in)
	{
		char test[3] = { 0 };
		in.read(test, 3);
		if ((unsigned char)test[0] == 0xEF &&
			(unsigned char)test[1] == 0xBB &&
			(unsigned char)test[2] == 0xBF)
		{
			return;
		}
		in.seekg(0);
	}

	private: System::String^ GetFileContent(String^ filepath) {
		std::ifstream readstream(convertSystemStringToBasicString(filepath));
		SkipBOM(readstream);
		std::stringstream ss;
		ss << readstream.rdbuf();
		String^ ans = gcnew String(ss.str().c_str());
		readstream.close();
		return ans;
	}

	private: System::Void logWriteln(String^ str) {
		// getting timestamp of local machine
		time_t     now = time(0);
		struct tm  tstruct;
		char       buf[80];
		localtime_s(&tstruct, &now);
		strftime(buf, sizeof(buf), " %Y-%m-%d.%X", &tstruct);
		String^ time_string = gcnew String((char*)buf);

		if (!String::IsNullOrEmpty(this->textBoxLog->Text)) {
			time_string = "\r\n" + time_string;
		}
		str = time_string + ": " + str;
		this->textBoxLog->AppendText(str);
	}
	private: System::Void buttonClearLog_Click(System::Object^ sender, System::EventArgs^ e) {
		this->textBoxLog->Text = "";
	}

	private: System::Void Form3_Load(System::Object^ sender, System::EventArgs^ e) {
		populateDatagridFlow();
	}

	private: System::Void Form3_Shown(System::Object^ sender, System::EventArgs^ e) {
		executeProcessFlow();
	}


	private: System::Void populateDatagridFlow() {

		DataGridViewTextBoxColumn^ colAction = gcnew DataGridViewTextBoxColumn();
		DataGridViewTextBoxColumn^ colItems = gcnew DataGridViewTextBoxColumn();
		DataGridViewTextBoxColumn^ colName = gcnew DataGridViewTextBoxColumn();
		DataGridViewTextBoxColumn^ colValue = gcnew DataGridViewTextBoxColumn();
		DataGridViewTextBoxColumn^ colStatus = gcnew DataGridViewTextBoxColumn();

		colAction->HeaderText = "Action";
		colAction->Name = "colAction";
		colAction->Width = 90;

		colItems->HeaderText = "Items";
		colItems->Name = "colItems";
		colItems->Width = 90;

		colName->HeaderText = "Name";
		colName->Name = "colName";
		colName->Width = 250;

		colValue->HeaderText = "Value";
		colValue->Name = "colValue";
		colValue->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;

		colStatus->Name = "colStatusButton";
		colStatus->HeaderText = "Status";
		colStatus->Width = 140;
		colStatus->DefaultCellStyle->BackColor = System::Drawing::Color::Cyan;
		colStatus->DefaultCellStyle->ForeColor = System::Drawing::Color::Black;
		colStatus->DefaultCellStyle->Alignment = DataGridViewContentAlignment::MiddleCenter;
		colStatus->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
			static_cast<System::Byte>(0)));

		this->dataGridViewFlows->Columns->Add(colAction);
		this->dataGridViewFlows->Columns->Add(colItems);
		this->dataGridViewFlows->Columns->Add(colName);
		this->dataGridViewFlows->Columns->Add(colValue);
		this->dataGridViewFlows->Columns->Add(colStatus);

		if (passFlowName != "") {
			this->textBoxFlowName->Text = passFlowName->Substring(0, passFlowName->Length - 4);
			this->textBoxFlowName->ReadOnly = true;
			XmlDocument^ xmlDoc = gcnew XmlDocument();
			try {
				String^ filepath = "LocalData/Flows/" + passFlowName;
				String^ xmlFileContent = GetFileContent(filepath);
				xmlDoc->LoadXml(xmlFileContent);
				XmlNodeList^ flowNodes = xmlDoc->GetElementsByTagName("Flow");

				for (int i = 0; i < flowNodes->Count; i++) {
					this->dataGridViewFlows->Rows->Add();

					DataGridViewCell^ actionCell = this->dataGridViewFlows->Rows[i]->Cells[0];
					DataGridViewTextBoxCell^ itemsCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[1];
					DataGridViewTextBoxCell^ nameCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[2];
					DataGridViewTextBoxCell^ valueCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[3];
					DataGridViewTextBoxCell^ statusCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[4];

					actionCell->Value = flowNodes[i]->Attributes["Action"]->Value->ToString();
					itemsCell->Value = flowNodes[i]->Attributes["Item"]->Value->ToString();
					nameCell->Value = flowNodes[i]->Attributes["Name"]->Value->ToString();
					valueCell->Value = flowNodes[i]->Attributes["Value"]->Value->ToString();
					statusCell->Value = "Queued";

					if (itemsCell->Value->ToString()->Equals("SV")) {

					}
					else if (itemsCell->Value->ToString()->Equals("EC")) {

					}
					else if (itemsCell->Value->ToString()->Equals("Event")) {
						valueCell->Style->BackColor = System::Drawing::Color::Gray;
					}
					else if (itemsCell->Value->ToString()->Equals("Alarm")) {
						valueCell->Style->BackColor = System::Drawing::Color::Gray;
					}
					else if (itemsCell->Value->ToString()->Equals("Delay timer")) {
						nameCell->Style->BackColor = System::Drawing::Color::Gray;

					}
					else if (itemsCell->Value->ToString()->Equals("Await cmd")) {
						//nameCell->Style->BackColor = System::Drawing::Color::White;
						valueCell->Style->BackColor = System::Drawing::Color::Gray;
					}
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show(ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
			}
		}
		//else passflowname == ""
	}

	private: System::Void executeProcessFlow() {
		//todoacap use thread here

		this->buttonExecuteAgain->Enabled = false;
		this->buttonExecuteAgain->BackColor = System::Drawing::Color::Gray;
		this->buttonExecuteAgain->Text = "Executing ...";

		//update the UI
		System::Windows::Forms::Application::DoEvents();

		gcroot<Integration^> SECSGEMModule = gcnew Integration();
		String^ filepath = "LocalData/Flows/" + passFlowName;
		String^ xmlContent = GetFileContent(filepath);
		XmlDocument^ xmlDoc = gcnew XmlDocument();
		try {
			xmlDoc->LoadXml(xmlContent);
			XmlNodeList^ flowNodes = xmlDoc->GetElementsByTagName("Flow");
			String^ actionStr = "";
			String^ itemStr = "";
			String^ nameStr = "";
			String^ valueStr = "";
			String^ formatStr = "";
			bool success = true;

			logWriteln("Executing process flow from " + passFlowName);

			for (int i = 0; i < flowNodes->Count; i++) {
				success = true;
				DataGridViewTextBoxCell^ statusCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[4];
				statusCell->Style->BackColor = System::Drawing::Color::Yellow;
				statusCell->Style->ForeColor = System::Drawing::Color::Black;
				statusCell->Value = "Executing";
				//update the UI
				System::Windows::Forms::Application::DoEvents();

				actionStr = flowNodes[i]->Attributes["Action"]->Value->ToString();
				itemStr = flowNodes[i]->Attributes["Item"]->Value->ToString();
				nameStr = flowNodes[i]->Attributes["Name"]->Value->ToString();
				valueStr = flowNodes[i]->Attributes["Value"]->Value->ToString();
				formatStr = flowNodes[i]->Attributes["Format"]->Value->ToString();

				if (itemStr->Equals("SV")) {

					if (formatStr == "List") {
						std::ofstream file;
						file.open("Templates/written.xml");
						file << convertSystemStringToBasicString(valueStr);
						file.close();
						/*	if (SECSGEMModule->UpdateStatusVariableXML(nameStr, GetFileContent("Templates/written.xml"))) {
								logWriteln("Updated SVID " + valueStr);
							}
							else {
								logWriteln("ERROR: update failed");
							}*/
					}
					else {
						String^ svidXml = GetFileContent("Templates/svSingle.xml");
						svidXml = svidXml->Replace("#SVVALUE#", valueStr);
						svidXml = svidXml->Replace("#FORMAT#", formatStr);
						/*if (SECSGEMModule->UpdateStatusVariableXML(nameStr, svidXml)) {
							logWriteln("Updated SVID " + valueStr);
						}
						else {
							logWriteln("ERROR: update failed while updating SVID");
						}*/
					}
				}
				else if (itemStr->Equals("EC")) {
					//SECSGEMModule->UpdateEquipmentConstant(nameStr, valueStr);
					logWriteln("Update ECID : " + nameStr + " to " + valueStr);
				}
				else if (itemStr->Equals("Event")) {
					//SECSGEMModule->SendCollectionEvent(nameStr);
					logWriteln("Event Triggered: " + nameStr);
				}
				else if (itemStr->Equals("Alarm")) {
					bool isSet = true;
					//SECSGEMModule->SendAlarmReport(nameStr, isSet);
					logWriteln("Trigger  Alarm: " + nameStr);
				}
				else if (itemStr->Equals("Delay timer")) {
					statusCell->Style->BackColor = System::Drawing::Color::Orange;
					statusCell->Style->ForeColor = System::Drawing::Color::White;
					statusCell->Value = "Delaying...";
					logWriteln("Delaying for : " + valueStr + "ms");
					//update the UI
					System::Windows::Forms::Application::DoEvents();
					int ms = Int32::Parse(valueStr);
					std::this_thread::sleep_for(std::chrono::milliseconds(ms));
				}
				else if (itemStr->Equals("Await cmd")) {
					statusCell->Style->BackColor = System::Drawing::Color::Orange;
					statusCell->Style->ForeColor = System::Drawing::Color::White;
					statusCell->Value = "Waiting";
					logWriteln("Waiting for command : " + valueStr);
					S2F41Triggered = false;
					commandReceived = "";
					while (true) {
						std::this_thread::sleep_for(std::chrono::milliseconds(1000));
						if (S2F41Triggered) {
							if (commandReceived->Equals(valueStr)) {
								logWriteln("Command received : " + valueStr);
								break;
							}
						}
					}
				}

				if (success) {
					statusCell->Style->BackColor = System::Drawing::Color::Green;
					statusCell->Style->ForeColor = System::Drawing::Color::White;
					statusCell->Value = "Success";
					//update the UI
					System::Windows::Forms::Application::DoEvents();
				}
				std::this_thread::sleep_for(std::chrono::milliseconds(100));
			}
		}
		catch (Exception^ ex) {
			logWriteln("Error : " + ex->Message);
		}
		this->buttonExecuteAgain->Enabled = true;
		this->buttonExecuteAgain->BackColor = System::Drawing::Color::Green;
		this->buttonExecuteAgain->Text = "Execute";
		logWriteln("Execution done");
		//update the UI
		System::Windows::Forms::Application::DoEvents();
	}

	private: std::string convertSystemStringToBasicString(String^ str) {
		pin_ptr<const wchar_t> wch = PtrToStringChars(str);
		std::wstring wstr(wch);
		std::string mainStr(wstr.begin(), wstr.end());
		return mainStr;
	}

	private: System::Void buttonExecuteAgain_Click(System::Object^ sender, System::EventArgs^ e) {
		int rows = this->dataGridViewFlows->Rows->Count;
		for (int i = 0; i < rows; i++) {
			DataGridViewTextBoxCell^ statusCell = (DataGridViewTextBoxCell^)this->dataGridViewFlows->Rows[i]->Cells[4];
			statusCell->Style->BackColor = System::Drawing::Color::Cyan;
			statusCell->Style->ForeColor = System::Drawing::Color::Black;
			statusCell->Value = "Queued";
		}
		executeProcessFlow();
	}
	};//stupid IDE forcing wrong indentation here
}
