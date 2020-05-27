i=0
while read line
do
arr[$i]=$line
((i=i+1))
done
echo ${arr[@]}
