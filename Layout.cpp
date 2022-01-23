#include "Layout.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Snake::Layout form;
	Application::Run(% form);
}

//Structure for 2d
struct Vector2 {
	int X, Y;
};

Vector2 direction;
Vector2 positionFruit;
Vector2 gameArea;

//Constructor
inline Snake::Layout::Layout(void)
{
	InitializeComponent();

	gameArea.X = 558;
	gameArea.Y = 570;

	firstLaunch = true;
	NewGame();
}

//Game events realization
void Snake::Layout::GeneratePositionFruit()
{
	Random^ rand = gcnew Random();
	positionFruit.X = rand->Next(10, gameArea.X);
	positionFruit.Y = rand->Next(90, gameArea.Y);

	for (int i = 0; i < score; i++) {
		if (positionFruit.X == Serpens[i]->Location.X || positionFruit.Y == Serpens[i]->Location.Y)
			GeneratePositionFruit();
	}

	int tempX = positionFruit.X % step;
	positionFruit.X -= tempX;
	int tempY = positionFruit.Y % step;
	positionFruit.Y -= tempY;

	fruit->Location = Point(positionFruit.X, positionFruit.Y);

	this->Controls->Add(fruit);
}

void Snake::Layout::Eating()
{
	if (Serpens[0]->Location.X == positionFruit.X && Serpens[0]->Location.Y == positionFruit.Y) 
	{
		textBoxScore->Text = (++score).ToString();

		Serpens[score] = gcnew PictureBox();
		Serpens[score]->Location = Point(Serpens[score - 1]->Location.X + step * direction.X, Serpens[score - 1]->Location.Y - step * direction.Y);
		Serpens[score]->BackColor = Color::Red;
		Serpens[score]->Width = step;
		Serpens[score]->Height = step;
		this->Controls->Add(Serpens[score]);

		GeneratePositionFruit();
	}
}

void Snake::Layout::Movement()
{
	for (int i = score; i >= 1; i--)
	{
		Serpens[i]->Location = Serpens[i - 1]->Location;
	}
	Serpens[0]->Location = Point(Serpens[0]->Location.X + direction.X * step, Serpens[0]->Location.Y + direction.Y * step);
}

void Snake::Layout::EatYourself()
{
	for (int i = 1; i < score; i++) {
		if (Serpens[0]->Location == Serpens[i]->Location) {
			GameOver();
		}
	}
}

void Snake::Layout::GameOver()
{
	play = true;
	die = true;

	labelGameOver->Visible = true;
}

void Snake::Layout::NewGame()
{
	if (!firstLaunch)
	{
		this->Controls->Remove(fruit);

		for (int i = 0; i <= score; i++)
		{
			this->Controls->Remove(Serpens[i]);
		}
		score = 0;
	}
	else
		firstLaunch = false;

	Serpens = gcnew array <PictureBox^, 1>(400);
	Serpens[0] = gcnew PictureBox();
	Serpens[0]->Location = Point(200, 200);
	Serpens[0]->BackColor = Color::Green;
	Serpens[0]->Width = step;
	Serpens[0]->Height = step;

	score = 0;
	this->Controls->Add(Serpens[0]);

	fruit = gcnew PictureBox();
	fruit->BackColor = Color::Yellow;
	fruit->Width = step;
	fruit->Height = step;
	GeneratePositionFruit();

	timer->Interval = updateInterval;
	timer->Start();

	direction.X = 1;
	direction.Y = 0;

	play = true;
	die = false;

	textBoxScore->Text = "0";

	labelGameOver->Visible = false;
	groupBoxSettings->Visible = false;
}

void Snake::Layout::ChackBorders()
{
	if (Serpens[0]->Location.X >= pictureBoxRightLimit->Location.X || Serpens[0]->Location.X <= pictureBoxLeftLimit->Location.X)
		GameOver();
	if (Serpens[0]->Location.Y >= pictureBoxUpperLimit->Location.Y || Serpens[0]->Location.Y <= pictureBoxBottomLimit->Location.X)
		GameOver();
}

//Button push handler realization
System::Void Snake::Layout::buttonApply_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::menuToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::newGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::pauseContinueToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::settingsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::aboutGameToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

System::Void Snake::Layout::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
	return System::Void();
}

//Key down handler realization
System::Void Snake::Layout::Layout_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
	return System::Void();
}

//Update game realization
void Snake::Layout::GameForm_Update(Object^ object, EventArgs^ e)
{
	throw gcnew System::NotImplementedException();
}
