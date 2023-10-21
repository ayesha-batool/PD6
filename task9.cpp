#include<iostream>
using namespace std;
string checkPointPosition(int height, int x, int y);
int main()
{
int x, y,height;
cout<<"Enter height: ";
cin>>height;
cout<<"Enter x coordinate: ";
cin>>x;
cout<<"Enter y coordinate: ";
cin>>y;
string result=checkPointPosition(x,y,height);
cout<<result<<endl;
}
string checkPointPosition(int height, int x, int y){
       if(x<0||x>3*height||y<0||y>3*height||y>4*height||(x==3*height && y>height)||(x<height && y>height)||(x>2*height && y>height))
       {return "Outside";}
       if((x == 0 || y== 0)|| (x == height && y == height) || (x==height && height < y < 4*height)||(x == 2*height && height <= y <= 4*height)||(x== 3*height && y <= height))
       { return "Border";
       }
       else
        {return "Inside";
       }
       
       }