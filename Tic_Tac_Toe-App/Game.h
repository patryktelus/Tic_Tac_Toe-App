#pragma once
#include <string>

namespace TicTacToeApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Tic-Tac-Toe Game
	/// </summary>

	char p1, p2, p3, p4, p5, p6, p7, p8, p9;
	char who;

	void checkWin() {
		if ((p1 == p2 && p2 == p3 && p1 != 'b') ||
			(p4 == p5 && p5 == p6 && p4 != 'b') ||
			(p7 == p8 && p8 == p9 && p7 != 'b') ||
			(p1 == p4 && p4 == p7 && p1 != 'b') ||
			(p2 == p5 && p5 == p8 && p2 != 'b') ||
			(p3 == p6 && p6 == p9 && p3 != 'b') ||
			(p1 == p5 && p5 == p9 && p1 != 'b') ||
			(p3 == p5 && p5 == p7 && p3 != 'b')) {
			std::string m;
			if (who == 'x') {
				MessageBox::Show("O wins!", "Winner!", MessageBoxButtons::OK);
			}
			else {
				MessageBox::Show("X wins!", "Winner!", MessageBoxButtons::OK);
			}
		}
	}

	public ref class Game : public System::Windows::Forms::Form
	{
	public:
		Game(void)
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
		~Game()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::PictureBox^  pole3;

	private: System::Windows::Forms::PictureBox^  pole2;

	private: System::Windows::Forms::PictureBox^  pole1;
	private: System::Windows::Forms::PictureBox^  pole6;


	private: System::Windows::Forms::PictureBox^  pole5;

	private: System::Windows::Forms::PictureBox^  pole4;
	private: System::Windows::Forms::PictureBox^  pole9;


	private: System::Windows::Forms::PictureBox^  pole8;

	private: System::Windows::Forms::PictureBox^  pole7;
	private: System::Windows::Forms::Label^  turn;
	private: System::Windows::Forms::PictureBox^  turnico;

	private: System::Windows::Forms::Button^  restart;


	protected:
	private: System::ComponentModel::IContainer^  components;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Game::typeid));
			Form::CenterToScreen();
			this->pole3 = (gcnew System::Windows::Forms::PictureBox());
			this->pole2 = (gcnew System::Windows::Forms::PictureBox());
			this->pole1 = (gcnew System::Windows::Forms::PictureBox());
			this->pole6 = (gcnew System::Windows::Forms::PictureBox());
			this->pole5 = (gcnew System::Windows::Forms::PictureBox());
			this->pole4 = (gcnew System::Windows::Forms::PictureBox());
			this->pole9 = (gcnew System::Windows::Forms::PictureBox());
			this->pole8 = (gcnew System::Windows::Forms::PictureBox());
			this->pole7 = (gcnew System::Windows::Forms::PictureBox());
			this->turn = (gcnew System::Windows::Forms::Label());
			this->turnico = (gcnew System::Windows::Forms::PictureBox());
			this->restart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turnico))->BeginInit();
			this->SuspendLayout();
			// 
			// pole3
			// 
			this->pole3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole3.Image")));
			this->pole3->Location = System::Drawing::Point(230, 30);
			this->pole3->Name = L"pole3";
			this->pole3->Size = System::Drawing::Size(100, 100);
			this->pole3->TabIndex = 5;
			this->pole3->TabStop = false;
			this->pole3->Click += gcnew System::EventHandler(this, &Game::pole3_Click);
			// 
			// pole2
			// 
			this->pole2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole2.Image")));
			this->pole2->Location = System::Drawing::Point(130, 30);
			this->pole2->Name = L"pole2";
			this->pole2->Size = System::Drawing::Size(100, 100);
			this->pole2->TabIndex = 4;
			this->pole2->TabStop = false;
			this->pole2->Click += gcnew System::EventHandler(this, &Game::pole2_Click);
			// 
			// pole1
			// 
			this->pole1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole1.Image")));
			this->pole1->Location = System::Drawing::Point(30, 30);
			this->pole1->Name = L"pole1";
			this->pole1->Size = System::Drawing::Size(100, 100);
			this->pole1->TabIndex = 3;
			this->pole1->TabStop = false;
			this->pole1->Click += gcnew System::EventHandler(this, &Game::pole1_Click);
			// 
			// pole6
			// 
			this->pole6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole6.Image")));
			this->pole6->Location = System::Drawing::Point(230, 130);
			this->pole6->Name = L"pole6";
			this->pole6->Size = System::Drawing::Size(100, 100);
			this->pole6->TabIndex = 8;
			this->pole6->TabStop = false;
			this->pole6->Click += gcnew System::EventHandler(this, &Game::pole6_Click);
			// 
			// pole5
			// 
			this->pole5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole5.Image")));
			this->pole5->Location = System::Drawing::Point(130, 130);
			this->pole5->Name = L"pole5";
			this->pole5->Size = System::Drawing::Size(100, 100);
			this->pole5->TabIndex = 7;
			this->pole5->TabStop = false;
			this->pole5->Click += gcnew System::EventHandler(this, &Game::pole5_Click);
			// 
			// pole4
			// 
			this->pole4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole4.Image")));
			this->pole4->Location = System::Drawing::Point(30, 130);
			this->pole4->Name = L"pole4";
			this->pole4->Size = System::Drawing::Size(100, 100);
			this->pole4->TabIndex = 6;
			this->pole4->TabStop = false;
			this->pole4->Click += gcnew System::EventHandler(this, &Game::pole4_Click);
			// 
			// pole9
			// 
			this->pole9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole9.Image")));
			this->pole9->Location = System::Drawing::Point(230, 230);
			this->pole9->Name = L"pole9";
			this->pole9->Size = System::Drawing::Size(100, 100);
			this->pole9->TabIndex = 11;
			this->pole9->TabStop = false;
			this->pole9->Click += gcnew System::EventHandler(this, &Game::pole9_Click);
			// 
			// pole8
			// 
			this->pole8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole8.Image")));
			this->pole8->Location = System::Drawing::Point(130, 230);
			this->pole8->Name = L"pole8";
			this->pole8->Size = System::Drawing::Size(100, 100);
			this->pole8->TabIndex = 10;
			this->pole8->TabStop = false;
			this->pole8->Click += gcnew System::EventHandler(this, &Game::pole8_Click);
			// 
			// pole7
			// 
			this->pole7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pole7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pole7.Image")));
			this->pole7->Location = System::Drawing::Point(30, 230);
			this->pole7->Name = L"pole7";
			this->pole7->Size = System::Drawing::Size(100, 100);
			this->pole7->TabIndex = 9;
			this->pole7->TabStop = false;
			this->pole7->Click += gcnew System::EventHandler(this, &Game::pole7_Click);
			// 
			// turn
			// 
			this->turn->AutoSize = true;
			this->turn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->turn->Location = System::Drawing::Point(166, 360);
			this->turn->Name = L"turn";
			this->turn->Size = System::Drawing::Size(64, 29);
			this->turn->TabIndex = 12;
			this->turn->Text = L"Turn";
			// 
			// turnico
			// 
			this->turnico->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"turnico.Image")));
			this->turnico->Location = System::Drawing::Point(130, 360);
			this->turnico->Name = L"turnico";
			this->turnico->Size = System::Drawing::Size(30, 30);
			this->turnico->TabIndex = 13;
			this->turnico->TabStop = false;
			// 
			// restart
			// 
			this->restart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->restart->Location = System::Drawing::Point(130, 420);
			this->restart->Name = L"restart";
			this->restart->Size = System::Drawing::Size(100, 40);
			this->restart->TabIndex = 14;
			this->restart->Text = L"Restart";
			this->restart->UseVisualStyleBackColor = true;
			this->restart->Click += gcnew System::EventHandler(this, &Game::restart_Click);
			// 
			// Game
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(360, 491);
			this->Controls->Add(this->restart);
			this->Controls->Add(this->turnico);
			this->Controls->Add(this->turn);
			this->Controls->Add(this->pole9);
			this->Controls->Add(this->pole8);
			this->Controls->Add(this->pole7);
			this->Controls->Add(this->pole6);
			this->Controls->Add(this->pole5);
			this->Controls->Add(this->pole4);
			this->Controls->Add(this->pole3);
			this->Controls->Add(this->pole2);
			this->Controls->Add(this->pole1);
			this->Name = L"Game";
			this->Text = L"Tic-Tac-Toe";
			this->Load += gcnew System::EventHandler(this, &Game::Game_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pole7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->turnico))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Game_Load(System::Object^  sender, System::EventArgs^  e) {
	p1 = 'b';	p2 = 'b';	p3 = 'b';
	p4 = 'b';	p5 = 'b';	p6 = 'b';
	p7 = 'b';	p8 = 'b';	p9 = 'b';

	who = 'o';
}

