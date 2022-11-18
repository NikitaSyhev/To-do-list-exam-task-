#include <iostream>
#include "TaskManager.h"
#include <fstream>
#include <ctime>
#include <string>




void show_menu() {
	
	std::cout << "Выберите действие:" << "\n\n";
	std::cout << "1. Добавить задачу в свой список." << '\n';
	std::cout << "2. Посмотреть список задач." << '\n';
	std::cout << "3. Найти задачу и работать с ней." << '\n';
	std::cout << "4. Очистить список задач." << '\n';
	std::cout << "5. Выход из программы." << '\n';
}

void add_note(std::string& str) {     //здесь нужно сделать дату ( дедлайн ), который не отображается
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
			for (int i = 1; !in.eof(); i++) {
				getline(in, str);
				if (str.empty())
					continue;
				std::cout << i << ". " << str << '\n';
			}
		}
		else
		std::cout << "Задачи еще не добавлены.\n";
		in.close();
}

void delete_all_notes() {
	remove("file.txt");
}

std::string* find_one_note( std::string& note_to_find) {
	return 0;
}

void edit_notes() {

	std::ifstream in;
	in.open("file.txt");
	std::string str;
	if (in.is_open()) {
		for (int i = 1; !in.eof(); i++) {
			getline(in, str);
			if (str.empty())
				continue;
			std::cout << i << ". " << str << '\n';
		}
	}
	else
		std::cout << "Задачи еще не добавлены.\n";
	in.close();


	std::cout << "Выберете заметку, которую хотите редактировать / удалить.\n";
	std::string notes;
	std::cin >> notes;

	std::ifstream in;

	in.open("file.txt");
	std::getline(in, notes);
	if (in.is_open()) {
		while (!in.eof()) { // пока курсор не в конце файла

			in >> notes; // запись слова из файла в строку
			std::cout << notes << '\n'; // вывод содержимого файла
		}
	}
	else
		std::cout << "File opening error\n";
	in.close();

}