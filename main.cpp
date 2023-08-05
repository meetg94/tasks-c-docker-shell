#include <iostream>
#include <limits>
#include "taskmaster.h"

int main() {
    TaskMaster taskMaster;
    int choice;

    do {
        std::cout << "\nTaskMaster Menu:\n";
        std::cout << "1. Add task\n";
        std::cout << "2. Mark task as done\n";
        std::cout << "3. Remove task\n";
        std::cout << "4. View tasks\n";
        std::cout << "0. Quit\n";
        std::cout << "Enter your choice: ";

        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                std::string title;
                std::cout << "Enter task title: ";
                std::getline(std::cin, title);
                taskMaster.addTask(title);
                break;
            }
            case 2: {
                int index;
                std::cout << "Enter task number: ";
                std::cin >> index;
                taskMaster.markTaskDone(index - 1);
                break;
            }
            case 3: {
                int index;
                std::cout << "Enter task number: ";
                std::cin >> index;
                taskMaster.removeTask(index - 1);
                break;
            }
            case 4: {
                std::cout << "\nTasks:\n";
                taskMaster.displayTasks();
                break;
            }
            default:
                break;
        }
    } while (choice != 0);

    return 0;
}
