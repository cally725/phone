#include <stdio.h>
#include <wiringPi.h>



int inputButtonPressed(int button)
{
    int press = 0;
    while (digitalRead(button) == 0)
    {
        press = 1;
    }
    
    return press;
}


int main() 
{    
    wiringPiSetup() ;
  
    pinMode (5, OUTPUT) ;	// fil 5
    pinMode (6, OUTPUT) ;	// fil 6
    pinMode (7, OUTPUT) ;	// fil 7
    pinMode (12, INPUT) ;	// fil 8
    pinMode (13, INPUT) ;	// fil 9
    pinMode (10, INPUT) ;	// fil 10
    pinMode (11, INPUT) ;	// fil 11

    pullUpDnControl (5, PUD_UP) ;
    pullUpDnControl (6, PUD_UP) ;
    pullUpDnControl (7, PUD_UP) ;
    pullUpDnControl (12, PUD_UP) ;
    pullUpDnControl (13, PUD_UP) ;
    pullUpDnControl (10, PUD_UP) ;
    pullUpDnControl (11, PUD_UP) ;
  
   while (1)
   {
       digitalWrite(5, LOW);
       delay(0);
           if (inputButtonPressed(13))
           {
               printf("9\n\r");
           }
           else if (inputButtonPressed(12))
           {
               printf("6\n\r");
           }
           else if (inputButtonPressed(10))
           {
               printf("3\n\r");
           }
           else if (inputButtonPressed(11))
           {
               printf("#\n\r");
           }
       digitalWrite(5, HIGH);

       digitalWrite(6, LOW);
       delay(0);
           if (inputButtonPressed(13))
           {
               printf("8\n\r");
           }
           else if (inputButtonPressed(12))
           {
               printf("5\n\r");
           }
           else if (inputButtonPressed(10))
           {
               printf("2\n\r");
           }
           else if (inputButtonPressed(11))
           {
               printf("0\n\r");
           }
       digitalWrite(6, HIGH);

       digitalWrite(7, LOW);
       delay(0);
           if (inputButtonPressed(13))
           {
               printf("7\n\r");
           }
           else if (inputButtonPressed(12))
           {
               printf("4\n\r");
           }
           else if (inputButtonPressed(10))
           {
               printf("1\n\r");
           }
           else if (inputButtonPressed(11))
           {
               printf("*\n\r");
           }
       digitalWrite(7, HIGH);

   }
  
    return 0;
}
