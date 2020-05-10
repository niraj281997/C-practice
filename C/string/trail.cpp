#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find largest sub 
// string with same characters 
int Substring(char s[],int n) 
{ 
  
    int ans = 1, temp = 1; 
  
    // Traverse the string 
    for (int i = 1; i < n; i++) { 
        // If character is same as 
        // previous increment temp value 
        if (s[i] == s[i - 1]) { 
            ++temp; 
        } 
        else { 
            //ans = max(ans, temp); 
            //ans = max(ans, temp); 
            if (ans<temp)
		   ans=temp;
            temp = 1; 
        } 
    } 
            if (ans<temp)
		   ans=temp;
  
    // Return the required answer 
    return ans; 
} 
  
// Driver code 
int main() 
{ 
    char s[] = "abcddfffffabc"; 
  int n=sizeof(s);
	  cout<<n<<endl;
    // Function call 
    cout << Substring(s,n); 
  
    return 0; 
}
