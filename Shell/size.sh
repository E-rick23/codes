#! /bin/bash

$1 &>/dev/null

TAMANHO={ du -sh $1 | cut -f1
echo $TAMANHO
