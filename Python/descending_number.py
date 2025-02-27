def sort_descending(num):
    numbers = []

    for x in str(num):
        numbers.append(int(x))

    length = len(numbers)
    for x in range(0, length):
        for y in range(0, length - 1):
            if numbers[y] < numbers[y + 1]:
                temp = numbers[y]
                numbers[y] = numbers[y + 1]
                numbers[y + 1] = temp

    val = ""
    for x in range(0, length):
        val += str(numbers[x])

    print(val)


sort_descending(921089574871301)
