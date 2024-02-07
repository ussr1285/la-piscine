passwd_var=`cut -f 1 -d ':' /etc/passwd | sed '/^#/d'`
test_var=`echo "$passwd_var" | awk "NR%2==0" | rev | sort -r | awk "NR>=$FT_LINE1 && NR<=$FT_LINE2" | tr "\n" ", " | rev | cut -c 2- | rev`

echo $test_var. | sed 's/,/, /g' | tr -d "\n"
