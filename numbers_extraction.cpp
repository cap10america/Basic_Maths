#include<bits/stdc++.h>
using namespace std;

// void basic_maths()
// {
// //7789 is a number we want all numbers indiidually like 9,8,7,7

// int num;
// cout<< " enter the number ";
// cin>>num;
// while (num>0)
// {
//      int last_digit=num%10;

//      num=num/10;
//            cout<<last_digit<<endl;
    
// }
// bool checkArmstrong(int n)
// {

// 	//Write your code here

// 	int original_num=n;
// 	int last_digit=0;
// 	int armstrong=0;
// 	int count=0;
// 	while (n>0)
// 	{
//  int k = to_string(n).length();	
//  	last_digit=n%10;
// 		n=n/10;
		
// 		armstrong += pow(last_digit, k); 
// 	}
// 	if (original_num==armstrong)
// 	{
// 		return true;

// 	}
// 	else{
// 		return false;
// 	}
// };



// }



// //


void reverse_num() {
	// Write your code here
	int n;
	cin>>n;
	int revNum=0;
	while(n>0)
	{
		int lastDigit=n%10;
		n=n/10;
		revNum=(revNum*10)+lastDigit;
	} cout<<revNum;

}
void palindrome()
{int n;
   cout<<"enter the num to check thenum is  palindrome or not ....";
cin>>n;

    int rev_num=0,last_digit =0,given_num=n;
    while(n>0){

        last_digit=n%10;
        n=n/10;
        rev_num=(rev_num*10)+last_digit;

    }
    if(given_num==rev_num)
    {
   cout<< "true";


    }
    else{
cout<<"false";    }

}

int main()
{
   // void basic_maths();
   // void reverse_num();
   void palindrome();
    return 0;
}