#!/bin/bash

day=$(date +%u)

if [ $day -ge 1 ] && [ $day -le 5 ]; then
	echo "Today is a working day"
else
	echo "Today is not a working day"
fi
