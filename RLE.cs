Console.Write("Enter string of data to compress (RLE): ");
string rawData = Console.ReadLine();

for (int letterNum = 0; letterNum < rawData.Length; letterNum++)
{
    var num = 1;
    while (letterNum < rawData.Length - 1 && rawData[letterNum] == rawData[letterNum + 1])
    {

        num++;
        letterNum++;

    }
    Console.Write($"{num}{rawData[letterNum]}");
}