#include <iostream>
#include <math.h>
using namespace std;
void main()
{
 float q1;
 float q2;
 float q3;
 float mid;
 float final;
 float totalq,total;
 
 cout<<"============QUIZZES============="<<endl;
 cout<<"Enter first quizz (10) : ";
 cin>>q1;
 cout<<"Enter second quizz(10) : ";
 cin>>q2;
 cout<<"Enter thrids quizz(10) : ";
 cin>>q3;
 cout<<"============Mid-term============"<<endl;
 cout<<"Enter mid-term   (40) : " ;
 cin>>mid;
 cout<<"=============FINAL=============="<<endl;
 cout<<"Enter final      (50) : " ;
 cin>>final;
 totalq = (q1+q2+q3)/3;
 total = totalq+mid+final;

 cout<<"Quiz total : "<<totalq<<endl;
 cout<<"Mid term   : "<<mid<<endl;
 cout<<"Final      : "<<final<<endl;
 cout<<"Total      : "<<total<<endl;
 cout<<"Your score is "<<((total>=50) ? "Pass":"Fall")<<endl;
 cout<<endl;
 cout<<"\tWorawich Piriyayothakul"<<endl;

}