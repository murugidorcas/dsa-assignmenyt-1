int main()
{
cout << "Decimal To Binary String" << endl;
// Input a decimal number
int decNum; cout << "Input a decimal number -> "; cin >> decNum;
// Convert to binary string
string binaryString = DecimalToBinaryString(decNum);
// Show the result to user 
cout << "Binary string of " << decNum; 
cout << " is '" << binaryString; 
cout << "'" << 
endl; return 0;
}