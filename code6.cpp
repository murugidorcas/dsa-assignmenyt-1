int main()
{
cout << "Binary String To Decimal" << endl;
// Input binary string
string binaryString; cout << "Input binary string -> ";
getline(cin, binaryString);
// Convert to decimal
int decNumber = BinaryStringToDecimal(
binaryString);
// Show the result to user
cout << "Decimal of '" << binaryString; 
cout << "' is " << decNumber << 
endl; return 0;
}