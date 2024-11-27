string DecimalToBinaryString(
int decimalNumber)
{
// Initial result string binaryString = "0";
// Only perform this procedure
// if decimalNumber is greater than 0
if(decimalNumber > 0)
{
// Reset result
binaryString = "";
// Declare a variable for division process div_t dv{};
// Initialize the division quot
dv.quot = decimalNumber;
// Perform these procedure
// until the quot is 0
do
{
dv = div(dv.quot, 2);
binaryString = to_string(dv.rem) + binaryString;
}while(dv.quot);
}
// return the binary string
return binaryString;
}