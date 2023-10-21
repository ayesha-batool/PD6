#include <iostream>
#include <string>
using namespace std;
   string checkStudentStatus(int examtime , int studentarrivaltime);
 // void formula(int examHour , int examMinute, int studentHour,int studentMinute);
  
int main()
{
   int examHour,examMinute,studentHour,studentMinute;
  cout << "Enter Exam Starting Time (hour): ";
  cin >>   examHour;
 

   cout << "Enter Exam Starting Time (minutes): ";
  cin >> examMinute;


  cout << "Enter Student hour of arrival: ";
  cin >> studentHour;
  

   cout << "Enter Student minutes of arrival: ";
  cin >> studentMinute;

int examtime=(examHour*60)+examMinute;
int studentarrivaltime=(studentHour*60)+studentMinute;
  // formula( examHour ,  examMinute,  studentHour, studentMinute);
  if((examtime-studentarrivaltime)>=0 && (examtime-studentarrivaltime)<30 ){
        cout<< "On time"<<endl;
  }
  if((studentarrivaltime-examtime)>0){
       cout<< "Late"<<endl;
        }

     if((examtime-studentarrivaltime)>30){
        cout<<  "Early"<<endl;
        if((examtime-studentarrivaltime)>0){
            cout<< "Test: " <<examtime-studentarrivaltime<<endl;
         
        }}
  string result= checkStudentStatus(examtime,studentarrivaltime);
  cout<<result<<endl;
  

}


  string checkStudentStatus(int examtime , int studentarrivaltime){
  

  	
        if((examtime-studentarrivaltime)==30){
            return to_string(examtime-studentarrivaltime) +" minutes before the start";
        }
         if((examtime-studentarrivaltime)<30 && (examtime-studentarrivaltime)>0){
            return to_string(examtime-studentarrivaltime) + " minutes before the start";
        }
    
  	
         if((studentarrivaltime-examtime)<60 && (studentarrivaltime-examtime)>0){
            return to_string(studentarrivaltime-examtime) +" minutes after the start";
        }
         if((studentarrivaltime-examtime)>=60){
            int hour=(studentarrivaltime-examtime)-60;
            return "1:" + to_string(hour) + " hours after the start";
        }
  
         if((examtime-studentarrivaltime)<60 && (examtime-studentarrivaltime)>0 ){
            return to_string(examtime-studentarrivaltime) +" minutes before the start";
        }
         if((examtime-studentarrivaltime)>=60 && (examtime-studentarrivaltime)<120){
            int hour=(examtime-studentarrivaltime)-60;
            return "1:" + to_string(hour) + " hours before the start";        }
        if((examtime-studentarrivaltime)>120 && (examtime-studentarrivaltime)<180){
            int hour=(examtime-studentarrivaltime)-120;
            return "2:" + to_string(hour) + " hours before the start";        }
         if((examtime-studentarrivaltime)>180){
            int hour=(examtime-studentarrivaltime)-180;
            return "3:" + to_string(hour) + " hours before the start";        }
 //return "";
    }

	
  		 	
  		 	
  				
  		 	
 	
  		 
		
  	
  	
  	
			
  	

