#pragma once

namespace CppCLRWinformsProjekt2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ labelFlowName;
	protected:
	private: System::Windows::Forms::TextBox^ textBoxFlowName;














	private: System::Windows::Forms::GroupBox^ groupBoxProcessFlow;

	private: System::Windows::Forms::Button^ buttonFlowSave;
	private: System::Windows::Forms::DataGridView^ dataGridViewFlows;
	private: System::Windows::Forms::Button^ buttonRowAdd;










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
			this->labelFlowName = (gcnew System::Windows::Forms::Label());
			this->textBoxFlowName = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxProcessFlow = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridViewFlows = (gcnew System::Windows::Forms::DataGridView());
			this->buttonFlowSave = (gcnew System::Windows::Forms::Button());
			this->buttonRowAdd = (gcnew System::Windows::Forms::Button());
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
			this->textBoxFlowName->Location = System::Drawing::Point(194, 25);
			this->textBoxFlowName->Name = L"textBoxFlowName";
			this->textBoxFlowName->Size = System::Drawing::Size(245, 22);
			this->textBoxFlowName->TabIndex = 1;
			// 
			// groupBoxProcessFlow
			// 
			this->groupBoxProcessFlow->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxProcessFlow->Controls->Add(this->buttonFlowSave);
			this->groupBoxProcessFlow->Controls->Add(this->buttonRowAdd);
			this->groupBoxProcessFlow->Controls->Add(this->dataGridViewFlows);
			this->groupBoxProcessFlow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxProcessFlow->Location = System::Drawing::Point(12, 73);
			this->groupBoxProcessFlow->Name = L"groupBoxProcessFlow";
			this->groupBoxProcessFlow->Size = System::Drawing::Size(1158, 468);
			this->groupBoxProcessFlow->TabIndex = 15;
			this->groupBoxProcessFlow->TabStop = false;
			this->groupBoxProcessFlow->Text = L"Process Flow";
			// 
			// dataGridViewFlows
			// 
			this->dataGridViewFlows->AllowUserToAddRows = false;
			this->dataGridViewFlows->AllowUserToDeleteRows = false;
			this->dataGridViewFlows->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridViewFlows->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewFlows->Location = System::Drawing::Point(20, 29);
			this->dataGridViewFlows->Name = L"dataGridViewFlows";
			this->dataGridViewFlows->RowHeadersVisible = false;
			this->dataGridViewFlows->RowHeadersWidth = 51;
			this->dataGridViewFlows->RowTemplate->Height = 24;
			this->dataGridViewFlows->Size = System::Drawing::Size(1126, 371);
			this->dataGridViewFlows->TabIndex = 8;
			this->dataGridViewFlows->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridViewFlows_CellClick);
			this->dataGridViewFlows->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form2::dataGridViewFlows_ValueChanged);
			// 
			// buttonFlowSave
			// 
			this->buttonFlowSave->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonFlowSave->BackColor = System::Drawing::SystemColors::Highlight;
			this->buttonFlowSave->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonFlowSave->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonFlowSave->Location = System::Drawing::Point(1066, 428);
			this->buttonFlowSave->Name = L"buttonFlowSave";
			this->buttonFlowSave->Size = System::Drawing::Size(80, 34);
			this->buttonFlowSave->TabIndex = 15;
			this->buttonFlowSave->Text = L"Save";
			this->buttonFlowSave->UseVisualStyleBackColor = false;
			this->buttonFlowSave->Click += gcnew System::EventHandler(this, &Form2::buttonFlowSave_Click);
			// 
			// buttonRowAdd
			// 
			this->buttonRowAdd->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->buttonRowAdd->BackColor = System::Drawing::SystemColors::Highlight;
			this->buttonRowAdd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonRowAdd->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonRowAdd->Location = System::Drawing::Point(925, 428);
			this->buttonRowAdd->Name = L"buttonRowAdd";
			this->buttonRowAdd->Size = System::Drawing::Size(107, 34);
			this->buttonRowAdd->TabIndex = 16;
			this->buttonRowAdd->Text = L"Add Row";
			this->buttonRowAdd->UseVisualStyleBackColor = false;
			this->buttonRowAdd->Click += gcnew System::EventHandler(this, &Form2::buttonRowAdd_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1182, 553);
			this->Controls->Add(this->groupBoxProcessFlow);
			this->Controls->Add(this->textBoxFlowName);
			this->Controls->Add(this->labelFlowName);
			this->MinimumSize = System::Drawing::Size(1200, 600);
			this->Name = L"Form2";
			this->Text = L"Process FLow";
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->groupBoxProcessFlow->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewFlows))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: System::Void Form2_Load(System::Object^ sender, System::EventArgs^ e) {
			populateDatagridFlow();
		}

		private: System::Void populateDatagridFlow() {

			DataGridViewComboBoxColumn^ colAction = gcnew DataGridViewComboBoxColumn();
			DataGridViewComboBoxColumn^ colItems = gcnew DataGridViewComboBoxColumn();
			DataGridViewTextBoxColumn^ colName = gcnew DataGridViewTextBoxColumn();
			DataGridViewTextBoxColumn^ colValue = gcnew DataGridViewTextBoxColumn();
			DataGridViewComboBoxColumn^ colFormat = gcnew DataGridViewComboBoxColumn();
			DataGridViewButtonColumn^ colAddButton = gcnew DataGridViewButtonColumn();
			DataGridViewButtonColumn^ colRemoveButton = gcnew DataGridViewButtonColumn();

			colAction->HeaderText = "Action";
			colAction->Name = "colAction";
			colAction->Items->AddRange("Update", "Trigger", "Add");
			colAction->Width = 90;

			colItems->HeaderText = "Items";
			colItems->Name = "colItems";
			//colItems->Items->AddRange("SV", "EC", "Event", "Alarm", "Delay Timer", "Wait for cmd");
			colItems->Width = 90;

			colName->HeaderText = "Name";
			colName->Name = "colName";
			colName->Width = 200;

			colValue->HeaderText = "Value";
			colValue->Name = "colValue";
			colValue->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;

			colFormat->HeaderText = "Format";
			colFormat->Name = "colFormat";
			colFormat->Items->AddRange("A", "B", "U4");
			colFormat->Width = 70;

			colAddButton->Name = "colAddButton";
			colAddButton->UseColumnTextForButtonValue = true;
			colAddButton->Text = "Add";
			colAddButton->HeaderText = "";
			colAddButton->Width = 70;
			colAddButton->DefaultCellStyle->BackColor = System::Drawing::Color::Lime;

			colRemoveButton->Name = "colRemoveButton";
			colRemoveButton->UseColumnTextForButtonValue = true;
			colRemoveButton->Text = "Remove";
			colRemoveButton->HeaderText = "";
			colRemoveButton->Width = 70;
			colRemoveButton->DefaultCellStyle->BackColor = System::Drawing::Color::Red;


			this->dataGridViewFlows->Columns->Add(colAction);
			this->dataGridViewFlows->Columns->Add(colItems);
			this->dataGridViewFlows->Columns->Add(colName);
			this->dataGridViewFlows->Columns->Add(colValue);
			this->dataGridViewFlows->Columns->Add(colFormat);
			//this->dataGridViewFlows->Columns->Add(colAddButton);
			this->dataGridViewFlows->Columns->Add(colRemoveButton);

			this->dataGridViewFlows->Rows->Add();
		}

		private: System::Void buttonRowAdd_Click(System::Object^ sender, System::EventArgs^ e) {
			this->dataGridViewFlows->Rows->Add();
		}

		private: System::Void buttonFlowSave_Click(System::Object^ sender, System::EventArgs^ e) {
		}
		private: System::Void dataGridViewFlows_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			if (e->ColumnIndex == 9) {
				Object^ actionCell = this->dataGridViewFlows->Rows[e->RowIndex]->Cells[0]->Value;
				if (actionCell != nullptr) {
					MessageBox::Show("Clicked" + actionCell->ToString(), "Error", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
				}
			}
			else if(e->ColumnIndex == 5){
				this->dataGridViewFlows->Rows->RemoveAt(e->RowIndex);
			}
		}

		private: System::Void dataGridViewFlows_ValueChanged(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
			Object^ actionCell = this->dataGridViewFlows->Rows[e->RowIndex]->Cells[0]->Value;
			if (actionCell != nullptr) {
				DataGridViewCell^ itemsCell = this->dataGridViewFlows->Rows[e->RowIndex]->Cells[0];
				DataGridViewComboBoxCell^ itemsCombobox = (DataGridViewComboBoxCell^)itemsCell;
				this->dataGridViewFlows->Rows[e->RowIndex]->Cells[1]->Value = nullptr;

				if (actionCell->ToString()->Equals("Update")) {
					itemsCombobox->Items->AddRange("SV", "EC");
				}
				else if (actionCell->ToString()->Equals("Trigger")) {
					//itemsCombobox->Items->Clear();
					itemsCombobox->Items->AddRange("SV", "EC");
				}
				else if (actionCell->ToString()->Equals("Add")) {
					//itemsCombobox->Items->Clear();
					itemsCombobox->Items->AddRange("SV", "EC");
				}
			}
		}
	
	};//stupid IDE forcing wrong indentation here
}
