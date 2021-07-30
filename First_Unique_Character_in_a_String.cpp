#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

/* 
 First Unique Character in a String

 Given a string s, find the first non-repeating character in it and return its index. If it does not exist, return -1.

 firstNonRepeatingCharacter("abcdacf"); ==> 1 // pos of 'b'
*/

int firstNonRepeatingCharacter(string string) 
{
  unordered_map<char,int> charFreq;
	
  for(int i = 0; i < string.length(); i++)
  {
	if(charFreq.count(string[i]) == 0)
	  // create instance
	  charFreq.insert(make_pair(string[i],1));
	else
	  // count instance freq
	  charFreq[string[i]]++;
   }
   for(int i = 0; i < string.length(); i++)
   {
	char c = string[i];
	if(charFreq[c] < 2)
	   return i;	
   }
   return -1;
}

// Time: O(n)   Space: O(1)
