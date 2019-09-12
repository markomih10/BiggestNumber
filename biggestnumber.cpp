//Author:
#include<iostream>

int main()
{
  //declare variables here
        int first=5;
        int second=3;
        int biggest=5;

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>first;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>second;

  //determine if first or second is bigger and store that in a third variable
  if(first>second)
  {
          biggest=first;
  }
  else
  {
          biggest=second;
  }


  std::cout<<"Of those two numbers, the biggest is:\n ";
  //print out the variable representing the biggest number
  std::cout<<biggest;
  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
