#!/usr/bin/bash

echo "[+] Building the project....."
# sleep 1
echo "[+] Checking the compiler version..."
# sleep 2
g++ --version >/dev/null

echo "[*] Linking source files"
# sleep 1
echo "[✓] Lined source files"
echo "[*] Compling the project...."
g++ main.cpp source/Employee.cpp  source/ReadCSV.cpp  source/PersonalData.cpp -o Taxify.out 

# sleep 2
echo "[✓] Project has been sucessfully compiled..."
