#include<iostream>
using namespace std;

int main (){

int array[10]={10,12,52,96,65,84,78,56,59,23};
int sum=0;

for (int i=0; i<10; i++){
    sum=sum+array[i];
}

    cout<<"The sum of all the elements of the array of size 10 is : "<<sum<<endl;

    return 0;
}
