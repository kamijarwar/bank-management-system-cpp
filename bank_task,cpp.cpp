#include<iostream>
#include<string>
using namespace std;
class Bank{
	private:
		string name;
		int pin;
		double balance;
		public:
		Bank(string name, int pin, double balance){
			this->name=name;
			this->pin=pin;
			this->balance=balance;
			
		}
		void deposit(double amount){
			balance+=amount;
		}
		
		
		void withdraw(double amount){
    if(amount <= 0){
        cout<<"Invalid amount!"<<endl;
    }
    else if(amount > balance){
        cout<<"Insufficient balance!"<<endl;
    }
    else{
        balance -= amount;
        cout<<"Withdrawal successful!"<<endl;
    }
}
		
		
		void display(){
			cout<<"---------------Bank Interface---------------"<<endl;
			cout<<"USERNAME: "<<name<<endl;
			cout<<"Pin of user account is: "<<pin<<endl;
			cout<<"Balance in user account is: "<<balance<<endl;
			cout<<endl;
		}
};

int main(){
	Bank b1("Kamran jarwar",2982,60000);
	b1.deposit(500);
	b1.withdraw(900000);
	b1.display();
	
	
	
	
	
	
	return 0;
}
