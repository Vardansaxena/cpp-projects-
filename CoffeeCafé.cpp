//*********************************************

// This is a Coffee Café Simulator Type Project

 

//*********************************************
//                             Note :--->
//  i want to tell you guys the debit card and credit card are used in this project is virtual so it cant detect either the card is live or not !! 
// its is only for give you feeling of payment

#include <bits/stdc++.h>
using namespace std;
// here's our class start 
class coffee{
	public:
	
	string debitcard;
	string creditcard;
	// debit card func here
	void debit_card(){
		system("cls");
		cout<<"enter you debit card number"<<endl;
		cin>>debitcard;
		if(debitcard.length()<13){
		cout<<"card error"<<endl;
		system("pause");
		debit_card();
	}
	else if (debitcard.length()>16){
		cout<<"card error"<<endl;
		debit_card();
	}
	
	else{
		cout<<"continue"<<endl;
	}
		int year;
	cout<<"enter expire year"<<endl;
	cin>>year;
	 if(year<2022){
		cout<<"card error"<<endl;
	}
	else if (year<22){
		cout<<"card error"<<endl;
	}
	else{
		cout<<" "<<endl;
	}
	system("cls");
		cout<<"enter dd|mm"<<"\n\n";
		string date; 
		string month; 
		cin>>date>>month;
		system("cls");
		string cvv; 
		cout<<"enter cvv"<<endl;
		cin>>cvv;
		string choose;
		cout<<"you want to see your card details?"
		      "\n""Type Yes or No "<<endl;
		cin>>choose;
		system("cls");
		if(choose=="yes"||choose=="yes"){
			cout<<"card number ""\t"<<debitcard<<endl;
			cout<<"date and expire""\t"<<date<<"\t"<<month<<"\t"<<endl;
			cout<<"year of expire"<<year<<endl;
		}
		else{
			cout<<"card details hidden"<<endl;
		}							
		
	}
	// credit card func here :->	
	void credit_card(){
			cout<<"enter you credit card number"<<endl;
		cin>>creditcard;
		if(creditcard.length()<13){
		cout<<"card error"<<endl;
		system("pause");
		credit_card();
	}
	else if (creditcard.length()>16){
		cout<<"card error"<<endl;
		credit_card();
	}
	
	else{
		cout<<" "<<endl;
	}
	system("cls");
	
	 int year;
	cout<<"enter expire year"<<endl;
	cin>>year;
	 if(year<2022){
		cout<<"card error"<<endl;
	}
	else if (year<22){
		cout<<"card error"<<endl;
	}
	else{
		cout<<"success"<<endl;
	}
	system("cls");
		cout<<"enter dd|mm"<<"\n\n";
		string date1; 
		string month1; 
		cin>>date1>>month1;
		string cvv1;
		cout<<"enter cvv"<<endl;
		cin>>cvv1;
		string choose1;
		cout<<"you want to see your card details?"<<endl;
		cin>>choose1;
		system("cls");
		if(choose1=="yes"||choose1=="yes"){
			cout<<"card number ""\t"<<creditcard<<endl;
			cout<<"date and expire""\t"<<date1<<"\t"<<month1<<"\t"<<endl;
			cout<<"year of expire"<<year<<endl;
		}
		else{
			cout<<"card details hidden"<<endl;
		}
		}
};

// here's our main func start
int main()
{
	system("cls");
	system("color 0A");
	cout<<"\n\n\nWelcome to Coffee Café"<<endl;
	cout<<"1) expresso.............$3""\n"
                 "2) double expresso......$5""\n"
                  "3) cappacino............$4""\n"
                  "4) latte................$4""\n"
                 "5) americano............$3""\n"
                  "6) mocha................$4""\n"
                  "7) falt white...........$2""\n"
                 "8) short black..........$2""\n"
                  "9) long black...........$2""\n";
                                            coffee cf;
int choice ;
cin>>choice;
switch(choice){
	//Case 1
	case 1 :
	cout<<"You Want expresso"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice2;
	           cin>>choice2;
	           if(choice2==1){
	           	cf.debit_card();
	           }
	           else if(choice2==2){
	           	cf.credit_card();
	           	
	           }
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           
	           break;
	           
	           // Case 2
	           case 2:
	           cout<<"You Want double expresso"<<endl;        
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice3;
	           cin>>choice3;
	           if(choice3==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice3==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           } 
	           break;
	           
	           // Case 3
	           case 3:
	           cout<<"You Want double expresso"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice4;
	           cin>>choice4;
	           if(choice4==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice4==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           
	           
			// Case 4
			
			case 4:
			cout<<"You Want latte"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice5;
	           cin>>choice5;
	           if(choice5==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice5==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           //Case 5
	           
	           case 5 :
	           cout<<"americano"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice6;
	           cin>>choice6;
	           if(choice6==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice6==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           //Case 6
	           
	           case 6:
	           cout<<"americano"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice7;
	           cin>>choice7;
	           if(choice7==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice7==2){
	           	cf.credit_card();
	           	
	           }
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           //Case 7
	           case 7: 
	           cout<<"Flat White"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice8;
	           cin>>choice8;
	           if(choice8==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice8==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           
	           //Case 8
	           case 8: 
	           cout<<"Short Black"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice9;
	           cin>>choice9;
	           if(choice9==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice9==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           break;
	           //Case 9
	           case 9: 
	           cout<<"Short Black"<<endl;
	cout<<"enter you payment method"<<endl;
	cout<<"choose card !!""\n"
	           "1.)Debit Card ""\n"
	           "2.)Credit card"<<endl;
	          int choice10;
	           cin>>choice10;
	           if(choice10==1){
	           	cf.debit_card();
	           	
	           }
	           else if(choice10==2){
	           	cf.credit_card();
	           	
	           }
	           
	           else{
	           	cout<<"oh no please try again"<<endl;
	           }
	           default:
	           cout<<"oh No Try Again";
	           // here's  is our all case end ;
	        
	        cout<<"enter correct information";
			system("pause");
			
// here programm run again instead of exit()
main();
			return 0;
	
}

}
