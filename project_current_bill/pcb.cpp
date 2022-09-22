#include<iostream>
using namespace std;


int main(){

int n;
cout<<"koyta device: ";
cin>>n;

double twatt = 0; //total watt
double ttime = 0;   // total time



while (n--)
{
 
    double watt,dtime;
    cout<<"Kto Watt er device: ";
    cin>>watt;  


    cout<<"Ktokhoon chole protidin: ";
    cin>>dtime; 
    
    
    if (dtime==0||watt==0)
    {
        continue;
    }

    twatt = twatt + watt;
    ttime = ttime + dtime;

}



double unit_price;
double unit =  (twatt)*((ttime/60)*30)/1000;
int hisab;
if(unit<=75){
    unit_price = 4.19;
}else if (unit>75 && unit<200)
{
    unit_price = 5.72;
}else if (unit>201 && unit<300)
{
    unit_price = 6.00;
}else if (unit>301 && unit<400)
{
    unit_price = 6.34;
}else if (unit>401 && unit<600)
{
    unit_price = 9.98;
}else if (unit>600)
{
    unit_price = 11.46;
}


hisab = unit*unit_price;

cout<<"Bill : "<<hisab<<"Tk";




return 0; }