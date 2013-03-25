#!/bin/bash
for file in ` ls $1 `
do
	if [ -d $1"/"$file ]
	then
		echo "This is a directory"
	else
		local path=$1"/"$file  #得到文件的完整的目录
		local name=$file        #得到文件的名字

