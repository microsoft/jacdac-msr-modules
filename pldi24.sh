#!/bin/bash
mkdir -p pldi24
cp jacdac-c/jacdac/dist/services.json pldi24/services.json
find built -regex '.*\/services\/.*\.o' -o -regex '.*\/drivers\/.*\.o' | xargs arm-none-eabi-size > pldi24/binsizes.txt
find jacdac-c -regex '.*\/services\/.*\.c' -o -regex '.*\/drivers\/.*\.c'| xargs wc > pldi24/srcsizes.txt
node pldi24-stats.js

