pid=0

while [ $pid -lt 3000 ];
do
	cat /proc/$pid/status | grep "Uid:" |  cut -f 2 | tr '\n' ' ' >> gids 
	cat /proc/$pid/status | grep "Gid:" | cut -f 2 | tr '\n' ' ' >> gids 
	cat /proc/$pid/status | grep "Groups:" | cut -f 2 >> gids 
	pid=$((pid+1))
done

echo 11111 3001 3002 3003 3005 3006 3007 3008 1004 1005 1007 1013 1015 1023 1024 1026 1030 2001 2002 >> gids 
