#!/bin/bash

if [ "$1" == "-d" ]; then
    [ -f "./debug.cpp" ] && rm "./debug.cpp"
    [ -f "./prod.cpp" ] && rm "./prod.cpp"
    echo "COMPILING DEBUG"
    cp ./source.cpp ./debug.cpp
    g++ -o ./builds/debug ./debug.cpp
    echo FINISHED
    ./builds/debug
fi

if [ "$1" == "-p" ]; then
    [ -f "./debug.cpp" ] && rm "./debug.cpp"
    [ -f "./prod.cpp" ] && rm "./prod.cpp"
    echo "COMPILING PROD"
    tail -n +2 ./source.cpp >> prod.cpp
    g++ -o ./builds/prod ./prod.cpp
    echo FINISHED, LAUNCHING PROD
    ./builds/prod

fi