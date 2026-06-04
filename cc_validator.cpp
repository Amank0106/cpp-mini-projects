#include <iostream>
int sumeven(std::string num);
int sumodd(std::string num);
int main(){
  std::string num;
  std::cout << "enter ur credit card  number\n";
  std::cin >> num;
  int result =sumeven(num)+sumodd(num);
  if(result%10==0){
    std::cout << "It is a valid number \n";
  }else{
    std::cout << "It is NOT a valid number\n";
  }
}
int sumeven(std::string num){
  int sum=0;
  for(int i=num.size()-2;i>=0;i-=2){
    int digit=num[i]-'0';
     digit*=2;
    if(digit>=10){
      sum+=digit%10+1;
    }
    else{
      sum+=digit;
    }
  }
return sum;}



int sumodd(std::string num){
  int sum=0;

  for(int i=num.size()-1;i>=0;i-=2){
    int digit=num[i]-'0';
      sum+=digit;
    }
  
return sum;}