bool IsSubSequence( string str1, string str2, int x, int y)
{
// If all characters in str1
// have been checked, // it means that the str1 is subsequence
// of str2
if (x == 0)
{
return true;
}
// There is some characters in str2
// that don't matched with str1
// so return false
if (y == 0)
{
return false;
}
// If last characters of two strings are matching, // continue to check another character
if (str1[x - 1] == str2[y - 1])
{
return IsSubSequence(str1, str2, x - 1, y - 1);
}
// If not, check the second last of str2
else
{
return IsSubSequence(str1, str2, x, y - 1);
}
}