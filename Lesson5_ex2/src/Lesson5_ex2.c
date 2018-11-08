/*
 * Lesson5_ex2.c
 *
 *  Created on: 19 сент. 2017 г.
 *      Author: Sunny
 */


#include<stdio.h>
#include<math.h>

double strToDouble (char str[]) {

int i;
double answer, number, power;
answer = 0;
power = 0;
long int j = 10;

for (i = 0; (str[i] >= '0' && str[i] <= '9')||(str[i]=='-' && i==0); i++) {
if(str[i] == '-' && i == 0) i++;
number = str[i] - '0';
answer = answer * 10 + number;
}

if(str[i] == '.') {
i++;
for (; str[i] >= '0' && str[i] <= '9'; i++) {
number = str[i] - '0';
answer = number / j + answer;
j *= 10;
}
}

if(str[i] == 'e' && str[i + 1] == '-') {
i += 2;
for(; str[i] >= '0' && str[i] <= '9'; i++) {
number = str[i] - '0';
power = power * 10 + number;
}
power = power - (power * 2);
} else if(str[i] == 'e' && str[ i + 1] != '-') {
i++;
for(; str[i] >= '0' && str[i] <= '9';i++) {
number = str[i] - '0';
power = power * 10 + number;
}
}

if(str[0] == '-') {
answer = (answer - (answer * 2));
}

return answer * pow (10, power);
}

int main() {

printf("%lf\n", strToDouble("123456"));
printf("%lf\n", strToDouble("-123.456"));
printf("%g\n", strToDouble("123.456e13"));
printf("%g\n", strToDouble("123.456e-13"));

return 0;
}
