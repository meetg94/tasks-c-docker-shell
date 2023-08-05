# Start from a base image with gcc installed
FROM gcc:latest

# Set the working directory in the container to /app
WORKDIR /app

# Copy the current directory contents into the container at /app
COPY . /app

# Compile the C++ application
RUN g++ -o TaskMaster main.cpp task.cpp taskmaster.cpp

# Command to run when the container starts
CMD ["./TaskMaster"]