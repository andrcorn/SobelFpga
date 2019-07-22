echo BEGIN
echo MAKEIN
./inImg i $1

cd /media/andr/D/Xilinx/14.7/ISE_DS/ISE/bin/lin
echo SCH2HDL
./sch2hdl -batch /home/andr/lnx/sch2HdlBatchFile
echo FUSE
./fuse -intstyle ise -incremental -lib unisims_ver -lib unimacro_ver -lib xilinxcorelib_ver -o /home/andr/lnx/bytes_bytes_sch_tb_isim_beh.exe -prj /home/andr/lnx/bytes_bytes_sch_tb_beh.prj work.bytes_bytes_sch_tb work.glbl {}
./fuse -intstyle ise -incremental -lib unisims_ver -lib unimacro_ver -lib xilinxcorelib_ver -o /home/andr/lnx/bytes_bytes_sch_tb_isim_beh.exe -prj /home/andr/lnx/bytes_bytes_sch_tb_beh.prj work.bytes_bytes_sch_tb work.glbl

echo RUNSIM
cd /home/andr/lnx
sed -i 's/.1000 ns.*/ 50 ms;/' isim.cmd
export XILINX=/media/andr/D/Xilinx/14.7/ISE_DS/ISE
export PLATFORM=lin
export PATH=$PATH:${XILINX}/bin/${PLATFORM}
#export LD_LIBRARY_PATH=${XILINX}/lib/${PLATFORM}
./bytes_bytes_sch_tb_isim_beh.exe -gui -tclbatch isim.cmd

echo MAKEOUT
cd /home/andr/lnx/tstImg
./inImg o $1

rm cvSob.jpg FPGA.jpg input.txt output.txt
echo END
#if [ $? -eq 0 ]; then
