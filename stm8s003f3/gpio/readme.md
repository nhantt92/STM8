#blink-led kit STM8S003F3P3

make : create file blinky.ihx
make clean :remove blinky.ihx

#flash firmware

cd ~/../stm8flash
./stm8flash -c stlinkv2 -p stm8s003f3 -w ../gpio/blinky.ihx


