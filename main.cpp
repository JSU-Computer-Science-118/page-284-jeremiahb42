//jeramiah brown 11/16/22 J00960654
//Example 5-6  Number Guessing            Page 284  (Generation of Random Number)




#include <iostream>// library for input and output
#include<stdlib.h>//to use abs method and exit program
#include <random>//to generate random number
#include<ctime>

using namespace std;

int main()//main method to start execution
{
   int min=0,max=99;//random number range of min and max
   int toGuess=0,guess=0,diff=0,score=7;//variables for below operations
   srand(time(nullptr));//generating random number
   toGuess=min + rand() % (( max + 1 ) - min);
   while(score>0){//loop to iterate 7 times
   cout<<"Enter a guess between 0 and 99--";
   cin>>guess;//prompting user for the guess
  
   /*This block to find winning condition if diff is 0 then user win*/
   if(abs(toGuess-guess)==0){
       cout<<"You win with a score:"<<score<<endl;
       exit(0);
   }
  
   /*This block is to find the difference is SomeWhat low or SomeWhat high according to range*/
   if(abs(toGuess-guess)>0 && abs(toGuess-guess)<15){
      if(guess>toGuess){
       cout<<"SomeWhat High"<<endl;
        }
       else{
           cout<<"SomeWhat Low!"<<endl;
       }
   }
  
   /* This block is to find Moderate High or Moderate low according to given range in problem*/
   if(abs(toGuess-guess)>=15 && abs(toGuess-guess)<30){
       if(guess>toGuess){
        cout<<"Moderate High!"<<endl;
       }
       else{
           cout<<"Moderate Low!"<<endl;
       }
   }
  
   /* This block is to find  High or  low according to given range in problem*/
   if(abs(toGuess-guess)>=30 && abs(toGuess-guess)<50){
       if(guess>toGuess){
        cout<<"High"<<endl;
       }
       else{
           cout<<"Low!"<<endl;
       }
     
   }
  
   /* This block is to find Very High or Very low according to given range in problem*/
   if(abs(toGuess-guess)>=50){
       if(guess>toGuess){
       cout<<"Very High!"<<endl;
       }
       else{
           cout<<"Very Low!"<<endl;
       }
   }
  
   score=score-1;//decrementing score in each iteration
      
   }  
  

   return 0;
}

