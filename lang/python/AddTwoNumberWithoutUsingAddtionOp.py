num1 = int(input("Enter First No"));
num2  = int(input("Enter Second No"));
while(num2 != 0):   
    sum =num1^num2;              
    carry = (num1&num2)<<1;
    num1 = sum;
    num2 = carry;
print("sum of num1 and num2 is :", num1);
