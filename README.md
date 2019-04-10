# SCAN_disk_scheduling


Write a C program to solve the following problem:

Suppose that a disk drive has 5,000 cylinders, numbered 0 to 4999. The drive is currently serving a request at cylinder143, and the previous request was at cylinder 125. The queue of pending requests, in FIFO order is:

86, 1470, 913, 1774, 948, 1509, 1022, 1750, 130





starting from the current head position, what is the total distance (in cylinders) that the disk arm moves to satisfy all the pending requests for each of the SCAN disk-scheduling algorithms?

DESCRIPTION:

This program is the code for the SCAN disk scheduling algorithm. We know that SCAN algorithm depends on the previous and the current location. According to them, the path is shown along with the total distance the disk arm moves. The user will enter the capacity of disk after that starting location and ending location and then present and previous location at last all the values including the present and previous locations. Depeding on the present and the previous two different cases are used by If-Else statement by which algorithm process is done and output is printed.
