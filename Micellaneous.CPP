#include<iostream>
using namespace std;
void Even_Odd(int x)
{
   if(x%2==0)
   {
       cout<<"Even Number";
   }
   else
   {
       cout<<"Odd Number";
   }
}
void Armstrong( int x)
{
    int n=x,rem,res=0;
    while(n!=0)
    {
        rem=n%10;
        res=res+rem*rem*rem;
        n=n/10;
        
    }
    if(res==x)
    {
        cout<<"Armstrong Number ";
    }
    else
    {
        cout<<"Not Armstrong Number !";
    }
}
void Pelindrome( int x)
{
     int res=0,rem,n=x;
   while(x!=0)
   {
       rem=x%10;
       res=res*10+rem;
       x=x/10;
   }
   if(n==res)
   {
       cout<<"Pelindrome Number";
   }
   else
   {
       cout<<"Not Pelindrome Number !";
   }
}
void Prime( int x)
{
    int j=x/2,count=0;
    for(int i=2;i<j;i++)
    {
        if(x%i==0)
        {
            count++;
        }
    }
    if(count==0)
    {
        cout<<"Prime Number";
    }
    else
    {
        cout<<"Not Prime Number !";
    }
}
void Factorial(int x)
{
    int i,res=1;
    for(i=x;i>1;i--)
    {
        res=res*i;    
    }
    cout<<"Factorial of "<<x<<" is "<<res;
}
void Reverse_No( int x)
{
   int res=0,rem;
   while(x!=0)
   {
       rem=x%10;
       res=res*10+rem;
       x=x/10;
   }
   cout<<"Reverse Number is :"<<res;
}
void Fibonacci()
{
    int a=0,b=1,c,size;
    cout<<"Enter Size of Series :";
    cin>>size;
    cout<<"Fibonacci Series is :"<<a<<" "<<b;
    for(int i=2;i<size;i++)
    {
        c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    
}
void Swap( int x, int y)
{
     int z;
    cout<<"Before Swapping :"<<x<<" "<<y<<endl;
    z=x;
    x=y;
    y=z;
    cout<<"After Swapping :"<<x<<" "<<y;
}
int main()
{
    int ch;
    cout<<"Choices :"<<endl; 
    cout<<"1:Even Odd"<<endl; 
    cout<<"2:Armstrong Number"<<endl; 
    cout<<"3:Pelindrome Number"<<endl; 
    cout<<"4:Prime number"<<endl; 
    cout<<"5:Factorial"<<endl; 
    cout<<"6:Reverse Number"<<endl; 
    cout<<"7:Fibonacci Series"<<endl; 
    cout<<"8:Swaping Two Numbers"<<endl; 
    cout<<"Enter Choice:"; 
    cin>>ch;
    int num,num1;
    if(ch==1)
    {
        cout<<"Enter Number :";
        cin>>num;
        Even_Odd(num);
    }
    else if(ch==2)
    {
        cout<<"Enter Number :";
        cin>>num;
        Armstrong(num);
    }
    else if(ch==3)
    {
        cout<<"Enter Number :";
        cin>>num;
        Pelindrome(num);
    }
    else if(ch==4)
    {
        cout<<"Enter Number :";
        cin>>num;
         Prime(num);
    }
    else if(ch==5)
    {
        cout<<"Enter Number :";
        cin>>num;
         Factorial(num);
    }
    else if(ch==6)
    {
        cout<<"Enter Number :";
        cin>>num;
        Reverse_No(num);
    }
    else if(ch==7)
    {
       
        Fibonacci();
    }
    else if(ch==8)
    {
        cout<<"Enter first Number :";
        cin>>num;
        cout<<"Enter Second Number :";
        cin>>num1;
        Swap(num,num1);
    }
    else
    {
        cout<<"Invalid Choice !";
    }
    return 0;
}