x = float(input())

cem = x//100
temp = x%100

cin = temp / 50
temp = cin % 50

vin = temp / 20
temp = vin % 20

dez = temp / 10 
temp = dez % 10

cio  = temp / 5
temp = temp % 5

doi = temp / 2
temp = doi % 2

um = temp / 1
temp = um % 1

ci = temp / 0.5
temp = ci % 0.5

v5 = temp / 0.25
temp = v5 % 0.25

de = temp / 10
temp = de % 10

c5 = temp / 0.05
temp = c5 % 0.05

uo = temp / 0.01

print(f"{int(cem)} nota(s) de R$ 100.00")
print(f"{int(cin)} nota(s) de R$ 50.00")
print(f"{int(vin)} nota(s) de R$ 20.00")
print(f"{int(dez)} nota(s) de R$ 10.00")
print(f"{int(cio)} nota(s) de R$ 5.00")
print(f"{int(doi)} nota(s) de R$ 2.00")


print(f"{int(um)} moeda(s) de R$ 1.00")
print(f"{int(ci)} moeda(s) de R$ 0.50")
print(f"{int(v5)} moeda(s) de R$ 0.25")
print(f"{int(de)} moeda(s) de R$ 0.10")
print(f"{int(c5)} moeda(s) de R$ 0.05")
print(f"{int(uo)} moeda(s) de R$ 0.01")