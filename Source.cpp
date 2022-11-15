
//Примерно видение программы: создание различных элементов списка, каждый из которых представляет из себя какую либо задача с установленными
//сроками выполнения. Сроки скрыты, но они отображатся при выборе элемента списка. 
// Возможности: добавить элемент в список, пользователь видет задачу и дату выполения, выбрать элемент ( отметить как выполненную, изменить,
// изменить содержание задачи, удалить задачу и вернуться к общему списку ). Очистить список.
//возможно сделать воркспейсы ( группы программ ). Например: рабочие задачи. Личные и т д .





#include <iostream>
#include <string>
#include "TaskManager.h"
#include <fstream>
#include <ctime>
#include <windows.h>

int main() {
	int user_menu;
	std::string note;
	SYSTEMTIME st;
	GetLocalTime(&st);
	std::cout << "Today's date: \n";
	std::cout << "Month:" << st.wMonth << '\n';
	std::cout << "Date:" << st.wDay << '\n';
	std::cout << "\n\n";

	
	setlocale(LC_ALL, "Russian");
	std::cout << "Welcome to Your Task Manager!\nЗдесь ты можешь вести учет выполненных дел, добавлять новые задачи, контролировать дедлайны.\n\n";
	show_menu();
	std::cout << "Выберете пункт меню: ";
	std::cin >> user_menu;

	std::cout << "\n";

	switch (user_menu) {
	case 1:

		std::getline(std::cin, note);
		std::cout << " Добавьте задачу: ";
		std::getline(std::cin, note);
		add_note(note);
	
		break;
	case 2:
		std::cout << "Вы видите список задач:\n";
		show_note();break;
	case 3:
		std::cout << "Вы очистили список всех \n";
		delete_all_notes();break;
	case 4:
		std::cout << "Работа программы завершена. Увидимся в следующий раз!\n";break;
	};
	

	

	




















	return 0;
}