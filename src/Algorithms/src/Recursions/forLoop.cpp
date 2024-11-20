#include <iostream>
#include <vector>
#include <string>
#include <string.h>

using namespace std;

int sum(int n);
int Factorial(int number);
int FindAverage();
void MultiDimensionArray();
int FrequecyOfCharaterInString(char input[], char character);
void CountVowelConsonants(char input[]);
void reverseString();
int simpleArraySum(int ar[]);

int main()
{
      // int a = 5;
      // int b = 4;

      // int c;

      // c = a + b;
      // printf("a+b = %d \n", c);

      // printf("c/a = %d \n", c / 4.5);

      // cout << "***************************************";

      // int e = 5;
      // int f = 5;

      // cout << ++e << endl;
      // cout << f++ << endl;
      // cout << ++f << endl;

      // cout << "******************* Odd and even********************";

      // int userInput;

      // cout << " enter any no \n";
      // cin >> userInput;
      // if (userInput % 2 == 0)
      // {
      //       cout << "even number \n";
      // }
      // else
      //       cout << "odd Number \n";

      // cout << "***************** Print no from 1 to 10************* \n";

      // for (int i = 1; i < 11; ++i)
      // {
      //       cout << i << endl;
      // }

      // cout << "Calculate sum of first n natural number \n";

      // int number;
      // cout << "Enter number = ";
      // cin >> number;
      // int sum = 0;
      // for (int count = 1; count <= number; ++count)
      // {
      //       sum = sum + count;
      // }

      // cout << "Sum value = " << sum << endl;

      // cout << "Factorial Example";

      // cout << "Enter no";

      // int userInput;

      // cin >> userInput;

      // int holdFactorialValue = 1;
      // for (int count = 1; count <= userInput; ++count)
      // {
      //       holdFactorialValue = holdFactorialValue * count;
      //       cout << holdFactorialValue << endl;
      // }

      // int num = 5;
      // int result = 1;

      // for (int i = 1; i <= num; ++i)
      // {
      //       result = result * i;
      // }
      // printf("%d", result);

      // cout << "While loop scenario \n";

      // int i = 1;
      // while (i <= 10)
      // {
      //       cout << i << endl;
      //       ++i;
      // }

      // cout << "do while loop scenario \n";

      // int userInput;
      // int sum = 0;
      // do
      // {
      //       cout << "Enter a number \n";
      //       cin >> userInput;
      //       sum = sum + userInput;

      // } while (userInput != 0);

      // cout << "Sum of No = " << sum << endl;

      // cout << "count No of digit \n";

      // int input = 12345;

      // int count = 0;

      // while (input != 0)
      // {
      //       count++;
      //       input = input / 10;
      //       cout << input << endl;
      // }

      // cout << count << endl;

      // cout << "Find odd and even in the 2 digit no else return false \n";

      // int oddEvenUserInput = 36;

      // int tensPlace = oddEvenUserInput / 10;
      // int unitPlace = oddEvenUserInput % 10;

      // if (tensPlace % 2 == 0 && unitPlace % 2 != 0){

      // }

      //       cout << "Sum of digit \n";
      //       int num = 12345;
      //       int sum = 0;

      //       while (num != 0)
      //       {
      //             int lastDigit = num % 10;
      //             sum = sum + lastDigit;
      //             num = num / 10;
      //       }
      //      cout << sum << endl;

      // cout << "Prime Number \n";

      // int primeNo = 21;
      // int isPrime = 0;
      // if (primeNo == 0 || primeNo == 1)
      // {
      //       isPrime = 0;
      // }

      // for (int i = 2; i <= primeNo / 2; ++i)
      // {
      //       if (primeNo % i == 0)
      //       {
      //             isPrime = 0;
      //       }

      //       isPrime = 1;
      // }

      // cout << "sum of N natural no \n";
      // int inputNaturalNo = 7;
      // int result = sum(inputNaturalNo);
      // cout << result << endl;

      // cout << "Factorial with recurssion \n";
      // int result = Factorial(5);
      // cout << result << endl;

      // cout << "Average of Array element" << endl;
      // float result = FindAverage();
      // cout << result << endl;

      // cout << "MultiDimension Array print out" << endl;
      // MultiDimensionArray();

      // cout << "Count Frequncy of character in a string" << endl;
      // char name[30];
      // printf("Enter name: ");
      // fgets(name, sizeof(name), stdin); // Function to read string from user.
      // char character[] = "y";
      // int countValue = FrequecyOfCharaterInString(name, character[0]);
      // puts(name); // Function to display string.
      // cout << "Result count frequency : " << countValue << endl;

      // cout << "Count Vowels, Consonants in a string" << endl;
      // char statements[40];
      // printf("Enter statement: ");
      // fgets(statements, sizeof(statements), stdin); // Function to read string from user.
      // CountVowelConsonants(statements);
      // puts(statements); // Function to display string.

      // cout << "Revese string" << endl;
      // reverseString();

      int ar[10] = {338, 65, 713, 595, 428, 610, 728, 573, 871, 868};
      int result = simpleArraySum(ar);

      return 0;
}

