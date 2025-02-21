from termcolor import colored


class AssertNotEqual(Exception):
    def __init__(self, message):
        self.message = message


def assert_equal(a: any, b: any):
    if a == b:
        print(colored("Passed", "green"))
    else:
        raise AssertNotEqual(f"Failed: {a} not equal to {b}")
