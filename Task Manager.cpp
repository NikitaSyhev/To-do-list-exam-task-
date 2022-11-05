#include <iostream>
#include "TaskManager.h"
#include <fstream>

int menu(int x) {
	switch (x) {
	case 1:
		std::cout << "Добавьте задачу:\n";
		return 1;
	case 2:
		std::cout << "Вы выбрали задачу:\n";
		return 2;
	case 3:
		std::cout << "Вы очистили список:\n";
		return 3;
	}
}