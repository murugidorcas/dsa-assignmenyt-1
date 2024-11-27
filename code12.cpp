int main()
{
cout << "Pattern Searching" << endl;
// Input target string
string targetStr; cout << "Input target string -> ";
getline(cin, targetStr);
// Input pattern string
string patternStr; cout << "Input pattern string -> ";
getline(cin, patternStr);
// Find the pattern
vector<int> myvector = SearchPattern(
targetStr, patternStr);
// Show the result to user 
cout << "'" << patternStr << "' is ";
if(myvector.size() > 0)
{
cout << "found at index ";
for ( vector<int>::iterator it = myvector.begin();
it != myvector.end(); ++it)
{
cout << *it << " ";
}
}else
{
cout << "NOT found";
}
cout << endl; return 0;
}