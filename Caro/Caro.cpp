#include "Menu.h"
#include "Board.h"
#include "Game.h"
int main() {
	system("color FA");
	SetConsole(1120, 720);
	LoadingGame();
	menu();
	system("pause");
	return 0;
}
