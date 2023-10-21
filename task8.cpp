#include<iostream>
using namespace std;
int calculateVolleyballGames(string yearType, int holidays, int
hometownWeekends);

int main()
{
string yearType;
int holidays,hometownWeekends,play_times;

cout<<"Enter year type: ";
cin>>yearType;

cout<<"Enter number of holidays: ";
cin>>holidays;

cout<<"Enter number of weekends: ";
cin>>hometownWeekends;


int result=calculateVolleyballGames(yearType,holidays,
hometownWeekends);
cout<<result<<endl;


}
int calculateVolleyballGames(string yearType, int holidays, int hometownWeekends)
{
    int weekends_to_play=48-hometownWeekends;
int play_times=(holidays*2/3)+(weekends_to_play*3/4)+hometownWeekends;

if(yearType!="leap"){
return play_times;
}
if(yearType=="leap")
{
 int total_plays_during_leap=play_times+(play_times*0.15);


 return total_plays_during_leap;
 }


}
