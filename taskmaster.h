#include <vector>
#include "task.h"

class TaskMaster {
    public:
        void addTask(const std::string& title);
        void markTaskDone(int index);
        void removeTask(int index);
        void displayTasks() const;

    private:
        std::vector<Task> tasks;
};