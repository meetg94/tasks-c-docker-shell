#include <string>

class Task {
public:
    Task(std::string title);

    void markDone();
    
    std::string getTitle() const;
    
    bool isDone() const;

private:
    std::string title;
    bool done;
};
