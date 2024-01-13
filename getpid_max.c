#!/bin/bash
getpid_max=$(cat /proc/sys/kernel/pid/pid_max)
echo "THE MAXIMUM PID VALUE IS: $getpid_max"
