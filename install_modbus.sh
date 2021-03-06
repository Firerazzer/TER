#!/bin/bash

if [ "$EUID" -ne 0 ]
  			then echo "Please run as root"
  			exit
fi

echo "libmodbus and autoconf will be intalled, do you want to install ? [y/n] :"
read -p "" rep
if [ "$rep" != "y" ]; then
	exit

if ! [ -x "$(command -v autoconf)" ]; then
	sudo apt-get install autoconf
fi

git clone https://github.com/stephane/libmodbus.git /tmp/modbus
cd /tmp/modbus
./autogen.sh
./configure
sudo make install