#include <iostream>
#include "TaskManager.h"
#include <fstream>





void show_menu() {
	std::cout << "�������� ��������:" << "\n\n";
	std::cout << "1. �������� ������ � ���� ������." << '\n';
	std::cout << "2. ���������� ������ �����." << '\n';
	std::cout << "3. �������� ������ �����." << '\n';
}

void add_note(std::string str) {     //����� ����� ������� ���� ( ������� ), ������� �� ������������
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
			while (getline(in, str))
				std::cout << str << '\n';
		}
		else
		std::cout << "������ ��� �� ���������.\n";
		in.close();
}

