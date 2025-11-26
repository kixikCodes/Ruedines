#!/bin/sh

# git clone https://github.com/kixikCodes/Ruedines && cd Ruedines/ && sudo ./install.sh

echo Installating...
./build.sh
cp ./ruedines.h ../ruedines.h
cp ./ruedines.a ../ruedines.a
cp ./README.md ../README.md
cp ./compile.sh /usr/local/bin/compile
cd ..
rm -rf Ruedines/
echo Installation Complete.
