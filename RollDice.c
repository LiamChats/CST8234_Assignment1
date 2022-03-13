/**
 * Title: Lab Assesment #1 - Dice Game Implementation 
 * Course: CST8234 C Language
 * @author: Kadija Allagouma
 * Due date: 2022-03-13
 * Submission date: 03/13/22
 */
#include <stdio.h>
#include <stdlib.h>

/************************************************************
 Function Name: rollDice
 Purpose: Randomly generates numbers between 1 and 6
 Function in parameter: void
 Funciton out parameter: return(rand()%7)
 Version: 1
 Author: Kadija Allagouma
************************************************************/
int rollDice(void){
    return(rand()%7);
}

int main(){
   int f = rollDice();
    int s = rollDice();
    int t = f + s;
    printf("total %i = f %i + s %i ", t, f, s);
}



