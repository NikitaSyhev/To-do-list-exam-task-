#pragma once
#include <string>

void show_menu(); // ����� ������������ ���� 

void add_note(std::string&);//�������� �������

void show_note();  // �������� ������ �����
void delete_all_notes(); //������� �������



std::string* find_one_note( std::string& note_to_find);

void edit_notes();