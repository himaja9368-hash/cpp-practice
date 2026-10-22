#include <iostream>
using namespace std;
int cube(int n){
  return n*n*n;
}
int main(){
  int num;
cout<<"enter the number which you want cube of :"<<endl;
cin>>num;
//function call
cout<<"Cube of the number is :"<<cube(num)<<endl;
return 0;
}
