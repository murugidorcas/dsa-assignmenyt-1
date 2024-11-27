int main()
{
cout << "Palindrome" << endl;
// Input string
string str; cout << "Input string -> ";
getline(cin, str);
// Check if it is palindrome
cout << "'" << str << "' is ";
if(IsPalindrome(str))
{
cout << "a palindrome";
}else
{
cout << "NOT a palindrome";
}
cout << endl; return 0;
}