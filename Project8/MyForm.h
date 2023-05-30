#pragma once

#include <string>
#include <msclr\marshal_cppstd.h>
#include <fstream>
#include <iostream>
#include <vector>

// Функция для подсчета количества записей в файле
int countRecords()
{
	std::ifstream inputFile("data.txt");
	if (inputFile.is_open())
	{
		int count = 0;
		std::string line;
		while (std::getline(inputFile, line))
		{
			if (line == "--------------------------")
				count++;
		}
		inputFile.close();
		return count;
	}
	else
	{
		std::cout << "Ошибка при открытии файла!" << std::endl;
		return -1; // Возвращаем -1 в случае ошибки чтения файла
	}
}
namespace Project8 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::CadetBlue;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(271, 398);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(394, 64);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Записаться";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::CadetBlue;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(273, 159);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(394, 26);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::LightBlue;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(267, 127);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(97, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Ваше ФИО:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::LightBlue;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(267, 198);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Преподаватель:";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::CadetBlue;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(271, 231);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(394, 26);
			this->textBox2->TabIndex = 3;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::LightBlue;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(267, 270);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 20);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Дата:";
			this->label3->Click += gcnew System::EventHandler(this, &MyForm::label3_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->CalendarForeColor = System::Drawing::Color::CadetBlue;
			this->dateTimePicker1->CalendarMonthBackground = System::Drawing::Color::Turquoise;
			this->dateTimePicker1->CalendarTitleBackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->dateTimePicker1->CalendarTitleForeColor = System::Drawing::Color::Red;
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->dateTimePicker1->Location = System::Drawing::Point(271, 303);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(394, 26);
			this->dateTimePicker1->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(300, 38);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(343, 42);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Запись на занятия";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Location = System::Drawing::Point(729, 452);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(206, 66);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(947, 530);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(963, 569);
			this->MinimumSize = System::Drawing::Size(963, 569);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	// Проверяем, что все поля заполнены
	if (textBox1->Text == "" || textBox2->Text == "" || dateTimePicker1->Text == "") {
		MessageBox::Show("Пожалуйста, заполните все поля!");
		return; // Прерываем выполнение метода, чтобы данные не сохранялись
	}

	// Получаем количество существующих записей
	int recordCount = countRecords();

	if (recordCount == -1) {
		MessageBox::Show("Ошибка при подсчете записей!");
		return; // Прерываем выполнение метода, чтобы данные не сохранялись
	}

	// Проверяем, достигнуто ли ограничение в 14 записей
	if (recordCount >= 14) {
		MessageBox::Show("Достигнуто максимальное количество записей!");
		return; // Прерываем выполнение метода, чтобы данные не сохранялись
	}

	std::string fio = msclr::interop::marshal_as<std::string>(textBox1->Text);
	std::string teacher = msclr::interop::marshal_as<std::string>(textBox2->Text);
	std::string date = msclr::interop::marshal_as<std::string>(dateTimePicker1->Text);

	// Открываем файл для записи
	std::ofstream outputFile("data.txt", std::ios::app);
	if (outputFile.is_open()) {
		// Записываем данные в файл
		outputFile << "ФИО: " << fio << std::endl;
		outputFile << "Преподаватель: " << teacher << std::endl;
		outputFile << "Дата: " << date << std::endl;
		outputFile << "--------------------------" << std::endl;
		outputFile.close();

		MessageBox::Show("Запись успешно сохранена!");
	}
	else {
		MessageBox::Show("Ошибка при открытии файла!");
	}
}



	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
