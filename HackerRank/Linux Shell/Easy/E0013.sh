while read line 
do
echo $line | cut -d' ' -f3 file.txt
done
