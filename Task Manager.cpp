#include <iostream>
#include "TaskManager.h"
#include <fstream>

int menu(int x) {
	switch (x) {
	case 1:
		std::cout << "�������� ������:\n";
		return 1;
	case 2:
		std::cout << "�� ������� ������:\n";
		return 2;
	case 3:
		std::cout << "�� �������� ������:\n";
		return 3;
	}
}