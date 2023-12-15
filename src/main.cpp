//
// This function will reverse a C-style string.  
// The general approach here is to set up a pointer at the back of the string
// as well as a pointer to the end of the string.  The two pointers will 
// walk towards one another and swap values

// #include <stdio.h>


// void reverse_string(char* start){

//   char* end = start;
//   char tmp;
 
//   // move the 'end' pointer to the last character
//   while ( *end){ 
//     end++;
//   }
//   end--;
   
//   while( start < end ){
//     tmp = *start;
//     *start = *end;
//     *end   = tmp;
//     start++;
//     end--;
//   }
// }


// int main(){

//   char a[] = "watermelon";
//   char b[] = "fleamarket";

  
//   reverse_string(a);
//   reverse_string(b);

//   printf("%s \n",a);
//   printf("%s \n\n",b);

//   return 0;
// }


#include <iostream>
#include <string>

using namespace std;

void reverse_string(string &a){
    int i = 0;
    int j = a.size() - 1;
    while(i!=j){
      swap(a[i], a[j]);
      i++; j--;
    }
}

int main(){
  string a;
  cout<<"Enter a String >> "<<endl;
  cin>>a;
  cout<<"Original String >> "<<a<<endl;
  reverse_string(a);
  cout<<"Reversed String is >> "<<a<<endl;
  cout<<a<<endl;
  return 0;
}

