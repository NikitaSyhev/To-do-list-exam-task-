#pragma once
#include <string>

void show_menu(); // вывод изначального меню 

void add_note(std::string&);//добавить заметку

void show_note();  // показать список задач
void delete_all_notes(); //удалить заметку



std::string* find_one_note( std::string& note_to_find);

void edit_notes();