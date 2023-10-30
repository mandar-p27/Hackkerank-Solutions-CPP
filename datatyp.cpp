#include <iostream>
#include <iomanip>  // for "fixed" and "setprecision" functions
using namespace std;

int main() {  
int n; 
long l; 
char b; 
float c; 
double d; 

cin >> n >> l >> b >> c >> d;

cout <<n <<endl;

cout <<l <<endl;

cout <<b <<endl;

cout <<fixed << setprecision(3)<< c <<endl;

cout <<fixed << setprecision(9)<< d <<endl;

return 0;
}