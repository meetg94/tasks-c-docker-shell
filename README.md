---

# TaskMaster

TaskMaster is a command-line task management application written in C++. The application allows users to add, mark as done, remove, and view tasks. The project demonstrates proficiency in C++, Docker, and Shell Scripting.

## Features

- **Add a task**: Users can add a new task by specifying a task name.
- **Mark a task as done**: Users can mark an existing task as done.
- **Remove a task**: Users can remove an existing task.
- **View all tasks**: Users can view a list of all tasks, including their done status.

## Prerequisites

- Docker: You need Docker to build and run the Docker container. You can download Docker from the [official website](https://www.docker.com/products/docker-desktop).

## Getting Started

1. Clone this repository: `git clone <repository-url>`.
2. Navigate into the project directory: `cd <project-directory>`.
3. Run the shell script: `./run.sh`.

The shell script will build a Docker image of the application and then run a Docker container from that image. The application will start running inside the Docker container.

## Technologies Used

- **C++**: The application is written in C++.
- **Docker**: The application is Dockerized for easy and consistent deployment.
- **Shell Scripting**: A shell script is included to automate the Docker build and run process.

## Future Improvements

The following improvements could be made in future versions of the application:

- Allow the user to edit the title of a task.
- Add a priority or a due date to each task.
- Save and load tasks from a file.

---