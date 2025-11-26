#!/bin/sh

echo Installating...
git clone https://github.com/kixikCodes/Ruedines
cd Ruedines/
./build.sh
cp ./ruedines.a ../ruedines.a
cp ./README.md ../README.md
cp ./compile ~/bin/compile
export PATH=$PATH:~/bin
cd ..
rm -rf Ruedines/
echo Installation Complete.
rm ./install.sh
