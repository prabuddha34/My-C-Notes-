#include <stdio.h>
#include<string.h>
#include<stdbool.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
// Function declaration
/*
int sum1();
int product1();

int main() {
    printf("Hello World! I get it that this is a typical way that is taught to programmers, that's why I am going in an unorthodox way!\n");

    int sum = 2 + 3;
    printf("The sum of the two numbers is %d\n", sum);

    int pro = 2 * 3;
    printf("The product of the two numbers is %d\n", pro);

    int diff = 2 - 3;
    printf("The difference of the two numbers is %d\n", diff);

    int division = 4 / 2;
    printf("The division of the two numbers is %d\n", division);

    printf("Hello I am still learning C from Bro-Code\n");

    sum1();
    product1();

    return 0;
}

// Function definition
int sum1() {
    int a = 4 + 5;
    printf("The sum of the values of a and b is %d\n", a);
    return 0;
}

int product1() {
    int b = 2 * 4;
    printf("The product of the values of a and b is %d\n", b);

    char name[] = "Prax Loves Sara";
    printf("The name of the string is %s\n", name);

    return 0;
}
*/
/*
int main(){

int age=25;
float price=19.99;
char name[]="Prax For Life";

printf("%d\n",age);
printf("%f\n",price);
printf("%c\n",name);


return 0;
}
*/
/*

int main(){
    int x=2;
    int y=3;
    int z=x+y;
    printf("%d\n",z);

return 0;
}
*/

/*
#include <stdio.h>

int main() {
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30];

    printf("Enter your age: ");
    scanf("%d", &age);


    printf("Enter your GPA: ");
    scanf("%f", &gpa);

    printf("Enter your grade (single character): ");
    scanf(" %c", &grade);

    printf("Enter your name: ");
    scanf(" %[^\n]", name);

    printf("\n--- Student Info ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("GPA: %.2f\n", gpa);
    printf("Grade: %c\n", grade);

    return 0;
}

*/
/*
int main(){
int temp=10;
if(temp>0 && temp<30)
    printf("The Tempreature is Good");
else
    printf("not good");
return 0;
}
*/

/*
void happyBirthday(char name[],int age){
    printf("\n Happy Birthday to you dear !");
    printf("\n Happy Birthday to %s",name);
    printf("\n Happy birthday , you're %d years old ",age);
}

int main(){
    char name[60]=" ";

    int age=0;

    printf("Enter your name :-");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';

    printf("Enter yout age:-");
    scanf("%d",&age);


    happyBirthday(name,age);
    return 0;
}

*/
/*
int cube(int a ){
int result=a*a*a;
return result;
}


int square(int a){
int result=a*a;
return result;

}
int add(int a,int b){
return a+b;

}
int subs(int a,int b){
return a-b;
}
int multiplication(int a,int b){
return a*b;
}


int main(){
    int num=0;
printf("Enter the number !");
scanf("%d",&num);

printf("The Square of the value %d\n",square(num));
printf("The Cube of the value  %d\n",cube(num));
printf("The Addition of the number %d\n",add(1,2));
printf("The Substraction of the numbers %d\n",subs(4,5));
printf("The multiplication of the number is %d\n",multiplication(3,5));

return 0;
}
*/
/*
int add(int n1,int n2){
    int result=n1+n2;
    return result;

}

int main(){
int result=add(3,4);
printf("%d",result);
}
*/
/*
int main(){
int number=0;
while(number<=0){
    printf("Enter the number greater than 0:");
    scanf("%d",&number);

}


return 0;
}

*/
/*
#include <stdio.h>
#include <string.h>

int main() {
    char name[50] = "";

    printf("Enter the name: ");
    fgets(name, sizeof(name), stdin);

    if (name[strlen(name) - 1] == '\n') {
        name[strlen(name) - 1] = '\0';
    }

    while (strlen(name) == 0) {
        printf("Name cannot be empty! Enter again: ");
        fgets(name, sizeof(name), stdin);
        if (name[strlen(name) - 1] == '\n') {
            name[strlen(name) - 1] = '\0';
        }
    }

    printf("Hello %s\n", name);
    return 0;
}

*/
/*
int main(){

bool isRunning=true;
char response='\0';
while(isRunning){
    printf("You are playing a game !\n");
    printf("Wanna continue? (y/n):-");

    scanf(" %c",&response);

    if(response!='y')
        isRunning=false;


}

printf("You exited the game");

return 0;
}
*/
/*
int main(){
    int sum=0;
for(int i=1;i<=10;i++){
        Sleep(1000);
        printf("%d\n",i);
}
printf("%d",sum);




return 0;
}
*/
/*
int main(){

for(int i=1;i<=10;i++){
printf("%d\n",i);
if (i == 4)
    break;
}
return 0;
}
*/
/*
int main(){
    for(int j=1;j<=3;j++){
for(int i=1;i<=10;i++){
    printf("%d ",i);

}
printf("\n");
    }

return 0;
}
*/
/*
int main(){

srand(time(NULL));
int min=51;
int max=100;



int random=(rand()%(max-min+1))+min;

printf("%d",random);





return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

int main() {
    int chances = 0;
    bool win = false;
    int max = 100;
    int min = 43;

    srand(time(NULL));
    int random = (rand() % (max - min + 1)) + min;
    int number = 0;

    while (!win) {
        printf("Enter a number between (%d - %d): ", min, max);
        scanf("%d", &number);

        chances++;

        if (number == random) {
            win = true;
            break;
        } else if (number < random) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    printf("You guessed it in %d chances!\n", chances);

    return 0;
}

*/
#include <stdio.h>

float balance = 100.0;

void checkBalance() {
    printf("Your Current Balance is $%.2f\n", balance);
}

void withdraw() {
    float amt;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amt);

    if (amt > balance) {

        printf("Insufficient balance!\n");
    } else {
        balance -= amt;
        printf("Withdrawal successful. New balance is $%.2f\n", balance);
    }
}

void deposit() {
    float amt;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amt);

    if (amt <= 0) {
        printf("Invalid amount.\n");
    } else {
        balance += amt;
        printf("Deposit successful. New balance is $%.2f\n", balance);
    }
}

int main() {
    int response;

    printf("Welcome to the Banking System!\n");

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1) Withdraw\n");
        printf("2) Deposit\n");
        printf("3) Check Balance\n");
        printf("4) Exit\n");
        printf("Enter your response: ");
        scanf("%d", &response);

        switch (response) {
            case 1:
                withdraw();
                break;
            case 2:
                deposit();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                printf("Thanks for using our System!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
