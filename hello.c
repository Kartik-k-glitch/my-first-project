#include <stdio.h>
int main() {
    printf("hello, world\n");
    return 0;
}
// area of rectangle

#include <stdio.h>
int main() 
{
int i,j,k;
printf("enter length of rectangle = ");
scanf("%d", &i);
printf("enter breadth of rectangle = ");
scanf("%d", &j);
k= i*j;
printf("area of rectangle = %d",k);
return 0;
}  


// volume of cylinder

#include <stdio.h>

int main() {
float a = 3.14,r,h,v;
printf("enter radius of cylinder = ");
scanf("%f", &r);
printf("enter height of cylinder = ");
scanf("%f", &h);
v = a*r*r*h;
printf("volume of cylinder = %f\n", v);
return 0;
}

//temperature conversion


#include <stdio.h>

int main() {
float a,b;
printf("enter temperature in celsius = ");
scanf("%f", &a);
b= 1.8*a+32;
printf("the temperature of %f degree celcius in farenhiet is = %f\n",a,b);
return 0;
}

//simple interest


#include <stdio.h>

int main() {
float a,b,c,d;
printf("the principal amount to be deposited = ");
scanf("%f", &a);
printf("the rate of interest = ");
scanf("%f", &b);
printf("the time period in years = ");
scanf("%f", &c);
d= (a*b*c)/100;
printf("the simple interest is = %f\n",d);
printf("the total amount after %f years is = %f\n",c,(a+d));
return 0;
}
 
//swapping of two numbers


#include <stdio.h>

