#!/bin/bash

echo "" > list_get_user_data.c
cat list_get_user_data.code_begin >> list_get_user_data.c
i=1
while [ $i -le 1000 ]
do
    echo "case $i:" >> list_get_user_data.c
    echo "{" >> list_get_user_data.c
    echo "unsigned char tmp[$i];" >> list_get_user_data.c
    echo "tmp = va_arg(ap, unsigned char[$i]);" >> list_get_user_data.c
    echo "item->data = list_save_me_i($i, tmp);"  >> list_get_user_data.c
    echo "}" >> list_get_user_data.c
    echo "break;" >> list_get_user_data.c
    i=`expr $i + 1`
done
cat list_get_user_data.code_end >> list_get_user_data.c