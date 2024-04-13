<<com
Add some student records in the “student” file manually. The fields to be considered are “RollNo”, “Name”, “Marks_Hindi”, “Marks_Maths”, “Marks_Physics”.
 Write a script which does the following 
a	If the roll number already exists, then store the record and the following message 
“roll number exists” in a log file “log1”.
b	If the marks in the subjects is not in the range of 1 – 99 then store such a record followed by a message “marks out of range” in “log1”
c	If the data is valid, the calculate total, percentage, grade and display on the terminal
com

echo "Enter Roll NUmber:"
read roll_number

if grep -q "^$roll_number " student.txt; then
	echo "$roll_number" exists >> log1.txt
	exit
fi

echo "Enter name:"
read name
echo "Enter Marks in hindi"
read m_hindi
echo "Enter marks in maths"
read m_maths
echo "Enter marks in physics"
read m_phy

if (( m_hindi < 1 || m_hindi > 99 || m_maths < 1 || m_maths > 99 || m_phy < 1 || m_phy > 99 ))
then
	echo "Marks out of range" >> log1.txt
else
	total=$(( m_hindi + m_maths + m_phy ))
	perc=$(( total / 3 ))
	if (( perc < 35 )); then
		grade="Fail"
	elif (( perc >= 35 && perc < 50 )); then
		grade="Third"
	elif (( perc >= 50 && perc < 60 )); then
		grade="Second"
	else
		echo "First"
	fi
fi

