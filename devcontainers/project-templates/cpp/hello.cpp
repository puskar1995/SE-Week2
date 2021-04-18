#include <iostream>
#include <vector>
#include <stdlib.h>    


int
main ()
{
  std::vector<int> v;
  for (int i : {5, 4, 3, 2, 1})
  {
    v.push_back (i);
  }

  for (auto val : v)
  {
    std::cout << "...."<<val << ' ' << "\n" ;
  }
  
    int result = (rand() %10) + 1;

    char name[50];
   //std::cout << "what is your name? "; 
   //std::cin >> name; 
   std::cout << "hello " << "name" << " your lucky number is "<< result << std::endl;
  return 0;
}
