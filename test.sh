#!/bin/bash

if [ ! -f bin/libmlogger.a ]; then
	python3 build.py
fi

g++ -Lbin -o test src/main.cpp -lmlogger

chmod +x test

./test
