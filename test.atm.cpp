#include<iostream>
#include<conio.h>
using namespace std;

class Atm {
    private:
        int pass=1234;
        int ATMmePAISA=10000;
        string name;
        double number;
        string state;
        int distict_pin;

    public:
    int a;

        void User1(){
        cout<<"name = sagar"<<endl;
        cout<<"number = +91 9122427770"<<endl;
        cout<<"State = Bihar"<<endl;
        cout<<"distict pin = 811201"<<endl;
        }
        Atm(){

            cout<<" welcome To Sbi Atm..."<<endl<<endl;
            cout<<" press 1 for cash withdraw"<<endl;
            cout<<" press 2 for to Check Balance"<<endl;
            cout<<" press 3 for Deposite Money"<<endl;
            cout<<" press 4 for Change pin "<<endl<<endl;
        }


        int getpas(){
            return pass;
        }
        void setpass(int p){
            pass=p;
        }

        void CheckPass(int num){

                if(pass==num){
                cout<<" pin Match Succssfully... :-) "<<endl;

            }
            else{
                cout<<" OPPS !.."<<endl;

                cout<<" you entered wrong pin .."<<endl;
                cout<<" please try again.."<<endl;
            }



        }
        int getchec(){
                return a;
            }
            void setchec(int s){
                a=s;
            }

    int getpin(){
        return pass;
    }   
    void setpin(int p){
        pass =p;
    }

    int getATMmePAISA(){
        return ATMmePAISA;
    }
    void setATMmePAISA(int paisa){
        ATMmePAISA=paisa;
    }

};
int main(){
    main:
    int ppas;
        int num;
        int amount;
        Atm a;
        int atmmepaisa;
        int p1,p2;
        cout<<" Select a option :-"<<endl;
        cin>>num;


    switch (num)
                {
                    case(1):{
                        cout<<" enter amount to withdraw.."<<endl;
                        cin>>amount;
                        atmmepaisa=a.getATMmePAISA();
//                      cout<<atmmepaisa;
                        if(amount<=atmmepaisa){
                            cout<<" enter your pin "<<endl;
                            a.setchec(num);
                            cin>>num;
                            a.CheckPass(num);
                            ppas=a.getpin();
                            if(num==ppas){
                                    cout<<" you withdraw successfully "<<endl;
                                    cout<<" collect your money"<<endl;

                                    // update ATM balance
                                    atmmepaisa -= amount; 
                                    a.setATMmePAISA(atmmepaisa);
                            }
                            else{
                                cout<<" try again you do something wrong"<<endl;
                            }

                            cout<<endl<<" press 1 to goo in main menu...."<<endl;
                            int X;
                            cin>>X;
                            if(X==1){
                                goto main;
                            }


                        }
                        else if(amount==atmmepaisa){
                            cout<<" enter your pin "<<endl;
                            a.setchec(num);
                            cin>>num;
                            a.CheckPass(num);
                        }
                        else if (amount>atmmepaisa){
                            cout<<"not sufficient cash"<<endl;

                        }
                        break;

                    }
                    case(2):{
                        // check balance
                        atmmepaisa=a.getATMmePAISA();
                        cout << "Your current balance is: " << atmmepaisa << endl;

                        // go back to main menu
                        cout<<endl<<" press 1 to goo in main menu...."<<endl; 
                        int X; 
                        cin>>X; 
                        if(X==1){ 
                            goto main; 
                        } 

                        break; 
                    } 
                    case(3):{ 
                        // deposit money
                        cout << "Enter the amount you want to deposit: "; 
                        cin >> amount; 

                        // update ATM balance
                        atmmepaisa=a.getATMmePAISA();
                        atmmepaisa += amount; 
                        a.setATMmePAISA(atmmepaisa); 

                        // go back to main menu
                        cout<<endl<<" press 1 to goo in main menu...."<<endl; 
                        int X; 
                        cin>>X; 
                        if(X==1){ 
                            goto main; 
                        } 

                        break; 
                    } 
                    case(4):{
                        cout<<" Are you Want to change pin"<<endl;
                        cout<<" wait we are fettiching details"<<endl;
                        cout<<" enter a newpin";
                        cin>>p1;
                        cout<<" re-enter your new pin to change..."<<endl;
                        cin>>p2;
                        if(p1==p2){
                            a.setpin(p1);
                            cout<<a.getpin();
                        }
                        else{
                            cout<<"pin not amtch please try again"<<endl;
                        }
                        cout<<endl<<" press 1 to goo in main menu"<<endl;
                        int x;
                        cin>>x;
                        if(x==1){
                            goto main;
                        }

                        break; 
                    }
                }

}
