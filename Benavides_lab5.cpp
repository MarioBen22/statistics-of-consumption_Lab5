// Mario Benavides
// Lab 5 - Complete
// This gives statistics about the consumption. 
// The months with the highest and lowest consumption, the yearly average, and the yearly total.

#include<iostream>
#include<string>
using namespace std;


// input consumption and validation
void getData(float cons[12], string m[12]) 					
{
int month_num, flag;
float ammount; 
for(month_num = 0; month_num<12; month_num++)
{
flag = 1;
while(flag)
{
cout<<"Enter water consumption for the month "<< m[month_num] <<": ";
cin>>ammount;
if(ammount >= 0)
{
cons[month_num] = ammount;
flag = 0;
}
else // validation
{
cout<<"Do not use negative numbers."<< endl;
}}}}


// input and validate the year is between 2005 and 2020
int getYear() 											
{
int year, flag = 1;
while(flag)
{
cout<<"Enter year: ";
cin>>year;
if(year >= 2005 && year <= 2020)
return(year);
else
{
cout<<"The year should be between 2005 and 2020."<< endl;
}}}


// display consumption
void display(float ammount[12], string m[12], int year) 		
{
int month_num;
cout<<" \t\t"<<year<<" Consumption Report for Paris, Texas "<< endl;
cout<<endl; // spacing line
cout<<"Month \t\t Consumption in CCF"<< endl;
cout<<"-----------------------------------"<< endl;
for(month_num = 0; month_num<12; month_num++)
{cout<<m[month_num]<<" \t"<< ammount[month_num] << endl;
}}


// findlowest consumption
void findLowest(float ammount[12], string m[12]) 			
{
float min = ammount[0];
int month_num, index = 0;
for(month_num = 1; month_num<12; month_num++)
{
if(ammount[month_num]<min)
{
min = ammount[month_num];
index = month_num;
}}
cout<<endl<<"The lowest consumption was in "<< m[index] <<" with " << min << " CCF" <<endl;
}


// findhighest consumption
void findHighest(float ammount[12], string m[12]) 			
{
float max = ammount[0];
int month_num, index = 0;
for(month_num = 1; month_num<12; month_num++)
{
if(ammount[month_num]>max)
{
max = ammount[month_num];
index = month_num;
}}
cout<<"The highest consumption was in " << m[index] << " with " << max << " CCF" << endl;
}


// findtotal consumption
void findTotal(float ammount[12]) 							
{
float sum = 0;
for(int month_num = 0; month_num<12; month_num++)
{
sum += ammount[month_num];
}
cout<<"The total consumption for the year: "<< sum << " CCF" << endl;
}


// findaverage consumption
void findAverage(float ammount[12]) 						
{
float sum = 0;
for(int month_num = 0; month_num<12; month_num++)
{
sum += ammount[month_num];
}
cout<<"The average consumption for the year: "<< sum/12 << " CCF" << endl;
}


// main function
int main() 												
{
string Months[12] = {"January","February","March  ","April  ","May    ","June   ","July   ",
					"August ","September","October","November","December"};
float consumption[12];
int year;
getData(consumption, Months);
year = getYear();
display(consumption, Months, year);
findLowest(consumption, Months);
findHighest(consumption, Months);
findTotal(consumption);
findAverage(consumption);
}
