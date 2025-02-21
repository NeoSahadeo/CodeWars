# Site "https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/python"

def is_pangram(st):
    alpha = []
    for x in st:
        if x.isalpha():
            alpha.append(x.lower())

    if len(set(alpha)) == 26:
        return True

    return False
