#! /bin/bash

#This script tells the size of a folder or file the user chooses.
#To run this script on the linux terminal, give it the "execute" permission by typing "sudo chmod u+x" on the terminal.
#After giving it the execute permission simply use the format "./size.sh /folderorfilename"
#Remember to use the "cd" command to get on the folder the script is to run it.
$1 &>/dev/null

SIZE={ du -sh $1 | cut -f1
echo $SIZE
