//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//
//    string rev = string(str.rbegin(), str.rend());
//
//    if (str == rev)
//        cout << "Palindrome" << endl;
//    else
//        cout << "Not Palindrome" << endl;
//
//    return 0;
//}



#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    int vowelCount = 0;
    int consonantCount = 0;
    
  
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        
       
        char lowerCh = tolower(ch);
        
      
        if (isalpha(ch)) {
            
            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || 
                lowerCh == 'o' || lowerCh == 'u') {
                vowelCount++;
            } else {
                consonantCount++;
            }
        }
    }
    
    cout << "Vowels: " << vowelCount << endl;
    cout << "Consonants: " << consonantCount << endl;
    cout << "Total alphabetic characters: " << vowelCount + consonantCount << endl;
    
    return 0;
}
    
    
