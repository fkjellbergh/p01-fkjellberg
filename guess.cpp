//Francisco Kjellberg
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
srand (time(NULL));
int randomNum;
int numGuess;

randomNum = rand() % 10 +1;

cout<<"I'm thinking of a number between 1 and 10? Can you guess which number it is?"<<endl;
cin>>numGuess;
 
if (numGuess == randomNum){
    cout<<"You guessed correctly! You win!"<<endl;
    }
else {
    cout<<"I was thinking of "<<randomNum<<"."<<endl;
    int numVar = abs(numGuess - randomNum);
    cout<<"You were off by "<<numVar<<". Sorry, you lose."<<endl;
    }
return 0;
}

    
