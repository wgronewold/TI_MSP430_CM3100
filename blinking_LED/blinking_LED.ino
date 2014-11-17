int main(void) {
  
  WDTCTL = WDTPW | WDTHOLD;   // Stops Watchdog Timer
  
  // Turns P1 & P4 Direction Registers to "On"
  // Both registries are 8 bits long
  P1DIR |= 0x01; //0000 0001
  P4DIR |= 0x80; //1000 0000
  
  for(;;) {
  
      // Volatile is a type reference, tells the compiler
      // that the value of i could change to unforeseen reasons.
      // If I understand correctly, our P1 and P4 Register
      // values could be erased when the registers are read or toggled
      // off and on if i was a regular or signed int, 
      // therefore we could have unexpected compiler behavior, due to
      // the compiler optimizing the code and storing i one time.
      
      // Unsigned allows the int i to be any size. 
      volatile unsigned int i;
      
      P1OUT ^= 0x01; // Toggle P1.0 using exclusive-OR
      
      i = 20000;    //SW Delay
      do i--;
      while(i != 0);
      
      P4OUT ^= 0x80; // Toggle P4.7 
      
      i = 40000;    //SW Delay
      do i--;
      while(i != 0);
  
  }

}
