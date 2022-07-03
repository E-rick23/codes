#!/bin/bash

#This script tells if the number entered is composite or prime.
#If the number entered is a composite number, it will also tell it's closest divisor.

$1 &>/dev/null
for((i=2; i<=$1/2; i++))
do
	ans=$(( $1%i ))
	if [ $ans -eq 0 ]
	then
		echo "Composite number, it's closest divisor is: " | tr -d '\n' && factor $1 | rev | cut -d' ' -f 1 |rev
		exit 0
	fi
done
echo "Prime number"
