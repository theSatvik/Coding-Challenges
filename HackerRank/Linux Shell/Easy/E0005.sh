read x
read y 
for i in {+,-,"*",/}
do
        ans=$(( (x) $i (y)))
        echo $ans
done
