int main()
{
cout << "Subsequence Generator" << endl;
// Input string
string str; cout << "Input string -> ";
getline(cin, str);
// Generate subsequences
vector<string> myvector = GenerateSubsequences( str);
// Show the result to user 
cout << "All subsequences of '" << str; 
cout << "':" << endl;
for ( vector<string>::iterator it = myvector.begin();
it != myvector.end(); ++it)
{
cout << *it << " ";
}
cout << endl; return 0;
}