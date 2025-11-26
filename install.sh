#!/bin/sh

# git clone https://github.com/kixikCodes/Ruedines && cd Ruedines/ && sudo ./install.sh && cd ..

echo Installating...
./build.sh
cp ./ruedines.h ../ruedines.h
cp ./ruedines.a ../ruedines.a
cp ./README.md ../README.md
cp ./run.sh /usr/local/bin/run
cd ..
rm -rf Ruedines/
mkdir ruedines
mv ./ruedines.h ./ruedines/ruedines.h
mv ./ruedines.a ./ruedines/ruedines.a
echo Installation Complete.
