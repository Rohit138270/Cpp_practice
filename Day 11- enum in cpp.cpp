#include<iostream>
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
     
    enum IceCream { mango, tender_coconut,strawberry }; 
  
    
    IceCream e = mango; 
  
    switch (e) { 
    case mango: 
        cout << "mango"; 
        break; 
    case tender_coconut: 
        cout << "coconut"; 
        break; 
    case strawberry: 
        cout << "strawberry"; 
        break; 
    default: 
        cout << "dont like ice cream"; 
    } 
    return 0; 
}
