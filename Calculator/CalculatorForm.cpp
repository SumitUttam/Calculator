#include "CalculatorForm.h"



System::Void Calculator::CalculatorForm::button_Minus_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->op = '-';
	this->label1->Text = "-";
}

System::Void Calculator::CalculatorForm::button_Plus_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->op = '+';
	this->label1->Text = "+";
}

System::Void Calculator::CalculatorForm::button_Multiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->op = '*';
	this->label1->Text = "x";
}

System::Void Calculator::CalculatorForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->op = 'e';
	this->label1->Text = "";
	this->textBox1->Text = "";
	this->textBox2->Text = "";
	this->textBox3->Text = "";
	this->toolStripStatusLabel1->Text = "";
}

System::Void Calculator::CalculatorForm::button_Equal_Click(System::Object^ sender, System::EventArgs^ e)
{
	//resets any error if exsists
	this->toolStripStatusLabel1->Text = "";

	//If no operator is choosen
	if (this->op == 'e') {
		this->toolStripStatusLabel1->Text = L"Error: choose operator";
		return;
	}
	double x;
	double y;

	//To Handle non numerical operand input
	try
	{
		x = System::Convert::ToDouble(this->textBox1->Text);
		y = System::Convert::ToDouble(this->textBox2->Text);
	}
	catch (...)
	{
		//this->toolStripStatusLabel1->Text = L"Error: Non numerical operand";

		MessageBox::Show("Non numerical operand!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	//To handle division by zero
	if (this->op == '/' && y == 0) {
		//this->toolStripStatusLabel1->Text = L"Error: Division by zero";
		MessageBox::Show("Cannot divide by zero!", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	this->textBox3->Text = System::Convert::ToString(this->calc.calculate(x, this->op, y));
}

System::Void Calculator::CalculatorForm::button_Divide_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->op = '/';
	this->label1->Text = "/";
}

System::Void Calculator::CalculatorForm::TooltipAbout_Click(System::Object^ sender, System::EventArgs^ e)
{
	AboutForm^ about = gcnew AboutForm;
	about->ShowDialog();
}
