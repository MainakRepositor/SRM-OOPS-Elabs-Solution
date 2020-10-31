#include <iostream>
#include <algorithm>

int main()
{
 std::string s;
  std::cin>>s;
 while (1)
 {  
  std::cout << s <<"\n";
  if (!std::next_permutation(s.begin(),s.end()))
   break;
 }

 return 0;
}