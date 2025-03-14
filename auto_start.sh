#!/bin/bash
#开机自启动视觉自瞄代码并检测，可调整sleep后的数字来调整监测周期(单位：秒)
#(请根据实际路径自行替换)
#gnome-terminal -- /bin/bash -c "/home/sx/桌面/auto_start_kill.sh; exec bash"
source /home/sx/openvino/l_openvino_toolkit_dev_ubuntu20_p_2021.4.689/bin/setupvars.sh
cd /home/sx/桌面/rm2022_cidp_vision/build
while true
do
        ps -ef | grep -v grep | ./run --game
        cd /home/sx/桌面/rm2022_cidp_vision/build
        ./run --game
        sleep 2
done