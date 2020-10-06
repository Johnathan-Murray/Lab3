#include<stdio.h>
#include<stdlib.h>

int main()
{
	  double winningTime = 15.00;
      
      printf("Please enter the winning time of the race: ");
      scanf("%lf", &winningTime);
      
      double mps       = 100.0/winningTime;										 //Speed in meters per second
      double fps       = (100.0*3.28084)/winningTime;							 //Speed in feet per second
      double kph       = (100.0/1000.0)/((winningTime/60.0)/60.0);				 //Speed in kilometers per hours
      double mph       = (100.0*0.00062137121212121)/((winningTime/60.0)/60.0);  //Speed in miles per hour
      double mileTimeD = (1.0/mph)*60.0;                                         //Mile time in minutes as a double
      int mileTimeI    = (1.0/mph)*60.0;                                         //Mile time in minutes as an integer
      double mileTimeS = (mileTimeD-mileTimeI)*60.0;                             //Seconds of the mile time to add on to integer
      double yardsTime = 300.0/fps;                                              //100 yards time in seconds
      
      printf("\nThe person was traveling at a rate of:\n");					  
      printf("%.2lf  meters per second.\n", mps);
      printf("%.2lf feet per second.\n", fps);
      printf("%.2lf miles per hour.\n", mph);
      printf("%.2lf kilometers per hour.\n \n", kph);
      
      printf("It would take the runner ");
      printf("%d minutes ", mileTimeI);
      printf("and ");
      printf("%.2lf seconds ", mileTimeS);
      printf("to run a mile. \n");
      
      printf("It would take the runner ");
      printf("%.2lf seconds ", yardsTime);
      printf("to run 100 yards.");
      /* Your code goes below */
   
	  return 0;
}// end main

