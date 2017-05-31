#include<iostream>
#include<conio.h>
#include <bits/stdc++.h>

using namespace std;
long long int atleastage = 0,actualAge = 0;

long long convert(long long base)
{
    
    vector<int> d;
    long long cpy = actualAge, ans=0;
    while(cpy > 0)
	{
        long long t = cpy % base;
		                                //remainder
        if(t > 9)
	      {
            return -1;
	      }
        d.push_back(t);                  //pushing back into vector array
        cpy = cpy / base;01;             //quotient
    }
    
    for(int i=d.size()-1;i>=0;i--)
       {                              	 //it gives number of array element
        ans = ans * 10 + d[i];
       }
    return ans;
}
 
long long basecheck()
{
long long ans = -1;

    long long checkup = 5000000000000000000;
    
            
    for(long long base = 10; base<=100000; base++)
    {
        long long num = convert(base);
        if(num>=atleastage)
	     {
            if(checkup>num)
	        {     
			    checkup=num;
                ans = base;
			}
         }
    }
return ans;
}

int main()
 {
     
    long long ans = 0;		
    char choice;
    
    do
    {
    cout<<"\nPlease Enter Actual age\n";
    cin>>actualAge;
    while(!cin)    //It is Used for integer validation, it will accept only integers
      {
    	cin.clear();
		cin.ignore();
		cout<<"\nPlease Enter Integer Value Only:-\n";
    	cin>>actualAge;
      }
      
    if(actualAge>9)
    {
    cout<<"\nPlease Enter atleast age\n";
    cin>>atleastage;
    while(!cin)
      {
    	cin.clear();
    	cin.ignore();
        cout<<"\nPlease Enter Integer Value Only:-\n";
        cin>>atleastage;
	  }
	  
    if(atleastage<actualAge)
  {
    cout<<"Answer is: "<<basecheck();
    cout<<"\n\nDo You Want To Continue(Y/N): ";
    cin>>choice;
  }
else
    {
	  cout<<"Invalid Input";
	}
    } 
   else
      {
      cout<<"Invalid Input. Please Enter Age Greater Than 9: ";
	  }
}while(choice!='n' && choice!='N');
    return 0;
	}
