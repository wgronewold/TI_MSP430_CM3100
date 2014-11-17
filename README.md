Adventures with TI's MSP430F5529lp Launchpad and the CM3100 boosterpack.


blinking_LEDs: Deviation of TI's Blinking Lights tutorial. 

-After struggling a bit with Hexadecimals and the addresses of LED Registers, I was able to get the green LED on my board to blink and alternate with the red LED. I was also primed on C's type qualifiers using volatile.

The thing I found the most interesting, was that increasing the i value didn't scale porportionally or exponentially. A value of 100000000 seemed to be only a few milliseconds behind a value of 1000,30000,100000.  As the input value of i approaches 0 the light will automatically stay on, but this problem doesn't occur when both lights are turned on. I'll look into this more when I know how to output data.

https://vine.co/v/O5U6Hu21tVz
