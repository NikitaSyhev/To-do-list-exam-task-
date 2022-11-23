#pragma once
#include <string>

void show_menu(); // вывод изначального меню 

void add_note(std::string&);//добавить заметку


void add_note_status(std::string& str);

void show_note();  // показать список задач
void delete_all_notes(); //удалить заметку


std::string* find_one_note(const std::string& note_to_find, int& n_count);
