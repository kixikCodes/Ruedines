#!/bin/sh

gcc -c ruedines.c -o ruedines.o && ar rcs ruedines.a ruedines.o && rm ruedines.o
echo Built Library Succesfully.
