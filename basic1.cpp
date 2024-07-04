#include<bits/stdc++.h>
using namespace std;
int main(){

float x,y,d;
float output ;
cout << "Enter the battery Ah: "  ; 
cin >> x;
cout << "Enter current drawn from motors in Ah :  " ;
cin >> y;
output = (x/y)*60;

cout << "Flight time will be: " <<output <<endl ; 
d = output-(output * 0.20);
cout << "For better Endurance : " <<d ;

return 0;
}