n = int(input())
lista = [6,2,5,4,5,6,3,7,6]
for j in range(n):
    ans = 0
    num = int(input())
    while(num):
        ans += lista[(num%10)]
        num /= 10
    print(ans, "leds")
