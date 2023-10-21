#include <iostream>
#include <string>
using namespace std;
    string studio(string month,int numberOfStays);
  string apartment(string month,int numberOfStays);

int main()
{
string month ;
int numberOfStays;

  cout << "Enter the month (May, June, July, August, September, October): ";
  cin >> month;
   cout << "Enter the number of stays: ";
  cin >> numberOfStays;
  
  
  
  string stu= studio( month, numberOfStays);
  string apa=apartment( month, numberOfStays);
  cout<<apa<<endl;
 
  cout<<stu<<endl;
  
}
  

  string studio(string month,int numberOfStays)
  {  
  

  	if(month=="May" || month=="October"){
  		 
  		 if(numberOfStays>=7 && numberOfStays<=14){
  		 	float discount=50-2.5;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize) + "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=50-15;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  					}
  	
  		 	
  	
  	if(month=="June" || month=="September"){
  		 
  		 if(numberOfStays>7 && numberOfStays<=14 ){
  		 	float discount=75.20-0;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize)+ "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=75.20-15.04;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  				}
  		 	
  		if(month=="July" || month=="August"){
  		 
  		 if(numberOfStays>7 && numberOfStays<=14){
  		 	float discount=76-0;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize)+ "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=76-0;
  		 	float prize=discount*numberOfStays;
  		 		return "Studio: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  				}
  		 	
  		
}

  string apartment(string month,int numberOfStays)
  {  
  

  	if(month=="May" || month=="October"){
  		 
  		 if(numberOfStays>7 && numberOfStays<=14){
  		 	float discount=65-0;
float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=65-6.5;
  		 	float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  					}
  	
  		 	
  	
  	if(month=="June" || month=="September"){
  		 
  		 if(numberOfStays>7 && numberOfStays<=14){
  		 	float discount=68.7-0;
  		 	float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=68.7-6.87;
  		 	float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  				}
  		 	
  		if(month=="July"|| month=="August"){
  		 
  		 if(numberOfStays>7 && numberOfStays<=14){
  		 	float discount=77-0;
  		 	float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}
  		 	
  		 if(numberOfStays>14 ){
  		 	float discount=77-7.7;
  		 	float prize=discount*numberOfStays;
  		 		return "Apartment: " + to_string(prize)+ "$.";
  		 	
  		 	}	
  		 	
  		 	
  				}
  		 	
  		
}






				
  		 
		
  	
  	
  	
			
  	

