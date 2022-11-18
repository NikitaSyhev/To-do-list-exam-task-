
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
#include <windows.h>
#include <cstdlib>       //��� �� ����������

int main() {

	using std::string;
	int user_menu;
	string note;

	SYSTEMTIME st;
	GetLocalTime(&st);
	std::cout << "Today's date: \n";
	std::cout << "Month:" << st.wMonth << '\n';
	std::cout << "Date:" << st.wDay << '\n';
	std::cout << "\n\n";

	
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
		
		edit_notes();
		
		break;
	case 4:
		std::cout << "�� �������� ������ ���� �����.\n";
		delete_all_notes();break;
	case 5:
		std::cout << "������ ��������� ���������. �������� � ��������� ���!\n";break;
	
	default:std::cout << "�� ������� ������������ ����� ����.\n";
	};
	

	




















	return 0;
}
/*std::getline(std::cin, note_to_find);
std::cout << "����� � ����� �����:";
std::getline(std::cin, note_to_find);

int n_found = 0;

std::string** found_notes = find_one_note(note_to_find, n_found);

std::cout << "��������� ������: \n";
for (int i = 0; i < n_found; i++)
	std::cout << **(found_notes + i) << '\n';
	*/