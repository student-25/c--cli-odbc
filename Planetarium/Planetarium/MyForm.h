#pragma once
using namespace System::Data::OleDb;

namespace Planetarium {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  діїToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  проПрограмуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  вихідToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  додатиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  оновитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  завантажитиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  видалитиToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  actionsGroupBox;

	private: System::Windows::Forms::Button^  delButton;
	private: System::Windows::Forms::Button^  readButton;


	private: System::Windows::Forms::Button^  updateButton;

	private: System::Windows::Forms::Button^  addButton;


	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Код;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Назва;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Маса;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Радіус;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Супутники;





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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->діїToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->додатиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оновитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->завантажитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->видалитиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->проПрограмуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->вихідToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->actionsGroupBox = (gcnew System::Windows::Forms::GroupBox());
			this->delButton = (gcnew System::Windows::Forms::Button());
			this->readButton = (gcnew System::Windows::Forms::Button());
			this->updateButton = (gcnew System::Windows::Forms::Button());
			this->addButton = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Код = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Назва = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Маса = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Радіус = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Супутники = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			this->actionsGroupBox->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->діїToolStripMenuItem,
					this->проПрограмуToolStripMenuItem, this->вихідToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(891, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// діїToolStripMenuItem
			// 
			this->діїToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->додатиToolStripMenuItem,
					this->оновитиToolStripMenuItem, this->завантажитиToolStripMenuItem, this->видалитиToolStripMenuItem
			});
			this->діїToolStripMenuItem->Name = L"діїToolStripMenuItem";
			this->діїToolStripMenuItem->Size = System::Drawing::Size(33, 20);
			this->діїToolStripMenuItem->Text = L"Дії";
			// 
			// додатиToolStripMenuItem
			// 
			this->додатиToolStripMenuItem->Name = L"додатиToolStripMenuItem";
			this->додатиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->додатиToolStripMenuItem->Text = L"Додати";
			this->додатиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// оновитиToolStripMenuItem
			// 
			this->оновитиToolStripMenuItem->Name = L"оновитиToolStripMenuItem";
			this->оновитиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->оновитиToolStripMenuItem->Text = L"Оновити";
			this->оновитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// завантажитиToolStripMenuItem
			// 
			this->завантажитиToolStripMenuItem->Name = L"завантажитиToolStripMenuItem";
			this->завантажитиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->завантажитиToolStripMenuItem->Text = L"Завантажити";
			this->завантажитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::readButton_Click);
			// 
			// видалитиToolStripMenuItem
			// 
			this->видалитиToolStripMenuItem->Name = L"видалитиToolStripMenuItem";
			this->видалитиToolStripMenuItem->Size = System::Drawing::Size(145, 22);
			this->видалитиToolStripMenuItem->Text = L"Видалити";
			this->видалитиToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::delButton_Click);
			// 
			// проПрограмуToolStripMenuItem
			// 
			this->проПрограмуToolStripMenuItem->Name = L"проПрограмуToolStripMenuItem";
			this->проПрограмуToolStripMenuItem->Size = System::Drawing::Size(99, 20);
			this->проПрограмуToolStripMenuItem->Text = L"Про програму";
			this->проПрограмуToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::проПрограмуToolStripMenuItem_Click);
			// 
			// вихідToolStripMenuItem
			// 
			this->вихідToolStripMenuItem->Name = L"вихідToolStripMenuItem";
			this->вихідToolStripMenuItem->Size = System::Drawing::Size(47, 20);
			this->вихідToolStripMenuItem->Text = L"Вихід";
			this->вихідToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::вихідToolStripMenuItem_Click);
			// 
			// actionsGroupBox
			// 
			this->actionsGroupBox->Controls->Add(this->delButton);
			this->actionsGroupBox->Controls->Add(this->readButton);
			this->actionsGroupBox->Controls->Add(this->updateButton);
			this->actionsGroupBox->Controls->Add(this->addButton);
			this->actionsGroupBox->Location = System::Drawing::Point(684, 41);
			this->actionsGroupBox->Name = L"actionsGroupBox";
			this->actionsGroupBox->Size = System::Drawing::Size(181, 354);
			this->actionsGroupBox->TabIndex = 1;
			this->actionsGroupBox->TabStop = false;
			this->actionsGroupBox->Text = L"Дії";
			// 
			// delButton
			// 
			this->delButton->Location = System::Drawing::Point(27, 170);
			this->delButton->Name = L"delButton";
			this->delButton->Size = System::Drawing::Size(130, 23);
			this->delButton->TabIndex = 3;
			this->delButton->Text = L"Видалити";
			this->delButton->UseVisualStyleBackColor = true;
			this->delButton->Click += gcnew System::EventHandler(this, &MyForm::delButton_Click);
			// 
			// readButton
			// 
			this->readButton->Location = System::Drawing::Point(27, 123);
			this->readButton->Name = L"readButton";
			this->readButton->Size = System::Drawing::Size(130, 23);
			this->readButton->TabIndex = 2;
			this->readButton->Text = L"Завантажити";
			this->readButton->UseVisualStyleBackColor = true;
			this->readButton->Click += gcnew System::EventHandler(this, &MyForm::readButton_Click);
			// 
			// updateButton
			// 
			this->updateButton->Location = System::Drawing::Point(27, 76);
			this->updateButton->Name = L"updateButton";
			this->updateButton->Size = System::Drawing::Size(130, 23);
			this->updateButton->TabIndex = 1;
			this->updateButton->Text = L"Оновити";
			this->updateButton->UseVisualStyleBackColor = true;
			this->updateButton->Click += gcnew System::EventHandler(this, &MyForm::updateButton_Click);
			// 
			// addButton
			// 
			this->addButton->Location = System::Drawing::Point(27, 28);
			this->addButton->Name = L"addButton";
			this->addButton->Size = System::Drawing::Size(130, 23);
			this->addButton->TabIndex = 0;
			this->addButton->Text = L"Додати";
			this->addButton->UseVisualStyleBackColor = true;
			this->addButton->Click += gcnew System::EventHandler(this, &MyForm::addButton_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Код, this->Назва,
					this->Маса, this->Радіус, this->Супутники
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 41);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(651, 354);
			this->dataGridView1->TabIndex = 2;
			// 
			// Код
			// 
			this->Код->HeaderText = L"Код";
			this->Код->Name = L"Код";
			// 
			// Назва
			// 
			this->Назва->HeaderText = L"Назва";
			this->Назва->Name = L"Назва";
			// 
			// Маса
			// 
			this->Маса->HeaderText = L"Маса";
			this->Маса->Name = L"Маса";
			// 
			// Радіус
			// 
			this->Радіус->HeaderText = L"Радіус";
			this->Радіус->Name = L"Радіус";
			// 
			// Супутники
			// 
			this->Супутники->HeaderText = L"Супутники";
			this->Супутники->Name = L"Супутники";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(891, 416);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->actionsGroupBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Планетарій";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->actionsGroupBox->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void readButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);

		dbConnection->Open();
		String^ query = "SELECT * FROM [planets]";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
		OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

		if (dbReader->HasRows == false) {
			MessageBox::Show("Дані відсутні", "Помилка");
		}
		else {
			while (dbReader->Read())
				dataGridView1->Rows->Add(dbReader["Код"], dbReader["Назва"], dbReader["Маса"], dbReader["Радіус"], 
					dbReader["Супутники"]);

		}
		dbReader->Close();
		dbConnection->Close();
	}

	private: System::Void addButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ mass = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ radius = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ satellites = dataGridView1->Rows[index]->Cells[4]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "INSERT INTO [planets] VALUES (" + id + ",'" + name + "','" + mass + "','" + radius + "'," + satellites + ")";
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else
			MessageBox::Show("Дані додані", "Ок");
		dbConnection->Close();
	}

	private: System::Void updateButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();
		String^ name = dataGridView1->Rows[index]->Cells[1]->Value->ToString();
		String^ mass = dataGridView1->Rows[index]->Cells[2]->Value->ToString();
		String^ radius = dataGridView1->Rows[index]->Cells[3]->Value->ToString();
		String^ satellites = dataGridView1->Rows[index]->Cells[4]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "UPDATE [planets] SET Назва='" + name + "', Маса='" + mass + "', Радіус='" + radius + 
			"', Супутники=" + satellites +
			" WHERE Код=" + id;
		//MessageBox::Show(query);
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else
			MessageBox::Show("Дані змінені", "Ок");
		dbConnection->Close();
	}

	private: System::Void delButton_Click(System::Object^  sender, System::EventArgs^  e) {
		if (dataGridView1->SelectedRows->Count != 1)
		{
			MessageBox::Show("Потрібно обрати один рядок", "Зверніть увагу");
			return;
		}
		int index = dataGridView1->SelectedRows[0]->Index;
		if (dataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
			dataGridView1->Rows[index]->Cells[4]->Value == nullptr) {
			MessageBox::Show("Не всі дані є", "Зверніть увагу");
			return;
		}
		String^ id = dataGridView1->Rows[index]->Cells[0]->Value->ToString();

		String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=planets-db.mdb";
		OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
		dbConnection->Open();
		String^ query = "DELETE FROM [planets] WHERE Код=" + id;
		OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);

		if (dbCommand->ExecuteNonQuery() != 1)
			MessageBox::Show("Помилка у виконанні", "Помилка");
		else {
			MessageBox::Show("Дані видалені", "Ок");
			dataGridView1->Rows->RemoveAt(index);
		}
		dbConnection->Close();
	}

private: System::Void проПрограмуToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	MessageBox::Show("\nПрограма 'Планетарій 2023'\n\n\n\tВерсія 1.01\n\n", "Про програму");
}

private: System::Void вихідToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
	Close();
}

};

};

