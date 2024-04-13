#Write a script that takes a command line argument and reports on its file type (regular file, directory file, etc.). For more than one argument generate error message. 

if [ "$#" -eq 0 ]
then
	echo "Usage: $0 <fileName><fileName>..."
	exit 1
fi

for file in "$@"; do
	if [ -d "$file" ]
	then
        	echo "Its not file Its directory"

	elif [ -f "$file" ]
	then
        	echo "Ordinary File"
	elif [ -h "$file" ]
	then
		echo "Symbolic Link"
	else
        	echo "File Not Exist"
	fi
done
