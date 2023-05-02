class Solution {
public:
    bool isPalindrome(int x) {
//       long int a=0,copy=x;
//         while(x>0){
//             a=a*10+x% 10;

//              x/=10;
//         }
//         if (a==copy){
//             return true ;
//         }
    
//   return false ;
string num = to_string(x);
 for(int i = 0 ; i < num.size()/2; i++){
   if(num[i] != num[num.size()-i-1])
     return false;
    }
    return true;
 }
};
