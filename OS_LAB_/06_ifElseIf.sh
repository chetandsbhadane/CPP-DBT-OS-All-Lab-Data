#!/bin/bash

echo "enter no. "
read a

if [ $a -gt 0 ] && [ $a -lt 18 ]
then
	echo "cant drive - Driving liscence Required"
elif [ $a == 18 ]
then
	echo "can drive but Learning required"
else
	echo "Your Welcome to use vehicle but with helmet"
fi
