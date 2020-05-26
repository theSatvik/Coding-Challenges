for ((i=1 ; i<100 ; ++i))
do 
        ((a = $i % 2))
        if [ $a -ne 0 ]
        then
        echo $i
fi
done 
