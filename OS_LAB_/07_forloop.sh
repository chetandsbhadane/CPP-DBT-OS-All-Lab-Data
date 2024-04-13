#!/bin/bash

#One for loop but less in use
<<for1
for i in 2 4 6 8 10
do
	echo "#i"
done 
for1

#second for loop most used
for((i=0;i<=10;i++))
do
	echo "$i"
done
