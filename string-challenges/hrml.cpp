#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   vector<string> tags, attribute;
   string hrml = "<tag1 name=\"hello\">";
   stringstream ss(hrml);
   string current_tag,current_attribute;
   bool tag_found=false, attribute_mode=false;
   for (int i=0; i<hrml.size();i++){
      if (attribute_mode){


      }
      if (tag_found){
         if (hrml[i]==' '){
            attribute_mode=true;
            attribute.push_back(current_tag);
         };
         current_tag += hrml[i];
      }
      if (hrml[i]=='<'){
         tag_found=true;
      }
   }
    
    
    
    return 0;
}
