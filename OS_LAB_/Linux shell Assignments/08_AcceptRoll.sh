#!/bin/bash


usage() {
    echo "Usage: $0 <data_file> <roll_number>"
    exit 1
}


if [ $# -ne 2 ]; then
    usage
fi


if [ ! -f "$1" ]; then
    echo "Error: File '$1' not found."
    exit 1
fi


modify_record() {
    rollno=$1
    filename=$2

    
    grep -q "^$rollno:" "$filename"
    if [ $? -eq 0 ]; then
       
        echo "Enter new name for $rollno:"
        read new_name

        echo "Enter marks for subject 1:"
        read subject1

        echo "Enter marks for subject 2:"
        read subject2

        echo "Enter marks for subject 3:"
        read subject3

        sed -i "s/^$rollno:[^:]*:[^:]*:[^:]*/$rollno:$new_name:$subject1:$subject2:$subject3/" "$filename"
        echo "Record updated successfully."
    else
        
        echo "Roll No Not Found"
    fi
}


modify_record "$2" "$1"
