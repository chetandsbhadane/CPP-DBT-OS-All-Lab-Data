#!/bin/bash
<<com
A data file file has some student records including rollno, names and subject marks. The fields are separated by a “:”. 
Write a shell script that accepts roll number from the user, searches it in the file and if the roll number is present - allows the user to modify name and marks in 3 subjects. 
If the roll number is not present, display a message “Roll No Not Found”. Allow the user to modify one record at a time. 
com

echo "Enter a roll number that wanted to search"
read rollno

grep -e "$rollno" test.txt
