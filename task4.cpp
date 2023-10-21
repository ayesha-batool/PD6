#include <iostream>
#include <string>
using namespace std;
 string CellularCompany(string servicecode,float minutes_used );
void timecall();
string servicecode,time_of_the_call;
int main()
{
string servicecode;
  cout << "Enter the service code (R/r for regular, P/p for premium): ";
  cin >> servicecode;
  if(servicecode == "p" ||servicecode=="P" )
  {
      timecall();
  }
   float minutes_used;
  cout << "Enter the number of minutes used: ";
  cin >> minutes_used;
  if(servicecode=="P" || servicecode=="p"){
         //timecall();
  	  cout<<"Service Type: Premium"<<endl;
  }
   if(servicecode=="R" || servicecode=="r"){
  	  cout<<"Service Type: Regular"<<endl;
  }

  cout<<"Total Minutes Used: "<<minutes_used<<" minutes"<<endl;
   string result = CellularCompany ( servicecode,  minutes_used);
  cout <<result<< endl;
   }
  
  void timecall(){
	   cout << "Enter time of the call (D/d for day, N/n for night): ";
  cin >> time_of_the_call;

  
  }

  string CellularCompany( string servicecode,float minutes_used)
  {  
  	if(servicecode=="P"||servicecode=="p"){
  		 
  		 if(time_of_the_call=="D" ||time_of_the_call=="d"){
  		 	if(minutes_used>75){
  		 		float charges=minutes_used-75;
  		 		float overcharge=charges*0.1;
  		 		float total=overcharge+25;
  		 		return "Amount Due: $" + to_string(total);
  		 	}
  		 	else{
  		 		return "Amount Due: $25";
  		 	}}
  		 	
  		  if(time_of_the_call=="N" ||time_of_the_call=="n"){
  		 	if(minutes_used>100){
  		 		float charges=minutes_used-100;
  		 		float overcharge=charges*0.05;
  		 		float total=overcharge+25;
  		 		return "Amount Due: $" + to_string(total);
  		 	}
  		 	else{
  		 		return "Amount Due: $25";	
  		 }
			}			
			}
  	
  		if(servicecode=="R" ||servicecode=="r"){
  		
  		
  		 	if(minutes_used>50){
  		 		float charges=minutes_used-50;
  		 		float overcharge=charges*0.2;
  		 		float total=overcharge+10;
  		 			return "Amount Due: $" + to_string(total);
  		 	}
  		 	else{
  		 		return "Amount Due: $10";
  		 	}}
  		  
}
			
  	

