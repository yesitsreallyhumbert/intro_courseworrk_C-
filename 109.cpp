#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){


int array[] = {2,3,72,85,42};
int a = -1;
int b = -1;

int index = 0;
int n = 5;

while(index < n){
//cout << index << " " << "a: " << a << " " << "b: " << b << " " << endl;
if (array[index] > b){
b = array[index];
}
if (array[index] > a){
b = a;
a = array[index];
}

//cout << index << " " << "a: " << a << " " << "b: " << b << " " << endl;
index++;
}
cout << b;

return 0;
}
