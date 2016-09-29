/*
Author: Salma Mahmoud	
Course: CS 222
File Name: balldrop.c
Last Date of Modification: 11/4/2015
*/

#include <stdio.h> /* For printf() */ 
#include <stdlib.h> /* For rand() and srand() */ 
#include <time.h> /* For time() */ 

/*declare all the functions that will be used in program*/
int ball_drops(int balls);
int rand_by_one();

void main() 
{ 
	/*initialize int variables that will be used*/
	int balls;
	
	/*Ask user for the number of balls they wish to drop*/
	printf("How many balls would you like to drop?	\n");
	scanf("%d",&balls);
	
	/*enter while loop and remain as long as user inputs invalid number*/
	while(balls<1)
	{
		printf("Must drop at least 1 ball. \n");
		printf("How many balls would you like to drop? \n");
		scanf("%d", &balls);
	}
	/*run function to drop balls*/
	ball_drops(balls);
}

int rand_by_one()
{
		/*returns either a -1 or 1 that will be used to bounce balls*/
		return (2*(rand()%2)-1);
}

int ball_drops(int balls)
{
	/*initialize int variables that will be used*/
	int place,
		count, 
		bounces,
		i; 
	/*initialize array as an int and initialize the value of each slot*/
	int catch[21];
	catch[0]=0;
	catch[1]=0;
	catch[2]=0;
	catch[3]=0;
	catch[4]=0;
	catch[5]=0;
	catch[6]=0;
	catch[7]=0;
	catch[8]=0;
	catch[9]=0;
	catch[10]=0;
	catch[11]=0;
	catch[12]=0;
	catch[13]=0;
	catch[14]=0;
	catch[15]=0;
	catch[16]=0;
	catch[17]=0;
	catch[18]=0;
	catch[19]=0;
	catch[20]=0;
	catch[21]=0;
	
	/*seed the random generator*/
	srand(time(0)); 
	
	/*set count equal to zero so to keep track of the number of balls
	that are dropped*/
	count=0;
	/*while the value of count is less than the number of balls,
	continue to iterate through the while loop*/
	while (count<balls)
	{
		/*Set the place/slot in which the balls will be dropped from
		equal to zero*/
		place=0;
		/*while the number of bounces is less than 10*/
		for (i=0;i<10;++i)
		{
			/*add either that is returned from function, rand_by_one, which
			gives either a 1 or -1 to place in order to simulate balls 
			bouncing*/
			place+=rand_by_one();
			/*left for debugging purposes right now*/
			/*printf("Your first roll is %d.\n", place);*/
		}
		
		/* if (place>10)
		{
			place=10;
		}
		else if (place<-10)
		{
			place=-10;
		} */
		
		/*If and else if statements used in order to go into the array
		and increase the value of the number of balls that fall into each slot 
		depending on where the ball falls*/
		if (place==10)
			{
			catch[0]=catch[0]+1;
			}
		else if(place==8)
			{
			catch[2]=catch[2]+1;
			}
		else if(place==6)
			{
			catch[4]=catch[4]+1;
			}
		else if(place==4)
			{
			catch[6]=catch[6]+1;
			}
		else if(place==2)
			{
			catch[8]=catch[8]+1;
			}
		else if(place==0)
			{
			catch[10]=catch[10]+1;
			}
		else if(place==-2)
			{
			catch[12]=catch[12]+1;
			}
		else if(place==-4)
			{
			catch[14]=catch[14]+1;
			}
		else if(place==-6)
			{
			catch[16]=catch[16]+1;
			}
		else if(place==-8)
			{
			catch[18]=catch[18]+1;
			}
		else if(place==-10)
			{
			catch[20]=catch[20]+1;
			}
		
		/*add 1 to the current value of count every time it iterates
		through the while loop*/
		count=count+1;
	}
	
	/*For loops used in order to display the 'balls' that drop into each slot */
	printf("\n10:	");
	for (i=0; i<catch[0]; i++)
		{
		printf("o");
		}
	printf("\n8:	");
	for (i=0; i<catch[2]; i++)
		{
		printf("o");
		}
	printf("\n6:	");
	for (i=0; i<catch[4]; i++)
		{
		printf("o");
		}
	printf("\n4:	");
	for (i=0; i<catch[6]; i++)
		{
		printf("o");
		}
	printf("\n2:	");
	for (i=0; i<catch[8]; i++)
		{
		printf("o");
		}
	printf("\n0:	");
	for (i=0; i<catch[10]; i++)
		{
		printf("o");
		}
	printf("\n-2:	");
	for (i=0; i<catch[12]; i++)
		{
		printf("o");	
		}
	printf("\n-4:	");
	for (i=0; i<catch[14]; i++)
		{
		printf("o");
		}
	printf("\n-6:	");
	for (i=0; i<catch[16]; i++)
		{
		printf("o");
		}
	printf("\n-8:	");
	for (i=0; i<catch[18]; i++)
		{
		printf("o");
		}
	printf("\n-10:	");
	for (i=0; i<catch[20]; i++)
		{
		printf("o");
		}
	printf("\n\n");
	return 0;
}
