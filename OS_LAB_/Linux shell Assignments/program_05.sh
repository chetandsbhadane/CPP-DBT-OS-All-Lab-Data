#!/bin/bash
#program 5 - Write a script that accepts a member into MBT health club, if the weight of the person is withing the range of 30-250 Kgs.

echo "Enter your weight for enroll in MBT health club"
read weight

if [ $weight -ge 30 ] && [ $weight -le 250 ]
then
	echo "Welcome to health club!"
else
	echo "Not accepted..."
fi


