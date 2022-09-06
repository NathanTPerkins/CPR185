#!/bin/bash

read -p "[What is the name of your new lesson]:: " lesson_name

cd ~/CLionProjects/CPR185/
mkdir "$lesson_name"
cd ./$lesson_name
mkdir build
mkdir src
touch CMakeLists.txt