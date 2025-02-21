from assertion import assert_equal
from roman_numerals_decoder import decode


def test():
    assert_equal(decode('MMMCMXCIX'), 3999)
    assert_equal(decode('MMMDCCCLXXXVIII'), 3888)
    assert_equal(decode('MM'), 2000)
    assert_equal(decode('MDCLXVI'), 1666)
    assert_equal(decode('M'), 1000)
    assert_equal(decode('CD'), 400)
    assert_equal(decode('XC'), 90)
    assert_equal(decode('XL'), 40)
    assert_equal(decode('I'), 1)


if __name__ == "__main__":
    test()
