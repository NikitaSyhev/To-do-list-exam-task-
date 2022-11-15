#include <iostream>
#include "TaskManager.h"
#include <fstream>





void show_menu() {
	std::cout << "Выберите действие:" << "\n\n";
	std::cout << "1. Добавить задачу в свой список." << '\n';
	std::cout << "2. Посмотреть список задач." << '\n';
	std::cout << "3. Очистить список задач." << '\n';
}

void add_note(std::string str) {     //здесь нужно сделать дату ( дедлайн ), который не отображается
	std::string path = "file.txt";
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << str << '\n';
	}
	else
		std::cout << "Ошибка добавления задачи.\n";

	out.close();

	std::cout << "Задача добавлена.\n";
}

void show_note() {
		std::ifstream in;
		in.open("file.txt");
		std::string str;
		if (in.is_open()) {
			while (getline(in, str))
				std::cout << str << '\n';
		}
		else
		std::cout << "Задачи еще не добавлены.\n";
		in.close();
}

