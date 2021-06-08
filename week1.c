#include <stdio.h>

int main (){

inFile >> firstname >> lastname >> workdepart >> mgs >>
bonuspercnt>>taxpercnt>>dist_travel>>traveling_time>>totalCups>>cost_Coffee-
cup

cout << fixed << showpoint << setprecision (2);

paycheck = (mgs-(mgs*(taxpercnt/100.0))) +
((mgs-(mgs*(taxpercnt/100.0)))*(bonuspercnt/100.0));

avgSpeed=dist_travel/traveling_time;

saleAmount = totalCups * cost_coffee_cup;

cout<< "Name: " << firstname << "" << lastname << ", department: " <<
workdepart<<end1;

cout<< "Monthly Gross Salary: $" << mgs <<", Monthly Bonus:"
<<bonuspernt<<"%, Taxes: "<<taxpercnt<<"%"<<end;

cout<< "Paycheck: $" << paycheck << end1;

cout<< "Distance Travelled: "<< dist_travel <<"miles"<<", Traveling
Time:",,traveling_time<<" hours"<< end1;

cout<<"Average Speed: "<<avgSpeed<<" miles per hour"<<end1;

cout<< "Number Of Coffee Cups Sold: " <<totalCups <<", Cost:
$"<<cost_Coffee_cup<<" per cup"<< end1;

s

s

cout<<"Sale Amount= $"<<salesAmount<<end1;

infile.close();

outfile.open("outData.txt");

outfile << fixed << showpoint << setprecision(2);

outFile << "Name: " << firstname << " " << lastname << ",Department: " <<
workdepart<<end1;

outFile<< "Number Of Coffee Cups Sold: "<< totalCups <<", Cost:$"
<<cost_Coffee_cup<<" per cup"<<end1;

outfile<<"sale Amonut= $"<<salesAmount<<end1;

outFile.close();

return 0;

}
