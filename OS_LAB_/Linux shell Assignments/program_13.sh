<<com
13	Create a library of shell functions to do the followings:
Function to concatenate 2 strings. Pass 2 strings as parameters to function.
Function to find out the length of a given string, Pass string as a parameter to function.
Function to compare the two strings. Pass 2 strings as parameters to function.
Function to check if string is palindrome or not. Pass string as a parameter to function.
Function to print given string in reverse order. Pass string as a parameter to function
com

conc () {

	str1=$1
	str2=$2
	echo "concatenation - $str1$str2"
}

conc che tan

leng () {

	str="chetan"
	len=${#str}
	echo "length of the string is $len"
}
leng

com () {
	str1=$1
	str2=$2
	if [ $str1 == $str2 ]
	then
		echo "Strings are equal"
	else
		echo "Not equal"
	fi
}
com abc abc

pali () {
	
	str1="nayan"
	if [ "$(rev<<<$str1)" == $str1 ]
	then 
		echo "Pallindrome"
	else
		echo "not palli"
	fi
	
}
pali