private: System::Void pole1_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p1 == 'b') {
		if (who == 'o') {
			pole1->Image = Image::FromFile(L"O.png");
			p1 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole1->Image = Image::FromFile(L"X.png");
			p1 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole1->Enabled = false;
		checkWin();
	}
}

private: System::Void pole2_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p2 == 'b') {
		if (who == 'o') {
			pole2->Image = Image::FromFile(L"O.png");
			p2 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole2->Image = Image::FromFile(L"X.png");
			p2 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole2->Enabled = false;
		checkWin();
	}
}
private: System::Void pole3_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p3 == 'b') {
		if (who == 'o') {
			pole3->Image = Image::FromFile(L"O.png");
			p3 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole3->Image = Image::FromFile(L"X.png");
			p3 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole3->Enabled = false;
		checkWin();
	}
}
private: System::Void pole4_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p4 == 'b') {
		if (who == 'o') {
			pole4->Image = Image::FromFile(L"O.png");
			p4 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole4->Image = Image::FromFile(L"X.png");
			p4 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole4->Enabled = false;
		checkWin();
	}
}
private: System::Void pole5_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p5 == 'b') {
		if (who == 'o') {
			pole5->Image = Image::FromFile(L"O.png");
			p5 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole5->Image = Image::FromFile(L"X.png");
			p5 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole5->Enabled = false;
		checkWin();
	}
}
private: System::Void pole6_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p6 == 'b') {
		if (who == 'o') {
			pole6->Image = Image::FromFile(L"O.png");
			p6 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole6->Image = Image::FromFile(L"X.png");
			p6 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole6->Enabled = false;
		checkWin();
	}
}
private: System::Void pole7_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p7 == 'b') {
		if (who == 'o') {
			pole7->Image = Image::FromFile(L"O.png");
			p7 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole7->Image = Image::FromFile(L"X.png");
			p7 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole7->Enabled = false;
		checkWin();
	}
}
private: System::Void pole8_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p8 == 'b') {
		if (who == 'o') {
			pole8->Image = Image::FromFile(L"O.png");
			p8 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole8->Image = Image::FromFile(L"X.png");
			p8 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole8->Enabled = false;
		checkWin();
	}
}
private: System::Void pole9_Click(System::Object^  sender, System::EventArgs^  e) {
	if (p9 == 'b') {
		if (who == 'o') {
			pole9->Image = Image::FromFile(L"O.png");
			p9 = 'o';
			who = 'x';
			turnico->Image = Image::FromFile(L"Xsmall.png");
		}
		else {
			pole9->Image = Image::FromFile(L"X.png");
			p9 = 'x';
			who = 'o';
			turnico->Image = Image::FromFile(L"Osmall.png");
		}
		pole9->Enabled = false;
		checkWin();
	}
}
void resetGame() {
	pole1->Image = Image::FromFile(L"blank.png");
	pole1->Enabled = true;
	pole2->Image = Image::FromFile(L"blank.png");
	pole2->Enabled = true;
	pole3->Image = Image::FromFile(L"blank.png");
	pole3->Enabled = true;
	pole4->Image = Image::FromFile(L"blank.png");
	pole4->Enabled = true;
	pole5->Image = Image::FromFile(L"blank.png");
	pole5->Enabled = true;
	pole6->Image = Image::FromFile(L"blank.png");
	pole6->Enabled = true;
	pole7->Image = Image::FromFile(L"blank.png");
	pole7->Enabled = true;
	pole8->Image = Image::FromFile(L"blank.png");
	pole8->Enabled = true;
	pole9->Image = Image::FromFile(L"blank.png");
	pole9->Enabled = true;
	turnico->Image = Image::FromFile(L"Osmall.png");

	p1 = 'b';	p2 = 'b';	p3 = 'b';
	p4 = 'b';	p5 = 'b';	p6 = 'b';
	p7 = 'b';	p8 = 'b';	p9 = 'b';
	who = 'o';
	}
private: System::Void restart_Click(System::Object^  sender, System::EventArgs^  e) {
	resetGame();
}
};
}
