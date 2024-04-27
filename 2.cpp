#include <iostream>
#include <string>
using namespace std;

int main(){
    double x=0;
    double y=0;

    //user input
    cout<<"enter number of rows";
    cin>>x;

    cout<<"enter number of columns";
    cin>>y;
   

    //dynamically allocates number of rows
    double **pArray = new double* [x];

    //dynamically allocates number of columns
    for(int i; i<x; i++){
        pArray[i] = new double[y];
    }

    //control to make sure dimensions above 3 arent entered
    if(x==3 || y==3){
        return 0;
    }

    else{
        for(int j; j<x; j++){
            for(int k; k<y; k++){
                pArray[j][k] = j+k;
                cout<<pArray[j][k]<<" ";
            }
        }
        return 0;
    }

}