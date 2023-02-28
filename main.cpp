#include "Leaver.h"

#include <iostream>
#include <Windows.h>


int main() {
	setlocale(LC_ALL, "ru");
	std::cout << "Простое прощание :)\n" << std::endl;

	LeaverLibraryDinamic::Leaver leaver;
	std::string name;

	std::cout << "Введите имя: ";
	SetConsoleCP(1251);
	std::cin >> name;
	SetConsoleCP(866);

	std::cout << leaver.leave(name) << std::endl;

	system("pause > nul");
	return 0;
}