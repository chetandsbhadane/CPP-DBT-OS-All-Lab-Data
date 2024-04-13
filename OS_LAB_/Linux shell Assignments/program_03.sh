#!/bin/bash

#3 - Display the name of files in the current directory along with the names of files with maximum & minimum size. The file size is considered in bytes.


ls -l |  awk '{print $5, $9}' | sort -n | awk 'NR==2 {print " Min value: " $2} END {print " Max value: " $2}'

