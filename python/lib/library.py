import random
import string

def print_array(a):
    print(*a)

def print_matrix(a):
    for row in a:
        print(*row)

def random_number():
    ans = 1
    length = random.randint(1, 17)
    for _ in range(length):
        ans = ans * 10 + random.randint(0, 9)
    return ans

def random_number_range(l, r):
    return l + random_number() % (r - l + 1)

def random_number_range(n):
    return random_number() % n

def random_array(n, x):
    return [random_number_range(x) for _ in range(n)]

def random_array_range(n, l, r):
    return [random_number_range(l, r) for _ in range(n)]

def random_array_range(n, l, r):
    return [random_number_range(l, r) for _ in range(n)]

def random_array(n, x):
    return [random_number_range(x) for _ in range(n)]

def random_string(n, charset):
    return ''.join(random.choice(charset) for _ in range(n))

def random_string(n):
    charset = string.ascii_letters + string.digits
    return random_string(n, charset)

def random_string(n, type):
    if type == 0:
        charset = string.ascii_lowercase
    elif type == 1:
        charset = string.ascii_uppercase
    elif type == 2:
        charset = string.digits
    elif type == 3:
        charset = string.ascii_letters
    elif type == 4:
        charset = string.ascii_lowercase + string.digits
    elif type == 5:
        charset = string.ascii_uppercase + string.digits
    elif type == 6:
        charset = string.ascii_letters + string.digits
    else:
        charset = string.ascii_letters + string.digits
    return random_string(n, charset)