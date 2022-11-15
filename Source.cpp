
//�������� ������� ���������: �������� ��������� ��������� ������, ������ �� ������� ������������ �� ���� ����� ���� ������ � ��������������
//������� ����������. ����� ������, �� ��� ����������� ��� ������ �������� ������. 
// �����������: �������� ������� � ������, ������������ ����� ������ � ���� ���������, ������� ������� ( �������� ��� �����������, ��������,
// �������� ���������� ������, ������� ������ � ��������� � ������ ������ ). �������� ������.
//�������� ������� ���������� ( ������ �������� ). ��������: ������� ������. ������ � � � .





#include <iostream>
#include <string>
#include "TaskManager.h"
#include <fstream>
#include <ctime>

int main() {
	int user_menu;
	std::string note;

	
	setlocale(LC_ALL, "Russian");
	std::cout << "Welcome to Your Task Manager!\n����� �� ������ ����� ���� ����������� ���, ��������� ����� ������, �������������� ��������.\n\n";
	show_menu();
	std::cout << "�������� ����� ����: ";
	std::cin >> user_menu;

	std::cout << "\n";

	switch (user_menu) {
	case 1:
		
		std::getline(std::cin, note);
		std::cout << " �������� ������: ";
		std::getline(std::cin, note);
		add_note(note);
	
		break;
	case 2:
		std::cout << "�� ������ ������ �����:\n";
		show_note();break;
	case 3:
		std::cout << "�� �������� ������ ���� \n";
		delete_all_notes();break;
	};

	




















	return 0;
}