#pragma once
#include <stdlib.h>
#include <time.h>

namespace AttentionTest {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 129);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(13, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"0";
			this->label1->Visible = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(81, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(13, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"0";
			this->label2->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(143, 129);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"0";
			this->label3->Visible = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 91);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Начать тест";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(14, 261);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(160, 25);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Заново";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(14, 144);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(44, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Visible = false;
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Location = System::Drawing::Point(82, 145);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(41, 20);
			this->numericUpDown2->TabIndex = 6;
			this->numericUpDown2->Visible = false;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Location = System::Drawing::Point(143, 144);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 999, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(41, 20);
			this->numericUpDown3->TabIndex = 7;
			this->numericUpDown3->Visible = false;
			// 
			// button3
			// 
			this->button3->Enabled = false;
			this->button3->Location = System::Drawing::Point(14, 221);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 24);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Проверить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(14, 179);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 24);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Ввести ответы";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Простой", L"Средний", L"Сложный" });
			this->comboBox1->Location = System::Drawing::Point(17, 38);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(67, 21);
			this->comboBox1->TabIndex = 10;
			this->comboBox1->Text = L"Простой";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 21);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(51, 13);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Уровень";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(115, 22);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(52, 13);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Попыток";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(170, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 13;
			this->label6->Text = L"3";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(117, 44);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(32, 13);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Очки";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(170, 42);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 15;
			this->label8->Text = L"0";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(196, 288);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Тест";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	// нажата кнопка "начать тест"; переход в состояние "демонстрация"
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		// определить заданный уровень сложности
		int level = 0;
		if (this->comboBox1->SelectedIndex == 0) {
			level = 9;
		}
		else if (this->comboBox1->SelectedIndex == 1) {
			level = 99;
		}
		else {
			level = 999;
		}
		// сгенерировать три значения для запоминания в промежутке от 0 до значения, соответствующего уровню сложности
		const int num = 3;
		int testnum[3];
		srand((int)time(0));
		for (int i = 0; i < num; i++) {
			testnum[i] = (rand() % level);
		}

		// сбросить цвет метки
		this->label1->BackColor = System::Drawing::Color::Transparent;
		this->label2->BackColor = System::Drawing::Color::Transparent;
		this->label3->BackColor = System::Drawing::Color::Transparent;

		// заполнить значения для запоминания
		this->label1->Text = Convert::ToString(testnum[0]);
		this->label2->Text = Convert::ToString(testnum[1]);
		this->label3->Text = Convert::ToString(testnum[2]);

		// показать значения пользователю
		this->label1->Visible = true;
		this->label2->Visible = true;
		this->label3->Visible = true;

		// сделать кнопку "начать тест" неактивной
		this->button1->Enabled = false;
		// активировать кнопку "заново"
		this->button2->Enabled = true;
		// активировать кнопку "ввести ответы"
		this->button4->Enabled = true;

		// убрать возможность задавать уровень сложности
		this->comboBox1->Enabled = false;
	}

	// нажата кнопка "заново"
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		int try_count = Convert::ToInt16(this->label6->Text);
		// скрыть значения для запоминания
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;

		// показать поля для ввода
		this->numericUpDown1->Visible = false;
		this->numericUpDown2->Visible = false;
		this->numericUpDown3->Visible = false;

		if (try_count > 0) {
			this->button1->Enabled = true;
		}
		this->button2->Enabled = false;
		this->button3->Enabled = false;
		this->button4->Enabled = false;

		// разрешить задавать уровень сложности
		this->comboBox1->Enabled = true;
	}

	// нажата кнопка "проверить"
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ result1 = Convert::ToString(this->numericUpDown1->Value);
			 String^ result2 = Convert::ToString(this->numericUpDown2->Value);
			 String^ result3 = Convert::ToString(this->numericUpDown3->Value);

			 // получить текущее значение счёта и уровня сложности
			 int score = Convert::ToInt16(this->label8->Text);
			 int level = this->comboBox1->SelectedIndex;

			 // показать исходные значения для запоминания
			 this->label1->Visible = true;
			 this->label2->Visible = true;
			 this->label3->Visible = true;

			 // убрать возможность изменять данные, введённые пользователем
			 this->numericUpDown1->Enabled = false;
			 this->numericUpDown2->Enabled = false;
			 this->numericUpDown3->Enabled = false;

			 int correct = 0;
			 if (result1->CompareTo (this->label1->Text) == 0) {
				 correct += 1;
				 this->label1->BackColor = System::Drawing::Color::LightGreen;
			 }
			 else {
				 this->label1->BackColor = System::Drawing::Color::Orange;
			 }

			 if (result2->CompareTo(this->label2->Text) == 0) {
				 correct += 1;
				 this->label2->BackColor = System::Drawing::Color::LightGreen;
			 }
			 else {
				 this->label2->BackColor = System::Drawing::Color::Orange;
			 }

			 if (result3->CompareTo(this->label3->Text) == 0) {
				 correct += 1;
				 this->label3->BackColor = System::Drawing::Color::LightGreen;
			 }
			 else {
				 this->label3->BackColor = System::Drawing::Color::Orange;
			 }

			 // для уровня "простой" за каждый правильный ответ одно очко
			 // для "средний" - 4
			 // для "сложный" - 9
			 score += correct * (level + 1) * (level + 1);
			 // за все три правильные ответа на уровне "простой" - 2 очка,
			 // на уровне "средний" - 8
			 // на уровне "сложный" - 18
			 if (correct == 3) score += 2 * (level + 1) * (level + 1);
			 // вывести текущий счёт
			 this->label8->Text = Convert::ToString(score);

			 // деактивировать кнопку "проверить"
			 this->button3->Enabled = false;

			 int try_count = Convert::ToInt16(this->label6->Text);
			 // уменьшить количество попыток
			 this->label6->Text = Convert::ToString(--try_count);
			 // если закончились попытки - деактивировать кнопку "заново"
			 if (try_count == 0) {
				 this->button2->Enabled = false;
			 }
	}

	// нажата кнопка "ввести ответы"; переход в состояние "ввод"
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		this->label1->Visible = false;
		this->label2->Visible = false;
		this->label3->Visible = false;

		this->numericUpDown1->Visible = true;
		this->numericUpDown2->Visible = true;
		this->numericUpDown3->Visible = true;

		this->numericUpDown1->Enabled = true;
		this->numericUpDown2->Enabled = true;
		this->numericUpDown3->Enabled = true;

		this->numericUpDown1->Value = 0;
		this->numericUpDown2->Value = 0;
		this->numericUpDown3->Value = 0;

		// деактивировать кнопку "ввести ответы"
		this->button4->Enabled = false;
		// активировать кнопку "проверить"
		this->button3->Enabled = true;
	}
};
}
