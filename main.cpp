#include <iostream>
#include <vector>
#include <string>
#include <tuple> 
#include <fstream>
using namespace std;

int main()
{
   std::vector<int> nums1;
   std::vector<int> nums2;
   std::vector<std::tuple<int, int>> results; 
   for (int i = 0; i < 100; i++) {
      nums1.push_back(i);
      nums2.push_back(i);
   }
   ofstream myfile;
   myfile.open ("example.txt");
   // create all the different pairs of 
   for(int i = 0; i < 100; i++) {
      for(int j = 0; j < 100; j++) {
         myfile << "if(nums1 == " << i << "and nums2 == " << j << "): return " << i + j << endl; 
         //results.push_back({i, j}); 
      }
   }
   myfile.close();
  
  
  //myfile << "Writing this to a file.\n";
  //myfile.close();
  // write to file with the correct python syntax
  
  return 0;

}