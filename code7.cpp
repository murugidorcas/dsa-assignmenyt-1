vector<string> GenerateSubsequences( string str)
{
// Return value is stored
// on vecString
vector<string> vecString;
// Retrieve str length
int strLen = str.size();
// bitCounter is used to check
// character position
int bitCounter = pow(2, strLen);
// Check from 000..001 to 111..111
// Empty subset is ignored
for (int i = 1; i < bitCounter; ++i)
{
// Temporary variable
// to store current subsequence
string subsequence = "";
// Construct the new subsequence string
for (int j = 0; j < strLen; j++)
{
// Check if j-th bit in the bitCounter is set
// If so, pick j-th character from str
if (i & (1 << j))
{
subsequence += str[j];
}
}
// Put it to vector vecString.push_back(subsequence);
}
// Return the vector
return vecString;
}