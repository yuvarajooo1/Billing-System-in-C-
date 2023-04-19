#include <iostream>

using namespace std;

int main()
{
    int n;
    int a,b,c,d;
    int count=1;
    int f,g,h;
    do{
cout<<"***********juice shop**********"<<endl;
cout<<"1....watermelon =30 rs"<< endl;
cout<<"2.....muskmelon=30 rs"<<endl;
cout<<"3.....lemon=20 rs"<<endl;
cout<<"enter 1 to add items"<<endl;
cout<<"enter 2 to display"<<endl;
cout<<"enter 3 to delete"<<endl;
cout<<"enter 4 to exit"<<endl;
cout<<"enter the number to do actions"<<endl;
cin>>n;
switch(n)
{
case 1:
    cout<<"enter the no of watermelon juice:"<<endl;
    cin>>a;
    cout<<"enter the no of muskmelon juice:"<<endl;
    cin>>b;
    cout<<"enter the no of lemon juice:"<<endl;
    cin>>c;
    d=a*30+b*30+c*20;
    cout<<"the total is: "<<d<<endl;
    break;
case 2:
    cout<<"-----------------bill----------------\n";
    cout<<"watermelon\t";
    cout<<a<<"\t";
    cout<<a*30<<endl;
    cout<<"muskmelon\t";
    cout<<b<<"\t";
    cout<<b*30<<endl;
    cout<<"lemon\t\t";
    cout<<c<<"\t";
    cout<<c*20<<endl;
    cout<<"___________________________________________"<<endl;
    cout<<"total\t\t\t";
    cout<<d<<endl;
    break;
case 3:
    cout<<"enter the no will be deleted in watermelon:";
    cin>>f;
    cout<<"enter the no will be deleted in muskmelon:";
    cin>>g;
    cout<<"enter the no will be deleted in lemon:";
    cin>>h;
    if(f<=a && g<=b && h<=c)
    {
    a=a-f;
    b=b-g;
    c=c-h;
    cout<<"your change is updated to see print the bill again....."<<endl;
    }
    else{
        cout<<"enter the valid input the given value id greater then the value..."<<endl;
    }
    break;
case 4:
    exit(0);
    break;

}
    }
    while(count==1);
cout<<"enter 1 to continue and 0 to quit:";

}



9840866573
