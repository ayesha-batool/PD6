#include <iostream>
#include <string>
using namespace std;
string decideActivity(string temperature , string humidity );
int main()
{


  string temperature;
  cout << "Enter temperature (warm or cold): ";
  cin >> temperature;

  string humidity;
  cout << "Enter humidity (dry or humid): ";
  cin >> humidity;

  string result = decideActivity (temperature, humidity );
  cout << result << endl;
  return 0;
}
string decideActivity(string temperature , string humidity )
{

  if (temperature == "warm" )
  {

    if (humidity=="dry")
    {
      return "Recommended activity: Play tennis"  ;
    }
    if (humidity=="humid")
    {
     return "Recommended activity: Swim" ;
    }
    
    }
   if (temperature == "cold" )
  {

    if (humidity=="dry")
    {
      return "Recommended activity: Play basketball"  ;
    }
    if (humidity=="humid")
    {
     return "Recommended activity: Watch TV" ;
    }
    
    }
}