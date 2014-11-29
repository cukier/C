#!/bin/bash
for i in "$1"/*; do
	dir1=$(echo "$i" | cut -d/ -f 2)
	for j in "$2"/*; do
		dir2=$(echo "$j" | cut -d/ -f 2)
		if [ "$dir1" == "$dir2" ]; then
			size1=$(du "$1"/"$dir1" | tail -n 1 | cut -f 1)
			size2=$(du "$2"/"$dir2" | tail -n 1 | cut -f 1)
			echo "$dir1"
			echo -n ""$1"  : "
			echo $(du -h "$1"/"$dir1" | tail -n 1 | cut -f 1)
			echo -n ""$2" : "
			echo $(du -h "$2"/"$dir2" | tail -n 1 | cut -f 1)
			if [ "$size1" -le "$size2" ]; then
				echo _rm -Rvf "$1"/"$dir1"
			else
				echo _rm -Rvf "$2"/"$dir2"
				echo _mv -v "$1"/"$dir1" "$2"
			fi
			echo ""
		fi
	done
done
exit