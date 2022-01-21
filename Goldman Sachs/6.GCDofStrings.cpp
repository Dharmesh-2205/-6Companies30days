class Solution {
public:
    string gcdOfStrings(string str1, string str2) { // By Using INbuilt Function gcd which checks whether it is divisible by str1 and str2;
        if (str1+str2 == str2+str1){
            return str2.substr(0,gcd(str1.size(),str2.size()));//str1 is also possible 
        }
        return "";
    }
};