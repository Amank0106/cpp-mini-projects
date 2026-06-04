#include<iostream>//pin, 3 attempts

int main(){
  double balance=100;
  double withdrawamount;
  double depositamount;
  int x;
  int pin=1234;
  int y;
    
  
bool authenticated = false;

for(int attempts = 0; attempts < 3; attempts++)
{
    std::cout << "Enter PIN: ";
    std::cin >> y;

    if(y == pin)
    {
        authenticated = true;
        break;
    }

    std::cout << "Wrong PIN\n";
}

if(!authenticated)
{
    std::cout << "TRY AGAIN LATER\n";
    return 0;
}
             
  do{std::cout << "choose one of the following options : \n";
  std::cout << "1. Balance \n\n";
  std::cout << "2. withrawal \n\n";
  std::cout << "3. deposit \n\n";
  std::cout << "4. exit\n\n";
   std::cin >> x;
std::cin.clear();
fflush(stdin);
      switch(x){
    case 1:
    std::cout << "Balance : " << balance << " RS" << '\n' <<'\n';
    break;
    case 2:
   std::cout << "Enter the amount you want to withdraw : ";
    std::cin >> withdrawamount;
      
      if(withdrawamount<=balance && withdrawamount>0) 
      {std::cout << "Remaining Balance :" << balance-withdrawamount << " Rs\n\n";
        balance= balance-withdrawamount;
          }
      else{
        std::cout << "!!!!!Insufficient funds!!!!\n\n\n";
      }
    break;
    case 3:
    std::cout << "Enter the amount you want to deposit";
    std::cin >> depositamount;
    while(depositamount < 0)
{
    std::cout << "Please enter positive amount: ";
    std::cin >> depositamount;
}
    std::cout << "Balance : " << balance+depositamount << " Rs\n\n";
      balance=balance+depositamount;
    break;
    default: std::cout << "INVALID CHOICE\n";
} }while(x!=4);
    std::cout << "Thanks for visiting";
 return 0;  
}