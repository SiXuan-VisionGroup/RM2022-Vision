#!/bin/bash
#防止相机初始化后假死
sleep 3
cd /home/sx/桌面
echo "123" | sudo -S pkill run
exit