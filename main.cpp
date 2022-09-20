#include<bits/stdc++.h>
#include <windows.h>
using namespace std;
string Decimal_to_Binary(long long int n){
     system("Color 20");
     string bin="";
     while(n!=0){
               if(n&1){
                    bin=bin+'1';
               }
               else{
                  bin=bin+'0';
               }
       n=n/2;
     }
     reverse(bin.begin(),bin.end());
     return bin;
}
long long int Binary_to_Decimal(long long int n){
     system("Color 20");
     long long int rev,dec=0,b=1;
while (n> 0)
	{
	dec = dec +(n%10)* b;
	b =b*2;
	n=n/10;
	}
	return dec;
}
long long int Octal_to_Decimal(long long int n){
     system("Color 20");
long long int dec=0,b=1;
while(n!=0){
          dec=dec*10+(n%10)*b;
          b=b*8;
          n=n/10;
}
return dec;
}
long long int Decimal_to_Octal(long long int n){
     system("Color 20");
long long int oct=0,b=1;
while(n!=0){
 oct=oct+(n%8)*b;
b=b*10;
n=n/8;
}
return oct;
}
string Decimal_to_Hexadecimal(long long int n){
     system("Color 20");
     long long int temp,i=0;
     string hexa="";
 while (n != 0) {
        temp = n % 16;
        if (temp < 10) {
          hexa=hexa+(char)(temp + 48);
        }
        else {
             hexa=hexa+(char)(temp + 55);
        }
        n = n / 16;
    }
    reverse(hexa.begin(),hexa.end());
return hexa;
}
int main()
{
     int p=1;
    while(p)
    {
         system("Color B0");
        cout<<"******* BASE-N CALCULATOR *******";
        cout<<endl<<endl<<"***************************************"<<endl;
        cout<<"* 1 ->       Decimal to Binary      *"<<endl;
        cout<<"* 2 ->       Binary to Decimal      *"<<endl;
        cout<<"* 3 ->       Octal to Decimal       *"<<endl;
        cout<<"* 4 ->       Decimal to Octal       *"<<endl;
        cout<<"* 5 ->       Hexadecimal to Decimal *"<<endl;
        cout<<"* 6 ->       Decimal to Hexadecimal *"<<endl;
        cout<<"* 7 ->       quit the program       *"<<endl;
        cout<<"***************************************"<<endl<<endl;
        cout<<"enter your choice :- ";
        long long int p,n;
        cin>>p;
        switch(p){
        case 1:
          {
                cout<<"ENTER DECIMAL NUMBER : ";
                cin>>n;
                cout<<"BINARY NUMBER : ";
               cout<<Decimal_to_Binary(n)<<endl;
               break;
          }
        case 2:
          {
             cout<<"ENTER BINARY NUMBER : ";
               cin>>n;
               cout<<"DECIMAL NUMBER : ";
               cout<<Binary_to_Decimal(n)<<endl;
              break;
          }
      case 3:
          {
               cout<<"ENTER OCTAL NUMBER : ";
               cin>>n;
               cout<<"DECIMAL NUMBER : ";
               cout<<Octal_to_Decimal(n)<<endl;
               break;
          }
        case 4:
          {
               cout<<"ENTER DECIMAL NUMBER : ";
                cin>>n;
                cout<<"OCTAL NUMBER : ";
              cout<<Decimal_to_Octal(n)<<endl;
              break;
          }
          case 5:
          {
               cout<<"ENTER HEXADECIMAL NUMBER : ";
                cin >>hex >> n;
                system("Color 20");
                cout<<"DECIMAL NUMBER : ";
                cout << n << endl;
               break;
          }
        case 6:
          {
               cout<<"ENTER DECIMAL NUMBER : ";
                cin>>n;
                cout<<"HEXADECIMAL NUMBER : ";
              cout<<Decimal_to_Hexadecimal(n)<<endl;
              break;
          }
        case 7:
          {
               system("Color 47");
               cout<<"You stop the program";
               return 0;
          }
        default:
          {
               cout<<"Enter valid choice.\n";
               break;
          }
        }
        cout<<"ARE YOU WANT TO CONTINUE?"<<endl;
        cout<<"1.YES\n";
        cout<<"2.NO\n";
        cin>>p;
       if(p==2){
           system("Color 47");
               cout<<"You stop the program";
               return 0;
       }
    }
}
