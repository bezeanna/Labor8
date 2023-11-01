#pragma once
#include<cstdlib>
#include<ctime>
using namespace System::Collections::Generic;
namespace Labor8 {

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
	private: System::Windows::Forms::ListBox^ listBox1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;

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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(250, 126);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(200, 340);
			this->listBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(126, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(455, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Створити стек цілих чисел. Обчислити суму парних елементів стеку.";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(45, 179);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(144, 16);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Введіть розмір стеку";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(66, 206);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(32, 355);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(171, 57);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Обчислити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(491, 171);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 57);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Додати елементи";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(491, 355);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(171, 57);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Видалити елементи";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(713, 540);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->listBox1);
			this->Name = L"MyForm";
			this->Text = L"Labor8";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		System::Collections::Generic::Stack<int>myStack1;//оголошення стеку, як глобальна зміна
		int count = 0;//лічильник для збільшення кроку, щоб додавалися елементи до стеку

#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	int suma = 0;
	for (int i = 0; i < listBox1->Items->Count; i++)
	{
		int y = System::Convert::ToInt32(listBox1->Items[i]);
		if (y % 2 == 0)
		{
			suma += y;
		}
	}
	MessageBox::Show(suma.ToString());
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int size = Convert::ToInt32(textBox1->Text);
	if (count < size)
	{
		srand(time(0));//генератор випадкових чисел
		int randomValue = rand() % 100;
		myStack1.Push(randomValue);
		listBox1->Items->Add(randomValue.ToString());
		count++;
	}
	else
	{
		MessageBox::Show("Досягнуто ліміт чисел");
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (myStack1.Count > 0) {
		myStack1.Pop();
		listBox1->Items->Clear();
		for each (int value in myStack1)
		{
			listBox1->Items->Add(value.ToString());
		}
	}
	else
	{
		MessageBox::Show("Стек Порожній");
	}
}
};
}
