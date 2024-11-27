int main()
{
cout << "Subsequence String" << endl; 
cout << "Check if 1st string is a "; 
cout << "subsequence of 2nd string" << 
endl;
// Input first string
string string1; cout << "Input 1st string -> ";
getline(cin, string1);
// Input second string
string string2; cout << "Input 2nd string -> ";
getline(cin, string2);
// Check if str1 is subsequence of str2
cout << "'" << string1 << "' is ";
if(IsSubSequence( string1, string2, string1.size(), string2.size()))
{
cout << "subsequence";
}else
{
cout << "NOT subsequence";
}
cout << " of '" << string2; 
cout << "'" << 
endl; return 0;
}