def main():
    s1 = input().strip().lower()
    s2 = input().strip().lower()

    for i in range(len(s1)):
        if s1[i] != s2[i]:
            if ord(s1[i]) < ord(s2[i]):
                print("-1")
                return
            else:
                print("1")
                return

    print("0")
 
if __name__ == "__main__":
    main()