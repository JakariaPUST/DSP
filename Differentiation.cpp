/**

In this problem we are given some values of x and y and told to differentiate at some point
If x and y are two arrays then

Formula dy/dx = (y[next_value_of_differentiation_Point]-y[differentiation_Point]) / (x[next_value_of_differentiation_Point] - x[differentiation_Point - 1])

For example

                  Array Index= 0 1 2 3 4
                 --------------------------
                            x= 1 2 3 4 5
                            y= 6 7 8 9 10
                            --------------
Differentiation Point can be   1 2 3 4 5

We are told to differentiate at point 3

At point 3

dy/dx = (y[3]-y[3-1]) / (x[3] - x[3-1]) // Remember for calculating difference of x and y
      = (9-8)/(4-3)                     // we need to subtract the value at differentiation point
      = 1                               // from the value at next index of differentiation point

                                    // as differentiation point 3 indicates index 4 of x and y values
                                    // that's why we subtract y[3]-y[3-1] and x[3]-x[3-1]



**/



#include<iostream>

using namespace std;

int main()
{
    int no_of_value,dif_point;
    char check='y';

    cout<<"How many no of values of x & y\n";
    cin>>no_of_value;

    float x[no_of_value],y[no_of_value];

    cout<<"Enter values of x\n";
    for(int i=0;i<no_of_value;i++){
        cin>>x[i];
    }

    cout<<"Enter values of y\n";
    for(int i=0;i<no_of_value;i++){
        cin>>y[i];
    }


    while(check=='y' || check=='Y'){

        cout<<"Enter differentiation point\n";
        cin>>dif_point;
        cout<<"Value of differentiation at point "<<dif_point<<" is ";
        cout<<(y[dif_point]-y[dif_point-1])/(x[dif_point]-x[dif_point-1])<<endl;
        cout<<"Want to differentiate again(y/n): ";
        cin>>check;
    }


    return 0;
}
