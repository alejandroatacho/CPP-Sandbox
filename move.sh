#!/bin/bash

cd sandbox

if [ -z "$(ls -A *.exe)" ]; then
echo "No .exe files found."
else
mv *.exe output/
fi

if [ -z "$(ls -A *.dll)" ]; then
echo "No .dll files found."
else
mv *.dll output/
fi