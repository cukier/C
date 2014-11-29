#!/bin/bash
for i in "$1"/*; do
	dir1=$(echo "$i" | cut -d/ -f 2)
	echo "$dir1"
	echo "$1"
	echo "$i"
	echo ""
done
exit