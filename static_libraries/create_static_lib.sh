#!/bin/bash

current_directory="$PWD"

#for c_file in "$current_directory"/*.c; do
#	base_name=$(basename "$c_file" .c)
#	object_file="$base_name.o"
#	gcc -c "$c_file" -o "$object_file"
#done

for c_file in *.c;
do
	object_file="${c_file%.c}.o"
	gcc -c "$c_file" -o "$object_file" 
done

ar -rc liball.a "$current_directory"/*.o
