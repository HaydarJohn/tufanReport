
int isPalindrome(int x) {
   if(x < 0 || (x != 0 && x % 10 == 0)) {// Check if the number is negative or ends with a zero (excluding zero itself)
    return 0; // If either condition is true, return false, as numbers like -121 or 10 cannot be palindromes
   }
    int check = 0; // Initialize a variable to store the reversed number
    while(x > check) { // Continue reversing until the original number becomes less than the reversed number
    check = check * 10 + x % 10; // Reverse the number: multiply the current reversed number by 10 and add the last digit of x
    x /= 10; // Remove the last digit from the original number
    }
    return (x==check || x==check/10); 
}