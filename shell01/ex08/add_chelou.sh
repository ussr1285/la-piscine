nbr1=$(echo $FT_NBR1 | tr "\'\\\\\"\?" "01234")
nbr2=$(echo $FT_NBR2 | tr "mrdoc" "01234")

result=$(echo "ibase=5; obase=23;$nbr1 + $nbr2" | bc)
echo $result | tr "0123456789ABC" "gtaio luSnemf"
