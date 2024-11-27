int BinaryStringToDecimal( string binaryString)
{
// Initial result
int decNumber = 0;
// variable for current power base
int n;
// Declare reverse iterator string::reverse_iterator it;
// Iterate all characters in binaryString
// from the last character to the first character
for (
it = binaryString.rbegin(), n = 0;
it != binaryString.rend(); ++it, ++n)
{
// if character '1' is found
// add decNumber with power of current base
char c = *it;
if(c == '1')
{
decNumber += pow(2, n);
}
}
// return the decimal return decNumber;
}