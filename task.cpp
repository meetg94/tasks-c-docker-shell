#include "task.h"

Task::Task(std::string title) : title(title), done(false) {}

void Task::markDone() {
    done = true;
}

std::string Task::getTitle() const {
    return title;
}

bool Task::isDone() const {
    return done;
}
