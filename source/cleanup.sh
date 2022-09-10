#!/usr/bin/bash

# The following script deletes the all unecessary *.out files 

echo "(Master) >> Cleaning up .out files"

echo "[✓] Running up the clean up script "
sleep 2
rm -r *.exe 2> /dev/null
rm -r *.out 2> /dev/null

echo "[✓] Clean was sucessful"
