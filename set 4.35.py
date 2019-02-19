def main():
    n=input()
    c=0
    for i in n:
        if i.isalpha():
            c=c+1 
            print('no of numerics in a string is :%d'%c)
            main()
