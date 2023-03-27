#include <bits/stdc++.h>
using namespace std;
class BackAccount{
    private:
    string accountnumber;
    string accountholder;
    double balance;
    public:
      BackAccount(string accountnumber, string accountholder,double balance){
          this->accountnumber = accountnumber;
          this->accountholder = accountholder;
          this->balance = balance;
      }
      void printinfo(){
          cout<<"NO: "<<accountnumber<<endl;
          cout<<"Name: "<<accountholder<<endl;
          cout<<"Balance: "<<balance<<endl;
      }
      void printinfo1(){
          cout<<"Balance is: "<<getbalance()<<endl;
      }
      void deposite(double amount){
          balance+= amount;
      }
      void withdraw(double amount){
          if(amount <= balance){
              balance -= amount;
          }else{
              cout<<"Insufficient Balance"<<endl;
          }
      }
      double getbalance(){
          return balance;
      }
};
int main() {
   BackAccount bank("1234","Nikhil",1000.0);
   bank.printinfo();
   cout<<"**************************************************"<<endl;
   bank.deposite(1000);
   bank.printinfo();
   cout<<"**************************************************"<<endl;
   bank.withdraw(500);
   bank.printinfo();
   cout<<"**************************************************"<<endl;
   bank.withdraw(5000);
   bank.printinfo();
   cout<<"**************************************************"<<endl;
   bank.getbalance();
   bank.printinfo1();
//   cout<<"balance is: "<<bank.getbalance()<<endl;
    return 0;
}