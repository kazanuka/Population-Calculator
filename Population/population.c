#include <stdio.h>
#include <cs50.h>
int main(void)
{
int x = 0;
int num;
int sec;


do{
num = get_int("Start Size: ");
sec = get_int("End Size: ");
}
while(sec <= num || num < 9 || sec <= 0);


while(num < sec)
{
num = num + (num/3) - (num/4);
x++;
}

printf("%i\n", x);

}