int main() {
int a,b;
printf("enter two numbers = ");
scanf("%d %d", &a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping the two numbers are = %d\t%d\n",a,b);

return 0;
}


//factorial of a number//

 #include <stdio.h>
 int main() {
 int i,f=1,n;
 printf("enter a number = ");
 scanf("%d", &n);
for(i=1;i<n+1;i++)
 {
     f=f*i;
 }
 printf("the factorial of %d is = %d\n",n,f);
 return 0;
 } 

// practice questions

#include <stdio.h>


int main()
{
int a;
printf("enter a number = ");
scanf("%d", &a);
if(a== 11){
    printf("i am 11\n");
}
else{
    printf("i am not 11\n");
}
return 0;
}

// score checking

#include <stdio.h>

int main() {
int a,b,c,d;
printf("marks of maths = ");
scanf("%d",&a);
printf("marks of physics = ");
scanf("%d",&b);
printf("marks of chemistry = ");
scanf("%d",&c);
d= (a+b+c)/3;
if(d>=40 && a>=33 && b>=33 && c>=33){
    printf("congratulations you passed\n");
}
if(a<33){
    printf("you have failed in maths\n");
}
if(b<33){
    printf("you have failed in physics\n");
} if(c<33){
    printf("you have failed in chemistry\n");
}
if (d>=40){
    printf("You have been promoted\n");
}
else{
    printf("sorry you have not been promoted\n");
}
return 0;
}

//income tax calculator

#include <stdio.h>

int main() {
float a;
printf("enter your income (in lac) = ");
scanf("%f", &a);
if (a<2.5){
    printf("no tax to be paid\n");
}
else if(a>=2.5 && a<5.0){
    printf("you have to pay tax of amount rs. %.2f @ 5 percent\n",0.05*(a*100000 - 250000));
}
else if(a>=5.0 && a<10.0){
    printf("you have to pay tax of amount rs. %.2f @ 20 percent\n",0.20*(a*100000 - 250000));
}
else if(a>=10.0){
    printf("you have to pay tax of amount rs. %.2f @ 30 percent\n",0.30*(a*100000 - 250000));
}
return 0;
}

// leap year checker

#include <stdio.h>

int main() {
int year;
printf("enter a year = ");
scanf("%d", &year);
if (year%4==0 && year%100!=0 || year%400==0){
    printf("the year %d is a leap year\n",year);
}
else{
    printf("the year %d is not a leap year\n",year);
}
return 0;
}

// lowercase or uppercase

#include <stdio.h>

int main() {
char a;
printf("enter an alphabet = %c",a);
scanf("%c", &a);
printf("the ASCII value of entered alphabet is = %d\n",a);
if (a>=65 && a<=90){
    printf("the entered alphabet is uppercase\n");
}
else if(a>=97 && a<=122){
    printf("the entered alphabet is lowercase\n");
}
else{
    printf("the entered character is not an alphabet\n");
}
return 0;
}

// GREATEST OF 4 NUMBERS

#include <stdio.h>

int main() {
int a, b, c, d;
printf("val 1 = \n");
scanf("%d", &a);
printf("val 2 = \n");
scanf("%d", &b);
printf("val 3 = \n");
scanf("%d", &c);
printf("val 4 = \n");
scanf("%d", &d);
if (a>=b && a>=c && a>=d){
    printf("the greatest number is val 1 %d\n",a);
}
else if(b>=a && b>=c && b>=d){
    printf("the greatest number is val 2 %d\n",b);
}
else if(c>=a && c>=b && c>=d){
    printf("the greatest number is val 3%d\n",c);
}
else{
    printf("the greatest number is val 4 %d\n",d);
}
return 0;
}

//palindrome checker

#include <stdio.h>
int main() {
int n,rev=0,rem,temp;
printf("enter a number = ");
scanf("%d", &n);
temp=n;
while(n!=0){
    rem=n%10;
    rev=rem*10+rem;
    n=n/10;
}
if (temp==rev){
    printf("the number %d is a palindrome\n",temp);
}
else{
    printf("the number %d is not a palindrome\n",temp);
}
return 0;
}

 
#include <stdio.h>
void change_to_thirty_times(int*);
void change_to_thirty_times(int *n){
    *n= *n *30;
}
int main() {
int x=64;
printf("the value of x before function call is = %d\n",x);
printf("the address of x before function call is = %u\n",&x);
change_to_thirty_times(&x);
printf("the value of x after function call is = %d\n",x);
printf("the address of x after function call is = %u\n",&x);
return 0;
}

#include <stdio.h>

int add(int a, int b) { return a + b; }
int mul(int a, int b) { return a * b; }

int main(void) {
    int x = 5, y = 3;
    int (*op)(int, int);   // pointer to function taking (int, int) returning int

    op = add;
    printf("add: %d\n", op(x,y)); // 8

    op = mul;
    printf("mul: %d\n", op(x,y)); // 15

    return 0;
}
 
#include <stdio.h>

int main(void) {
    int i = 10;
    int *pi = &i;
    int **ppi = &pi;

    char c = 'A';
    char *pc = &c;
    char **ppc = &pc;

    float f = 3.14f;
    float *pf = &f;
    float **ppf = &pf;

    printf("int: value=%d, *pi=%u, **ppi=%d\n", i, pi, **ppi);
    printf("char: value=%c, *pc=%c, **ppc=%c\n", c, *pc, **ppc);
    printf("float: value=%.2f, *pf=%.2f, **ppf=%.2f\n", f, *pf, **ppf);

    return 0;
}

#include <stdio.h>

struct Packed {
    unsigned int id : 10;     // 0..1023
    unsigned int status : 3;  // 0..7
    unsigned int flag : 1;    // 0..1
};

int main(void) {
    struct Packed p;
    p.id = 512;
    p.status = 5;
    p.flag = 1;

    printf("id=%d status=%d flag=%d\n", p.id, p.status, p.flag);
    return 0;
}


#include <stdio.h>
#include <stdbool.h>
#define MAX 100

int stack[MAX];
int top = -1;

bool isfull(void) { return top == MAX-1; }
bool isempty(void) { return top == -1; }

void push(int v) {
    if (isfull()) {
        printf("Stack overflow\n");
        return;
    }
    stack[++top] = v;
}

int pop(void) {
    if (isempty()) {
        printf("Stack underflow\n");
        return -1; // sentinel
    }
    return stack[top--];
}

int main(void) {
    push(10); push(20); push(30);
    printf("pop: %d\n", pop());
    printf("pop: %d\n", pop());
    printf("pop: %d\n", pop());
    printf("pop (empty): %d\n", pop());
    return 0;
}


#include <stdio.h>
#include <stdbool.h>
#define QMAX 5

int q[QMAX];
int front = 0, rear = 0, count = 0;

bool is_full(void) { return count == QMAX; }
bool is_empty(void) { return count == 0; }

void enqueue(int v) {
    if (is_full()) {
        printf("Queue full\n");
        return;
    }
    q[rear] = v;
    rear = (rear + 1) % QMAX;
    count++;
}

int dequeue(void) {
    if (is_empty()) {
        printf("Queue empty\n");
        return -1;
    }
    int val = q[front];
    front = (front + 1) % QMAX;
    count--;
    return val;
}

int main(void) {
    enqueue(1); enqueue(2); enqueue(3);
    printf("deq: %d\n", dequeue());
    enqueue(4); enqueue(5); enqueue(6); // last may show full if exceeds
    while(!is_empty()) printf("deq: %d\n", dequeue());
    return 0;
}


