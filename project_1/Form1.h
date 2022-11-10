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
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_uwu;

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
			this->SuspendLayout();
			// 
			// button_uwu
			// 
			this->button_uwu->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button_uwu->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_uwu->ForeColor = System::Drawing::Color::AliceBlue;
			this->button_uwu->Location = System::Drawing::Point(13, 13);
			this->button_uwu->Margin = System::Windows::Forms::Padding(4);
			this->button_uwu->Name = L"button_uwu";
			this->button_uwu->Size = System::Drawing::Size(142, 49);
			this->button_uwu->TabIndex = 0;
			this->button_uwu->Text = L"Click Me uWu";
			this->button_uwu->UseVisualStyleBackColor = false;
			this->button_uwu->Click += gcnew System::EventHandler(this, &Form1::button_uwu_Click);
			this->button_uwu->MouseEnter += gcnew System::EventHandler(this, &Form1::button_uwu_MouseEnter);
			this->button_uwu->MouseLeave += gcnew System::EventHandler(this, &Form1::button_uwu_MouseLeave);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1228, 566);
			this->Controls->Add(this->button_uwu);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button_uwu_Click(System::Object^ sender, System::EventArgs^ e)
	{
	
		MessageBox::Show("Oni Chan! uWu!");
		

	}
	private: System::Void button_uwu_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		button_uwu->Text = "Don't click me pls!";

	}
	private: System::Void button_uwu_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		button_uwu->Text = "Just click me already!";

	}
	};
}
