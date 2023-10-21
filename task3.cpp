#include <iostream>
using namespace std;
 string findZodiacSign(int birthday,string month);
 int main()
{


  int birthday;
  cout << "Enter the day of birth: ";
  cin >> birthday;

 string month;
  cout << "Enter the month of birth (e.g., January, February): ";
  cin >> month;
  

  
   string result = findZodiacSign (birthday, month);
  cout << "Zodiac Sign: "<<result<< endl;
  
   }
  
  string findZodiacSign(int birthday,string month)
  {
  	
  	if((birthday>=21 && month=="March") ||(birthday<=19 && month=="April")){
  		return "Aries";
  	}
  	if((birthday>=20 && month=="April") ||(birthday<=20 && month=="May")){
  		return "Taurus";
  	}
	if((birthday>=21 && month=="May") ||(birthday<=20 && month=="June")){
  		return "Gemini";
  	}
	if((birthday>=21 && month=="June") ||(birthday<=22 && month=="July")){
  		return "Cancer";
  	}
	if((birthday>=23 && month=="July") ||(birthday<=22 && month=="August")){
  		return "Leo";
  	}
	if((birthday>=23 && month=="August") ||(birthday<=22 && month=="September")){
  		return "Virgo";
  	}
if((birthday>=23 && month=="September") ||(birthday<=22 && month=="October")){
  		return "Libra";
  	}

if((birthday>=23 && month=="October") ||(birthday<=21 && month=="November")){
  		return "Scorpio";
  	}

if((birthday>=22 && month=="November") ||(birthday<=21 && month=="December")){
  		return "Sagittarius";
  	}
	if((birthday>=22 && month=="December") ||(birthday<=19 && month=="January")){
  		return "Capricon";
  	}
if((birthday>=20 && month=="January") ||(birthday<=18 && month=="February")){
  		return "Aquarius";
  	}





}
  
  
  
  

  
