#!/bin/bash

echo "Checking file abc.txt."
expec="$(sha256sum abc.txt)"
myout="$(./sha256 abc.txt)  abc.txt"
echo "Expected: " $expec
echo "Output:   " $myout
if [[ $myout == $expec ]]; then
    echo "Pass"
else
    echo "Fail"
fi

echo "Checking file empty.txt."
expec="$(sha256sum empty.txt)"
myout="$(./sha256 empty.txt)  empty.txt"
echo "Expected: " $expec
echo "Output:   " $myout
if [[ $myout == $expec ]]; then
    echo "Pass"
else
    echo "Fail"
fi