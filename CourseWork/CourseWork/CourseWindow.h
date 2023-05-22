#pragma once


#include "Header.h"
#include <msclr/marshal_cppstd.h>
#include <string>
#include <iostream>
#include <regex>

namespace CourseWork {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для CourseWindow
	/// </summary>
	public ref class CourseWindow : public System::Windows::Forms::Form
	{
	public:
		CourseWindow(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~CourseWindow()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::TextBox^ textBox_A;
	private: System::Windows::Forms::TextBox^ textBox_B;
	private: System::Windows::Forms::TextBox^ textBox_C;



	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;

	private: String^ first_c = " ";
	private: String^ second_c = " ";
	private: String^ third_c = " ";
	private: System::Windows::Forms::Label^ label_answer;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label_podbor;










	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox_A = (gcnew System::Windows::Forms::TextBox());
			this->textBox_B = (gcnew System::Windows::Forms::TextBox());
			this->textBox_C = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label_answer = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label_podbor = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox_A
			// 
			this->textBox_A->Location = System::Drawing::Point(217, 164);
			this->textBox_A->Name = L"textBox_A";
			this->textBox_A->Size = System::Drawing::Size(60, 20);
			this->textBox_A->TabIndex = 2;
			this->textBox_A->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_A_TextChanged);
			// 
			// textBox_B
			// 
			this->textBox_B->Location = System::Drawing::Point(385, 164);
			this->textBox_B->Name = L"textBox_B";
			this->textBox_B->Size = System::Drawing::Size(60, 20);
			this->textBox_B->TabIndex = 3;
			this->textBox_B->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_B_TextChanged);
			// 
			// textBox_C
			// 
			this->textBox_C->Location = System::Drawing::Point(551, 164);
			this->textBox_C->Name = L"textBox_C";
			this->textBox_C->Size = System::Drawing::Size(60, 20);
			this->textBox_C->TabIndex = 4;
			this->textBox_C->TextChanged += gcnew System::EventHandler(this, &CourseWindow::textBox_C_TextChanged);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(290, 213);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 42);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Решить уравнение";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &CourseWindow::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(188, 167);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(23, 13);
			this->label1->TabIndex = 7;
			this->label1->Text = L"А - ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(356, 167);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"В - ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(522, 167);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 9;
			this->label3->Text = L"С - ";
			// 
			// label_answer
			// 
			this->label_answer->BackColor = System::Drawing::Color::White;
			this->label_answer->Location = System::Drawing::Point(188, 282);
			this->label_answer->Name = L"label_answer";
			this->label_answer->Size = System::Drawing::Size(424, 32);
			this->label_answer->TabIndex = 10;
			this->label_answer->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::White;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(188, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(424, 30);
			this->label4->TabIndex = 11;
			this->label4->Text = L"ax^2 + bx + c = 0";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::White;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(187, 88);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(424, 30);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Введите коэффициенты для уравнения:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label_podbor
			// 
			this->label_podbor->BackColor = System::Drawing::Color::White;
			this->label_podbor->Location = System::Drawing::Point(188, 341);
			this->label_podbor->Name = L"label_podbor";
			this->label_podbor->Size = System::Drawing::Size(424, 32);
			this->label_podbor->TabIndex = 13;
			this->label_podbor->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// CourseWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Silver;
			this->ClientSize = System::Drawing::Size(784, 461);
			this->Controls->Add(this->label_podbor);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label_answer);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox_C);
			this->Controls->Add(this->textBox_B);
			this->Controls->Add(this->textBox_A);
			this->Name = L"CourseWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Приложения для высичления корней квадратного уравнения";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		bool IsStringNumeric(String^ input)
		{
			std::string strInput = msclr::interop::marshal_as<std::string>(input);

			try
			{
				// Преобразование строки в число
				std::stod(strInput);
				return true;
			}
			catch (const std::exception&)
			{
				return false;
			}
		}


		bool IsStringAllZeros(String^ text) {
			if (text->Length > 1) {
				for (int i = 0; i < text->Length; i++) {
					if (text[i] != '0') {
						return false;
					}
				}
				return true;
			}
			return false;
		}



	private: System::Void textBox_A_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		first_c = textBox_A->Text;
	}
	private: System::Void textBox_B_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		second_c = textBox_B->Text;
	}
	private: System::Void textBox_C_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		third_c = textBox_C->Text;
	}


	String^ ConvertToManagedString(const std::string& nativeString)
		{
			return msclr::interop::marshal_as<String^>(nativeString);
		}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//0

		if (IsStringNumeric(first_c) && IsStringNumeric(second_c) && IsStringNumeric(third_c)) {
			//1
			if (IsStringAllZeros(first_c) || IsStringAllZeros(second_c) || IsStringAllZeros(third_c)) {
				MessageBox::Show("Неправильно введены коэффициенты!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
			else if (first_c == "0" && second_c == "0" && third_c == "0") {
				type1 eq1;
				label_answer->Text = ConvertToManagedString(eq1.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
			}
			//2
			else if (first_c != "0" && second_c == "0" && third_c == "0") {
				type2 eq2(Convert::ToInt32(first_c));
				label_answer->Text = ConvertToManagedString(eq2.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
			}
			//3
			else if (first_c == "0" && second_c == "0" && third_c != "0") {
				type3 eq3;
				label_answer->Text = ConvertToManagedString(eq3.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
			}
			//4
			else if (first_c != "0" && second_c == "0" && third_c != "0") {
				type4 eq4(Convert::ToInt32(first_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq4.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq4.Get_answer_podbor());
			}
			//5
			else if (first_c == "0" && second_c != "0" && third_c != "0") {
				type5 eq5(Convert::ToInt32(second_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq5.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq5.Get_answer_podbor());
			}
			//6
			else if (first_c != "0" && second_c != "0" && third_c != "0") {
				type6 eq6(Convert::ToInt32(first_c), Convert::ToInt32(second_c), Convert::ToInt32(third_c));
				label_answer->Text = ConvertToManagedString(eq6.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq6.Get_answer_podbor());
			}
			//7
			else if (first_c == "0" && second_c != "0" && third_c == "0") {
				type7 eq7(Convert::ToInt32(second_c));
				label_answer->Text = ConvertToManagedString(eq7.Get_answer());
				label_podbor->Text = "Невозможно решить методом подбора";
			}
			//8
			else if (first_c != "0" && second_c != "0" && third_c == "0") {
				type8 eq8(Convert::ToInt32(first_c), Convert::ToInt32(second_c));
				label_answer->Text = ConvertToManagedString(eq8.Get_answer());
				label_podbor->Text = ConvertToManagedString(eq8.Get_answer_podbor());
			}
		}

		else {
			MessageBox::Show("Неправильно введены коэффициенты!", "Ошибка", MessageBoxButtons::OK, MessageBoxIcon::Error);

		}
	}
};
}


