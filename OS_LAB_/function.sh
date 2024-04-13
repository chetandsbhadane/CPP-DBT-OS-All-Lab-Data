#!/bin/bash


myFun () {
	echo "okbye!"
}

myFun

#arr
add () {
	
	num1=$1
	num2=$2
	let sum=$num1+$num2
	echo "$sum"
}

add 10 20
