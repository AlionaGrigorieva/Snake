#pragma once

namespace Snake {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Layout
	/// </summary>
	public ref class Layout : public System::Windows::Forms::Form
	{
	public:
		Layout(void);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Layout()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ menuToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ pauseContinueToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutGameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBoxData;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;




	private: System::Windows::Forms::PictureBox^ pictureBoxUpperLimit;
	private: System::Windows::Forms::PictureBox^ pictureBoxBottomLimit;
	private: System::Windows::Forms::PictureBox^ pictureBoxLeftLimit;
	private: System::Windows::Forms::PictureBox^ pictureBoxRightLimit;
	private: System::Windows::Forms::GroupBox^ groupBoxSettings;
	private: System::Windows::Forms::Button^ buttonApply;
	private: System::Windows::Forms::NumericUpDown^ numericUpSpeed;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBoxCenter;
	private: System::Windows::Forms::Timer^ timer;

	private: System::Windows::Forms::Label^ labelGameOver;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxPosition;
	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Layout::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->menuToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pauseContinueToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutGameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBoxData = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxPosition = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBoxUpperLimit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxBottomLimit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxLeftLimit = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxRightLimit = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->labelGameOver = (gcnew System::Windows::Forms::Label());
			this->buttonApply = (gcnew System::Windows::Forms::Button());
			this->numericUpSpeed = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBoxCenter = (gcnew System::Windows::Forms::PictureBox());
			this->timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			this->groupBoxData->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUpperLimit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBottomLimit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeftLimit))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRightLimit))->BeginInit();
			this->groupBoxSettings->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpSpeed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCenter))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::DarkSeaGreen;
			this->menuStrip1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->menuToolStripMenuItem,
					this->aboutGameToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(9, 3, 0, 3);
			this->menuStrip1->Size = System::Drawing::Size(598, 31);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// menuToolStripMenuItem
			// 
			this->menuToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->newGameToolStripMenuItem,
					this->pauseContinueToolStripMenuItem, this->settingsToolStripMenuItem
			});
			this->menuToolStripMenuItem->Name = L"menuToolStripMenuItem";
			this->menuToolStripMenuItem->Size = System::Drawing::Size(68, 25);
			this->menuToolStripMenuItem->Text = L"MENU";
			this->menuToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::menuToolStripMenuItem_Click);
			// 
			// newGameToolStripMenuItem
			// 
			this->newGameToolStripMenuItem->Name = L"newGameToolStripMenuItem";
			this->newGameToolStripMenuItem->Size = System::Drawing::Size(213, 26);
			this->newGameToolStripMenuItem->Text = L"NEW GAME";
			this->newGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::newGameToolStripMenuItem_Click);
			// 
			// pauseContinueToolStripMenuItem
			// 
			this->pauseContinueToolStripMenuItem->Name = L"pauseContinueToolStripMenuItem";
			this->pauseContinueToolStripMenuItem->Size = System::Drawing::Size(213, 26);
			this->pauseContinueToolStripMenuItem->Text = L"PAUSE/CONTINUE";
			this->pauseContinueToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::pauseContinueToolStripMenuItem_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(213, 26);
			this->settingsToolStripMenuItem->Text = L"SETTINGS";
			this->settingsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::settingsToolStripMenuItem_Click);
			// 
			// aboutGameToolStripMenuItem
			// 
			this->aboutGameToolStripMenuItem->Name = L"aboutGameToolStripMenuItem";
			this->aboutGameToolStripMenuItem->Size = System::Drawing::Size(124, 25);
			this->aboutGameToolStripMenuItem->Text = L"ABOUT GAME";
			this->aboutGameToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::aboutGameToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(54, 25);
			this->exitToolStripMenuItem->Text = L"EXIT";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Layout::exitToolStripMenuItem_Click);
			// 
			// groupBoxData
			// 
			this->groupBoxData->Controls->Add(this->label3);
			this->groupBoxData->Controls->Add(this->textBoxPosition);
			this->groupBoxData->Controls->Add(this->label1);
			this->groupBoxData->Controls->Add(this->textBox1);
			this->groupBoxData->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxData->Location = System::Drawing::Point(13, 43);
			this->groupBoxData->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBoxData->Name = L"groupBoxData";
			this->groupBoxData->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBoxData->Size = System::Drawing::Size(454, 85);
			this->groupBoxData->TabIndex = 1;
			this->groupBoxData->TabStop = false;
			this->groupBoxData->Text = L"DATA";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::DarkGreen;
			this->label3->Location = System::Drawing::Point(183, 36);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(194, 21);
			this->label3->TabIndex = 3;
			this->label3->Text = L"POSITION OF SNAKE (X,Y):";
			// 
			// textBoxPosition
			// 
			this->textBoxPosition->Enabled = false;
			this->textBoxPosition->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBoxPosition->Location = System::Drawing::Point(385, 32);
			this->textBoxPosition->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBoxPosition->Name = L"textBoxPosition";
			this->textBoxPosition->ReadOnly = true;
			this->textBoxPosition->Size = System::Drawing::Size(61, 29);
			this->textBoxPosition->TabIndex = 2;
			this->textBoxPosition->Text = L"0";
			this->textBoxPosition->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::DarkGreen;
			this->label1->Location = System::Drawing::Point(8, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 21);
			this->label1->TabIndex = 1;
			this->label1->Text = L"SCORE:";
			// 
			// textBox1
			// 
			this->textBox1->Enabled = false;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(71, 32);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(61, 29);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"0";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBoxUpperLimit
			// 
			this->pictureBoxUpperLimit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxUpperLimit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxUpperLimit.Image")));
			this->pictureBoxUpperLimit->Location = System::Drawing::Point(22, 175);
			this->pictureBoxUpperLimit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBoxUpperLimit->Name = L"pictureBoxUpperLimit";
			this->pictureBoxUpperLimit->Size = System::Drawing::Size(558, 20);
			this->pictureBoxUpperLimit->TabIndex = 3;
			this->pictureBoxUpperLimit->TabStop = false;
			// 
			// pictureBoxBottomLimit
			// 
			this->pictureBoxBottomLimit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxBottomLimit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxBottomLimit.Image")));
			this->pictureBoxBottomLimit->Location = System::Drawing::Point(22, 735);
			this->pictureBoxBottomLimit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBoxBottomLimit->Name = L"pictureBoxBottomLimit";
			this->pictureBoxBottomLimit->Size = System::Drawing::Size(558, 20);
			this->pictureBoxBottomLimit->TabIndex = 4;
			this->pictureBoxBottomLimit->TabStop = false;
			// 
			// pictureBoxLeftLimit
			// 
			this->pictureBoxLeftLimit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxLeftLimit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxLeftLimit.Image")));
			this->pictureBoxLeftLimit->Location = System::Drawing::Point(22, 175);
			this->pictureBoxLeftLimit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBoxLeftLimit->Name = L"pictureBoxLeftLimit";
			this->pictureBoxLeftLimit->Size = System::Drawing::Size(20, 580);
			this->pictureBoxLeftLimit->TabIndex = 5;
			this->pictureBoxLeftLimit->TabStop = false;
			// 
			// pictureBoxRightLimit
			// 
			this->pictureBoxRightLimit->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pictureBoxRightLimit->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxRightLimit.Image")));
			this->pictureBoxRightLimit->Location = System::Drawing::Point(560, 175);
			this->pictureBoxRightLimit->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->pictureBoxRightLimit->Name = L"pictureBoxRightLimit";
			this->pictureBoxRightLimit->Size = System::Drawing::Size(20, 580);
			this->pictureBoxRightLimit->TabIndex = 6;
			this->pictureBoxRightLimit->TabStop = false;
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->BackColor = System::Drawing::Color::Ivory;
			this->groupBoxSettings->Controls->Add(this->labelGameOver);
			this->groupBoxSettings->Controls->Add(this->buttonApply);
			this->groupBoxSettings->Controls->Add(this->numericUpSpeed);
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBoxSettings->ForeColor = System::Drawing::Color::Black;
			this->groupBoxSettings->Location = System::Drawing::Point(95, 397);
			this->groupBoxSettings->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Padding = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->groupBoxSettings->Size = System::Drawing::Size(431, 202);
			this->groupBoxSettings->TabIndex = 2;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"SETTINGS";
			this->groupBoxSettings->Visible = false;
			// 
			// labelGameOver
			// 
			this->labelGameOver->AutoSize = true;
			this->labelGameOver->BackColor = System::Drawing::Color::Black;
			this->labelGameOver->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->labelGameOver->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 21.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->labelGameOver->ForeColor = System::Drawing::Color::Red;
			this->labelGameOver->Location = System::Drawing::Point(80, 39);
			this->labelGameOver->Name = L"labelGameOver";
			this->labelGameOver->Size = System::Drawing::Size(292, 82);
			this->labelGameOver->TabIndex = 8;
			this->labelGameOver->Text = L"GAME OVER!\r\nRESTART THE GAME!";
			this->labelGameOver->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->labelGameOver->Visible = false;
			// 
			// buttonApply
			// 
			this->buttonApply->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->buttonApply->ForeColor = System::Drawing::Color::ForestGreen;
			this->buttonApply->Location = System::Drawing::Point(104, 126);
			this->buttonApply->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->buttonApply->Name = L"buttonApply";
			this->buttonApply->Size = System::Drawing::Size(227, 38);
			this->buttonApply->TabIndex = 4;
			this->buttonApply->Text = L"APPLY";
			this->buttonApply->UseVisualStyleBackColor = true;
			this->buttonApply->Click += gcnew System::EventHandler(this, &Layout::buttonApply_Click);
			// 
			// numericUpSpeed
			// 
			this->numericUpSpeed->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpSpeed->Location = System::Drawing::Point(225, 61);
			this->numericUpSpeed->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->numericUpSpeed->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpSpeed->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpSpeed->Name = L"numericUpSpeed";
			this->numericUpSpeed->Size = System::Drawing::Size(73, 29);
			this->numericUpSpeed->TabIndex = 3;
			this->numericUpSpeed->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->numericUpSpeed->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(117, 63);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(95, 21);
			this->label2->TabIndex = 2;
			this->label2->Text = L"SPEED (MS):";
			// 
			// pictureBoxCenter
			// 
			this->pictureBoxCenter->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBoxCenter.BackgroundImage")));
			this->pictureBoxCenter->Location = System::Drawing::Point(22, 175);
			this->pictureBoxCenter->Name = L"pictureBoxCenter";
			this->pictureBoxCenter->Size = System::Drawing::Size(558, 570);
			this->pictureBoxCenter->TabIndex = 7;
			this->pictureBoxCenter->TabStop = false;
			// 
			// timer
			// 
			this->timer->Tick += gcnew System::EventHandler(this, &Layout::GameForm_Update);
			// 
			// Layout
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Ivory;
			this->ClientSize = System::Drawing::Size(598, 771);
			this->Controls->Add(this->pictureBoxRightLimit);
			this->Controls->Add(this->pictureBoxLeftLimit);
			this->Controls->Add(this->groupBoxSettings);
			this->Controls->Add(this->pictureBoxBottomLimit);
			this->Controls->Add(this->pictureBoxUpperLimit);
			this->Controls->Add(this->groupBoxData);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->pictureBoxCenter);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->MaximizeBox = false;
			this->Name = L"Layout";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SNAKE";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Layout::Layout_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBoxData->ResumeLayout(false);
			this->groupBoxData->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxUpperLimit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxBottomLimit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxLeftLimit))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxRightLimit))->EndInit();
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpSpeed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxCenter))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//Game Data
		private: PictureBox^ fruit;
		private: array<PictureBox^>^ Serpens;
		private: bool play;
		private: bool die;
		private: bool firstLaunch;
		private: int step = 10;
		private: float updateInterval = 100;
		private: int score = 0;

//Game Actions
		private: void GeneratePositionFruit();
		private: void Eating();
		private: void Movement();
		private: void EatYourself();
		private: void GameOver();
		private: void NewGame();
		private: void ChackBorders();

//Game Events

//Button push handler
private: System::Void buttonApply_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void pauseContinueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void aboutGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);

//Key down handler
private: System::Void Layout_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);

//Update game
private: void GameForm_Update(Object^ object, EventArgs^ e);

};
}
