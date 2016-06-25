
/* 
 * File:   main.cpp
 * Author: Dr. Sal Carbajal
 * on June 22, 2016, 8:20 PM
 * Purpose:  Land Conversion problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float CNVFTAC=4.356e4f;//ft^ to acre
const float CNVMFT=1/5.28e3f;//miles to ft

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nAcres;//number of acres
    float nSqMls;//Number of square miles
    
    //Input Data
    cout<<"Enter the number of acres to convert to square miles"<<endl;
    cin>>nAcres;
    //Process the Data
    nSqMls=nAcres*CNVFTAC*CNVMFT*CNVMFT;
    
    
 
    
    
    //Output the processed Data
    cout<<nAcres<<"acres ="<<nSqMls<<" miles^2"<<endl;
    
    //Exit Stage Right!
    return 0;
}

