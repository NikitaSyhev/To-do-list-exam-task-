#pragma once
#include <string>

void show_menu(); // ����� ������������ ���� 

void add_note(std::string&);//�������� �������


void add_note_status(std::string& str);

void show_note();  // �������� ������ �����
void delete_all_notes(); //������� �������



std::string* find_one_note( std::string& note_to_find);

void edit_notes();