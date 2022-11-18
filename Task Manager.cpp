#include <iostream>
#include "TaskManager.h"
#include <fstream>
#include <ctime>
#include <string>




void show_menu() {
	
	std::cout << "�������� ��������:" << "\n\n";
	std::cout << "1. �������� ������ � ���� ������." << '\n';
	std::cout << "2. ���������� ������ �����." << '\n';
	std::cout << "3. ����� ������ � �������� � ���." << '\n';
	std::cout << "4. �������� ������ �����." << '\n';
	std::cout << "5. ����� �� ���������." << '\n';
}

void add_note(std::string& str) {     //����� ����� ������� ���� ( ������� ), ������� �� ������������
	std::string path = "file.txt";
	std::ofstream out;
	out.open(path, std::ios::app);
	if (out.is_open()) {
		out << str << '\n';
	}
	else
		std::cout << "������ ���������� ������.\n";

	out.close();

	std::cout << "������ ���������.\n";
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
		std::cout << "������ ��� �� ���������.\n";
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
		std::cout << "������ ��� �� ���������.\n";
	in.close();


	std::cout << "�������� �������, ������� ������ ������������� / �������.\n";
	std::string notes;
	std::cin >> notes;

	std::ifstream in;

	in.open("file.txt");
	std::getline(in, notes);
	if (in.is_open()) {
		while (!in.eof()) { // ���� ������ �� � ����� �����

			in >> notes; // ������ ����� �� ����� � ������
			std::cout << notes << '\n'; // ����� ����������� �����
		}
	}
	else
		std::cout << "File opening error\n";
	in.close();

}