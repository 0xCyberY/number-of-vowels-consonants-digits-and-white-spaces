#include <iostream>
using namespace std;
class Number{
public:
char line[150];
int vowels=0, consonants=0, digits=0, spaces=0;
void print()
{
cout << "Enter a line of string: ";
cin.getline(line, 150);
for(int i = 0; line[i]!='\0'; ++i)
{
if(line[i]=='a' || line[i]=='e' || line[i]=='i' ||
line[i]=='o' || line[i]=='u' || line[i]=='A' ||
line[i]=='E' || line[i]=='I' || line[i]=='O' ||
line[i]=='U')
{
++vowels;
}
else if((line[i]>='a'&& line[i]<='z') || (line[i]>='A'&& line[i]<='Z'))
{
++consonants;
}
else if(line[i]>='0' && line[i]<='9')
{
++digits;
}
else if (line[i]==' ')
{
++spaces;
}
}
}
void display()
{
cout << "Vowels: " << vowels << endl;
cout << "Consonants: " << consonants << endl;
cout << "Digits: " << digits << endl;
cout << "White spaces: " << spaces << endl;
}
};
int main()
{
Number obj;
obj.print();
obj.display();
return 0;
}

