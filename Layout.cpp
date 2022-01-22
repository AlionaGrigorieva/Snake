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
}

//Game events realization

void Snake::Layout::GeneratePositionFruit()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::Eating()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::Movement()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::EatYourself()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::GameOver()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::NewGame()
{
	throw gcnew System::NotImplementedException();
}

void Snake::Layout::ChackBorders()
{
	throw gcnew System::NotImplementedException();
}
