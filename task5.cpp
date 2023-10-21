#include <iostream>
#include <string>
using namespace std;
  float calculateFruitPrice(string fruit, string dayOfWeek, double quantity);


int main()
{
string fruit,dayOfWeek;
double quantity;
  cout << "Enter the fruit name: ";
  cin >> fruit;
  if(fruit !="banana" && fruit !="grapes" &&fruit!="pineapple" && fruit!="kiwi" && fruit !="grapefruit" &&fruit !="orange" && fruit !="apple" ){
				cout<<"Invalid"<<endl;
			}
   cout << "Enter the day of the week (e.g., Monday, Sunday): ";
  cin >> dayOfWeek;
  if(dayOfWeek !="Monday" && dayOfWeek !="Tuesday" && dayOfWeek !="Wednesday" && dayOfWeek !="Thursday" && dayOfWeek !="Friday" && dayOfWeek !="Sunday" && dayOfWeek !="Saturday"){
		if(fruit !="banana" && fruit !="grapes" &&fruit!="pineapple" && fruit!="kiwi" && fruit !="grapefruit" &&fruit !="orange" && fruit !="apple" ){
				cout<<"Invalid"<<endl;
		}
   cout << "Enter the quantity: ";
  cin>>quantity;
 
  
  float prize=calculateFruitPrice(fruit,dayOfWeek, quantity );
  cout<<prize;
  
}
  

  float calculateFruitPrice(string fruit, string dayOfWeek, double quantity)
  {  

  	if(dayOfWeek=="Monday" ||dayOfWeek=="Tuesday"||dayOfWeek=="Wednesday"||dayOfWeek=="Thursday"||dayOfWeek=="Friday"){
  		 
  		 if(fruit=="banana" ){
  		 	
  		 		float charges=quantity*2.5;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 	if(fruit=="apple" ){
  		 	
  		 		float charges=quantity*1.2;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 	
  		 	if(fruit=="orange" ){
  		 	
  		 		float charges=quantity*0.85;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="grapefruit" ){
  		 	
  		 		float charges=quantity*1.45;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="kiwi" ){
  		 	
  		 		float charges=quantity*2.7;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="pineapple" ){
  		 	
  		 		float charges=quantity*5.5;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="grapes" ){
  		 	
  		 		float charges=quantity*3.85;
  		 		return charges;
  		 	
  		 	}
  		 }
  		
  	if(dayOfWeek=="Sunday" ||dayOfWeek=="Saturday"){
  		 
  		 	if(fruit=="banana" ){
  		 	
  		 		float charges=quantity*2.7;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 	if(fruit=="apple" ){
  		 	
  		 		float charges=quantity*1.25;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 	
  		 	if(fruit=="orange" ){
  		 	
  		 		float charges=quantity*0.9;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="grapefruit" ){
  		 	
  		 		float charges=quantity*1.6;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="kiwi" ){
  		 	
  		 		float charges=quantity*3;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="pineapple" ){
  		 	
  		 		float charges=quantity*5.6;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 		
  		 	
  		 	if(fruit=="grapes" ){
  		 	
  		 		float charges=quantity*4.2;
  		 		return charges;
  		 	
  		 	}
  		 	
  		 	
  		 }
  		 
  	
}
				
  		 
		
  	
  	
  	
			
  	

