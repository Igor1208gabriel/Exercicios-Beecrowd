x = int(input())

def dec_bin(num, pot):
    if num == 0:
        return 0
    else:
        return num%10 * (2**pot) + dec_bin(num//10, pot+1)

print(dec_bin(x, 0))