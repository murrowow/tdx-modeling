Hardware:
sysinfo_table (!)
per-lp VMCS region (figure 6)
Lp-local data region (!)


read (array, index)
write (array, index, value)

Firmware:
handle instruction(instruction):
case(instruction):
BLAH: read( array, index)
       write(array, index)

create TD():
BLAH1
BLAH2
BLAH3
....       

case statement for each instruction and how it gets updated in memory
