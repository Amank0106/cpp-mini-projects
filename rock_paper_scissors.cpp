#include<iostream>// rock paper and scissors
#include<ctime>
char playerinput();
char comp();
void result();
char player;
int compinput;
int main(){


   while(c<=3){playerinput();
   std::cout << "Computer picks: " << comp() << '\n';
  result();}
  
  
     
 
}
char playerinput(){
  
  std::cout << "ROCK PAPER AND SCISSORS GAME\n";
  std::cout << "***********************************\n";
  std::cout << "r-rock\n";
  std::cout << "p-paper\n";
  std::cout << "s-scissors\n";
do{std::cout << "ENTER YOUR PICK\n";
                                  std::cin >> player;
  return 0;}while(player=='r'&& player=='p'&&player=='s');}
  
  char comp()
  { 
   srand(time(0));
    compinput=rand()%3+1;
    switch(compinput){
      case 1: std::cout << "rock";
      break;
      case 2: std::cout << "paper";
      break;
      case 3: std::cout << "scissors";
        break;}
      return 0;
    
     }

  void result(){
     if(player=='r'){
       switch(compinput)
         {  case 1: std::cout << "Its a tie";
         break;
         case 2: std::cout << "You lost";
         break;
         case 3: std::cout << "You won";
         break;}}
    else if (player =='p'){
      switch(compinput)
         {  case 1: std::cout << "You won";
         break;
         case 2: std::cout << "Its a tie";
         break;
         case 3: std::cout << "You lost";
         break;}}
    else{
      switch(compinput)
         {  case 1: std::cout << "You lost";
         break;
         case 2: std::cout << "You won";
         break;
         case 3: std::cout << "Its a tie";
         break;}}
    }