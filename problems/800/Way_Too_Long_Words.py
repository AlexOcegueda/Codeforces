def main():
    n = int(input())

    for i in range(0, n):
        x = str(input())
        if len(x) > 10:
            print(x[0] + str(len(x) - 2) + x[-1])
        else:
            print(x)

if __name__ == "__main__":
    main()
