#!/bin/bash

# Build the Docker image
docker build -t taskmaster .

# Run the Docker container
docker run -it taskmaster
