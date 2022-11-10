#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		int counter;
		Form1(void)
		{
			counter++;
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_uwu;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button_uwu_2;


	protected:

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
			this->button_uwu = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button_uwu_2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_uwu
			// 
			this->button_uwu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_uwu->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_uwu->ForeColor = System::Drawing::Color::AliceBlue;
			this->button_uwu->Location = System::Drawing::Point(13, 13);
			this->button_uwu->Margin = System::Windows::Forms::Padding(4);
			this->button_uwu->Name = L"button_uwu";
			this->button_uwu->Size = System::Drawing::Size(142, 36);
			this->button_uwu->TabIndex = 0;
			this->button_uwu->Text = L"uwu button_1";
			this->button_uwu->UseVisualStyleBackColor = false;
			this->button_uwu->Click += gcnew System::EventHandler(this, &Form1::button_uwu_Click);
			this->button_uwu->MouseEnter += gcnew System::EventHandler(this, &Form1::button_uwu_MouseEnter);
			this->button_uwu->MouseLeave += gcnew System::EventHandler(this, &Form1::button_uwu_MouseLeave);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label1->Location = System::Drawing::Point(29, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 36);
			this->label1->TabIndex = 1;
			this->label1->Text = L"NO TEXT";
			// 
			// button_uwu_2
			// 
			this->button_uwu_2->BackColor = System::Drawing::SystemColors::InfoText;
			this->button_uwu_2->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 5, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_uwu_2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->button_uwu_2->Location = System::Drawing::Point(13, 56);
			this->button_uwu_2->Name = L"button_uwu_2";
			this->button_uwu_2->Size = System::Drawing::Size(142, 36);
			this->button_uwu_2->TabIndex = 2;
			this->button_uwu_2->Text = L"uwu button_2";
			this->button_uwu_2->UseVisualStyleBackColor = false;
			this->button_uwu_2->Click += gcnew System::EventHandler(this, &Form1::button_uwu_2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 566);
			this->Controls->Add(this->button_uwu_2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button_uwu);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button_uwu_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Text = "Name changed haha!";
		this->BackColor = Color :: LightPink;
		label1->BackColor = Color::LightPink;
		label1->Text = "I told you not to click me :(";
		//MessageBox::Show("Oni Chan! uWu!");
		counter++;
		this->Text = counter.ToString();
		

	}
	private: System::Void button_uwu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_uwu->Text = "Don't click me pls!";

	}
	private: System::Void button_uwu_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_uwu->Text = "Just click me already!";

	}
	
private: System::Void button_uwu_2_Click(System::Object^ sender, System::EventArgs^ e)
{
	//button_uwu_Click(sender, e);
	this->BackColor = Color::LightBlue;
	label1->BackColor = Color::LightBlue;
	counter++;
	this->Text = counter.ToString();


}
};
}
