#pragma once
#include "Calci.h"
#include "AboutForm.h"

namespace Calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	private:
		Calci calc;
		char op = 'e';
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ TooltipAbout;

	private: System::Windows::Forms::ToolStripStatusLabel^ toolStripStatusLabel1;
		   

	public:
		CalculatorForm(void)
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
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	protected:
	private: System::Windows::Forms::Button^ button_Plus;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button_Equal;
	private: System::Windows::Forms::Button^ button_Reset;
	private: System::Windows::Forms::Button^ button_Divide;
	private: System::Windows::Forms::Button^ button_Minus;
	private: System::Windows::Forms::Button^ button_Multiply;

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
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->button_Divide = (gcnew System::Windows::Forms::Button());
			this->button_Plus = (gcnew System::Windows::Forms::Button());
			this->button_Minus = (gcnew System::Windows::Forms::Button());
			this->button_Multiply = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button_Equal = (gcnew System::Windows::Forms::Button());
			this->button_Reset = (gcnew System::Windows::Forms::Button());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->TooltipAbout = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->tableLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel1->SuspendLayout();
			this->flowLayoutPanel2->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				50)));
			this->tableLayoutPanel1->Controls->Add(this->button_Divide, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->button_Plus, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_Minus, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->button_Multiply, 0, 1);
			this->tableLayoutPanel1->Location = System::Drawing::Point(12, 191);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 2;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(169, 149);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// button_Divide
			// 
			this->button_Divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 32, System::Drawing::FontStyle::Bold));
			this->button_Divide->Location = System::Drawing::Point(87, 77);
			this->button_Divide->Name = L"button_Divide";
			this->button_Divide->Size = System::Drawing::Size(78, 68);
			this->button_Divide->TabIndex = 3;
			this->button_Divide->Text = L"/";
			this->button_Divide->UseVisualStyleBackColor = true;
			this->button_Divide->Click += gcnew System::EventHandler(this, &CalculatorForm::button_Divide_Click);
			// 
			// button_Plus
			// 
			this->button_Plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->button_Plus->Location = System::Drawing::Point(3, 3);
			this->button_Plus->Name = L"button_Plus";
			this->button_Plus->Size = System::Drawing::Size(78, 68);
			this->button_Plus->TabIndex = 0;
			this->button_Plus->Text = L"+";
			this->button_Plus->UseVisualStyleBackColor = true;
			this->button_Plus->Click += gcnew System::EventHandler(this, &CalculatorForm::button_Plus_Click);
			// 
			// button_Minus
			// 
			this->button_Minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->button_Minus->Location = System::Drawing::Point(87, 3);
			this->button_Minus->Name = L"button_Minus";
			this->button_Minus->Size = System::Drawing::Size(78, 68);
			this->button_Minus->TabIndex = 1;
			this->button_Minus->Text = L"-";
			this->button_Minus->UseVisualStyleBackColor = true;
			this->button_Minus->Click += gcnew System::EventHandler(this, &CalculatorForm::button_Minus_Click);
			// 
			// button_Multiply
			// 
			this->button_Multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 40));
			this->button_Multiply->Location = System::Drawing::Point(3, 77);
			this->button_Multiply->Name = L"button_Multiply";
			this->button_Multiply->Size = System::Drawing::Size(78, 68);
			this->button_Multiply->TabIndex = 2;
			this->button_Multiply->Text = L"x";
			this->button_Multiply->UseVisualStyleBackColor = true;
			this->button_Multiply->Click += gcnew System::EventHandler(this, &CalculatorForm::button_Multiply_Click);
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->Controls->Add(this->textBox1);
			this->flowLayoutPanel1->Controls->Add(this->label1);
			this->flowLayoutPanel1->Controls->Add(this->textBox2);
			this->flowLayoutPanel1->Location = System::Drawing::Point(13, 13);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(168, 172);
			this->flowLayoutPanel1->TabIndex = 1;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(3, 10);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox1->Size = System::Drawing::Size(165, 40);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(3, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 51);
			this->label1->TabIndex = 1;
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 121);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 10, 3, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox2->Size = System::Drawing::Size(165, 40);
			this->textBox2->TabIndex = 1;
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Controls->Add(this->textBox3);
			this->flowLayoutPanel2->Controls->Add(this->button_Equal);
			this->flowLayoutPanel2->Controls->Add(this->button_Reset);
			this->flowLayoutPanel2->Location = System::Drawing::Point(187, 13);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(194, 327);
			this->flowLayoutPanel2->TabIndex = 2;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(3, 3);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->textBox3->Size = System::Drawing::Size(191, 29);
			this->textBox3->TabIndex = 0;
			// 
			// button_Equal
			// 
			this->button_Equal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 50));
			this->button_Equal->Location = System::Drawing::Point(3, 38);
			this->button_Equal->Name = L"button_Equal";
			this->button_Equal->Size = System::Drawing::Size(191, 134);
			this->button_Equal->TabIndex = 1;
			this->button_Equal->Text = L"=";
			this->button_Equal->UseVisualStyleBackColor = true;
			this->button_Equal->Click += gcnew System::EventHandler(this, &CalculatorForm::button_Equal_Click);
			// 
			// button_Reset
			// 
			this->button_Reset->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 44));
			this->button_Reset->Location = System::Drawing::Point(3, 178);
			this->button_Reset->Name = L"button_Reset";
			this->button_Reset->Size = System::Drawing::Size(191, 149);
			this->button_Reset->TabIndex = 2;
			this->button_Reset->Text = L"A/C";
			this->button_Reset->UseVisualStyleBackColor = true;
			this->button_Reset->Click += gcnew System::EventHandler(this, &CalculatorForm::button2_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripStatusLabel1,
					this->TooltipAbout
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 345);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(393, 22);
			this->statusStrip1->TabIndex = 3;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// TooltipAbout
			// 
			this->TooltipAbout->Margin = System::Windows::Forms::Padding(30, 3, 0, 2);
			this->TooltipAbout->Name = L"TooltipAbout";
			this->TooltipAbout->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->TooltipAbout->Size = System::Drawing::Size(348, 17);
			this->TooltipAbout->Spring = true;
			this->TooltipAbout->Text = L"About";
			this->TooltipAbout->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->TooltipAbout->Click += gcnew System::EventHandler(this, &CalculatorForm::TooltipAbout_Click);
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(393, 367);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Name = L"CalculatorForm";
			this->Text = L"CalculatorForm";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->ResumeLayout(false);
			this->flowLayoutPanel1->PerformLayout();
			this->flowLayoutPanel2->ResumeLayout(false);
			this->flowLayoutPanel2->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void button_Minus_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button_Plus_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button_Multiply_Click(System::Object^ sender, System::EventArgs^ e);
	
	/// <summary>
	/// Reset Button
	/// </summary>
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);

	/// <summary>
	/// Calculates given opernads and operators
	/// </summary>
	private: System::Void button_Equal_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void button_Divide_Click(System::Object^ sender, System::EventArgs^ e);

	private: System::Void TooltipAbout_Click(System::Object^ sender, System::EventArgs^ e);
};
}
