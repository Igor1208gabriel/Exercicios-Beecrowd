def check(a,b,c):
   return ((a + b) < c) and ((a + c) < b) and ((b + c) < a) 

a,b,c = map(float,input().split())

pode = check(a,b,c)

if pode:
    print(f"Perimetro = {a+b+c:.1f}")
else:
    print(f"Area = {((a+b)*c)/2:.1f}")