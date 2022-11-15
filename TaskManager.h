#pragma once
#include <iostream>
#include <string>
#include <ctime>

void show_menu(); // вывод изначального меню 

void add_note(std::string);//добавить заметку

void show_note();  // показать список задач
void delete_all_notes(); //удалить заметку