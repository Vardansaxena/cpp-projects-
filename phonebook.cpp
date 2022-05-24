#include <bits/stdc++.h>
using namespace std;
class phonebook{
	public :
	
	phonebook(){
		cout<<"Welcome to the Phonebook"
		            "Simulator !! "<<endl;
	};
	string cont;
	string phone;
	string firstname;
	string secondname;
	int sim;
	string x;

  string phonenumber(){  
   cout<<"enter phone number"<<endl;
   	cin>>phone;
   return phone;
}
string first(){
   	cout<<"enter first name"<<"\t";
   	cin>>firstname;
   	return firstname;
   }
   
       string second(){
   	cout<<"enter second name"<<"\t";
   	cin>>secondname;
   	return secondname;
   }
   string showsim(){
   	cout<<"enter sim operator name"<<"\n";
   	cout<<"these are some operator given below" "\n"
   	      "1.) Airtel" "\n"
   	      "2.) Vi" "\n"
   	      "3.) Bsnl" "\n"
   	      "4.)Jio"<<endl; 
   	      
   	cin>>sim;
   	switch (sim)
   	{
   		case 1:
   		cout<<" your sim operator is Airtel"<<endl;
   		break;
   		case 2:
   		cout<<" your sim operator is Vi"<<endl;
   		break;
   		case 3:
   		cout<<" your sim operator is Bsnl"<<endl;
   		break;
   		case 4:
   		cout<<" your sim operator is Jio"<<endl;
   		break;
   		default :
   		cout<<" soory no operator found try again :(";
   		break;
   	}
   	
   	x = sim;
   	return x;
   }
   string showsim1(){
 	return x;
}
   string showfirstname1(){
   	cout<<"your firstname is "<<firstname<<endl;
   	return firstname;
   }
   string showsecondname(){
   	cout<<"Your second name is "<<secondname<<endl;
   	return secondname;
   }
   string numshow(){
   	cout<<"Phone number is "<<phone<<endl;
   	return phone;
   }
	}; 
int main()
{
	phonebook ph;
	cout<<"Type Yes to continue "
	           " No for Exit"<<"\n";
	           string x;
	           cin>>x;
	           if(x == "Yes" || x == "yes"){
	           	ph.phonenumber();
	               ph.first();
               	ph.second();	
               ph.showsim();
               cout<<" do you want to show your data?"<<endl;
              	     cout<<"press yes to save and continue"<<endl;      
              	      	     
              	     string resp;
              	   cin>>resp;
              	     
              	   if(resp == "Yes" || resp == "yes"){
              	     ph.showsim1();
                	ph.showfirstname1();
               	ph.showsecondname();
               	ph.numshow();
              	   }
              	 else{
              	 	cout<<"try again " ;
              	 }
	           }
              	    else {
              	    	cout<<"thank you for visiting !! "<<endl;
              	    }
              	    
              	   }
	         
