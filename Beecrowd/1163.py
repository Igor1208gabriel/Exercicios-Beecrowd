import math

g = 9.80665
pi = 3.14159

while True:
    try:

        h = float(input())
        nlgi, nlgf = map(int,input().split())

        testes = int(input())
        for i in range(testes):

            alfa, vo = map(float,input().split())
            alfa = alfa * 3.14159 / 180

            viy = vo * math.sin(alfa)
            vx = vo * math.cos(alfa)

            ts = viy / g
            H = (viy**2) / (2*g) + h 
            vfy = math.sqrt(2*g*H)
            td = vfy/g
            mv = ts+td
            alcance = vx * mv


            if ( nlgi <= alcance <= nlgf):
                print(f"{alcance:.5f} -> DUCK")
            else:
                print(f"{alcance:.5f} -> NUCK")


    except EOFError:
        break
