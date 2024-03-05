#!/bin/sh
make
mkdir -p pldi24
cp jacdac-c/jacdac/dist/services.json pldi24
find built -name '*.o' | xargs arm-none-eabi-size > pldi24/binsizes.txt
find jacdac-c -name '*.c' | xargs wc > pldi24/srcsizes.txt
node pldi24-stats.js