int sum(int n)
{
      if (n != 0)
      {
            cout << "current n : " << n << " n-1 :" << n - 1 << endl;
            return n + sum(n - 1);
      }

      cout << n << endl;
      return n;
}

int Factorial(int number)
{
      if (number != 0)
      {
            cout << "current number : " << number << endl;
            cout << " n-1 :" << number - 1 << endl;
            return number * Factorial(number - 1);
      }

      cout << number << endl;
      return 1;
}

int FindAverage()
{
      int inputNumber[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1};
      float length = sizeof(inputNumber) / sizeof(inputNumber[0]);
      float sum = 0;
      for (int i = 0; i < length; ++i)
      {
            sum = sum + inputNumber[i];
      }

      cout << "average value :" << sum / length << endl;

      return sum / length;
}

void MultiDimensionArray()
{
      int result[2][2];

      int inputArrayA[2][2] = {
          {1, 3},
          {4, 5}};

      int inputArrayB[2][2] = {
          {1, 3},
          {4, 5}};

      for (int i = 0; i < 2; ++i)
      {
            for (int j = 0; j < 2; ++j)
            {
                  result[i][j] = inputArrayA[i][j] + inputArrayB[i][j];
                  cout << "A :" << inputArrayA[i][j] << endl;
                  cout << "B :" << inputArrayB[i][j] << endl;
            }
      }

      cout << "OUTPUT" << endl;

      for (int i = 0; i < 2; ++i)
      {
            for (int j = 0; j < 2; ++j)
            {
                  cout << result[i][j] << " ";
            }

            cout << endl;
      }
}

int FrequecyOfCharaterInString(char input[], char character)
{
      int counter = 0;
      for (int i = 0; input[i] != '\0'; ++i)
      {
            if (character == input[i])
            {
                  ++counter;
            }
      }

      return counter;
}

void CountVowelConsonants(char input[])
{
      int vowelCounter, consonantsCounter = 0;
      for (int i = 0; input[i] != '\0'; ++i)
      {
            if (input[i] == 'a' || input[i] == 'e' || input[i] == 'i' || input[i] == 'o' || input[i] == 'u')
            {
                  ++vowelCounter;
            }
            else
            {
                  ++consonantsCounter;
            }
      }

      cout << "Vowel Counter : " << vowelCounter << endl;
      cout << "Consonants : " << consonantsCounter << endl;
}

void reverseString()
{
      char c;
      cout << "enter statement" << endl;
      cin >> c;
      if (c != '\n')
      {
            reverseString();
            printf("%c", c);
      }
}

int simpleArraySum(int ar[])
{
      double sum = 0;
      int arrayLength = sizeof(ar) / sizeof(ar[0]);
      for (int i = 0; i < arrayLength; ++i)
      {
            sum = sum + ar[i];
      }

      return sum;
}

// string reverseString(const string& str) {
//     string reversedStr = str;
//     int n = reversedStr.length();

//     // Swap characters from start to end
//     for (int i = 0; i < n / 2; ++i) {
//         char temp = reversedStr[i];
//         reversedStr[i] = reversedStr[n - i - 1];
//         reversedStr[n - i - 1] = temp;
//     }

//     return reversedStr;
// }