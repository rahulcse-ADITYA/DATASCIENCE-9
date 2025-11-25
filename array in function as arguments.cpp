#include <stdio.h>
void display(int marks[])
{
int i=0;
for (i = 0; i<6; i++)
{
printf(" %d",marks[i]);
}
}
int main() {
int marks[] = {56,89,76,98,95,56};
display(marks);
return 0;
}

