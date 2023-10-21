#include <iostream>
using namespace std;
 float calculateAverage(float marksEnglish ,float marksMaths, float marksChemistry,float marksSocialScience,float marksBiology);

string calculateGrade( float average);
float marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology, average;
int main()
{


  string name;
  cout << "Enter student name: ";
  cin >> name;

 float marksEnglish;
  cout << "Enter marks for English: ";
  cin >> marksEnglish;
  
   float marksMaths;
  cout << "Enter marks for Maths: ";
  cin >> marksMaths;
  
   float marksChemistry;
  cout << "Enter marks for Chemistry: ";
  cin >> marksChemistry;
  
   float marksSocialScience;
  cout << "Enter marks for Social Science: ";
  cin >> marksSocialScience;
  
   float marksBiology;
  cout << "Enter marks for Biology: ";
  cin >> marksBiology;
  cout<<"Student Name: "<<name<<endl;
  
   float result = calculateAverage (marksEnglish, marksMaths , marksChemistry , marksSocialScience , marksBiology );
  cout << "Percentage: "<<result<<"%" << endl;
  
   string result1 = calculateGrade(result);
   cout<<result1<<endl;
   }
  
  
  
  float calculateAverage(float marksEnglish ,float marksMaths, float marksChemistry,float marksSocialScience,float marksBiology)
  {
  	float average=(marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)/5;
  	return average;
  }
  
  
  
  string calculateGrade( float avg)
  {
      int average = avg;
  	calculateAverage (marksEnglish, marksMaths , marksChemistry , marksSocialScience , marksBiology );
  	
  	if(average>=90 && average<=100){
  		return "Grade: A+";
  	}
  	if(average>80 && average<90){
  		return "Grade: A";
  	}
  	if(average>=70 && average<80){
  		return "Grade: B+";
  	}
  	if(average>=60 && average<70){
  		return "Grade: B";
  	}
  	if(average>=50 && average<60){
  		return "Grade: C";
  	}
  	if(average>=40 && average<50){
  		return "Grade: D";
  	}
  	if(average<=40){
  		return "Grade: F";
}
  }
  
  
  

  
