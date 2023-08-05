#include <iostream>
#include "taskmaster.h"

void TaskMaster::addTask(const std::string& title) {
    tasks.push_back(Task(title));
}

void TaskMaster::markTaskDone(int index) {
    if (index < 0 || index >= tasks.size()) {
        std::cout << "Invalid task number.\n";
        return;
    }
    tasks[index].markDone();
}

void TaskMaster::removeTask(int index) {
    if (index < 0 || index >= tasks.size()) {
        std::cout << "Invalid task number.\n";
    }
    tasks.erase(tasks.begin() + index);
}

void TaskMaster::displayTasks() const {
    for (int i = 0; i < tasks.size(); i++) {
        std::cout << i + 1 << "." << tasks[i].getTitle();
        if (tasks[i].isDone()) {
            std::cout << " (done)";
        }
        std::cout << "\n";
    }
}