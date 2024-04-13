#!/bin/bash

#Write a shell script that greets the user with an appropriate message depending on the system time.
date=$(date '+%H')
if (( date > 00 && date < 12 ))
then
	echo "Good Morning!"
elif (( date > 12 && date < 16 ))
then
	echo "Good Afternoon"
elif (( date > 16 && date < 20 ))
then
	echo "Good Evening!"
else
	echo "Good Night!"
fi
