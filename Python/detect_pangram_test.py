# Site "https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/python"
from assertion import assert_equal
from detect_pangram import is_pangram

pangrams = ["The quick brown fox jumps over the lazy dog.",
            "Cwm fjord bank glyphs vext quiz",
            "Pack my box with five dozen liquor jugs.",
            "How quickly daft jumping zebras vex.",
            "ABCD45EFGH,IJK,LMNOPQR56STUVW3XYZ"]

non_pangrams = ["This isn't a pangram!",
                "abcdefghijklm opqrstuvwxyz",
                "Aacdefghijklmnopqrstuvwxyz"]


def test():
    for x in pangrams:
        assert_equal(is_pangram(x), True)
    for x in non_pangrams:
        assert_equal(is_pangram(x), False)


if __name__ == "__main__":
    test()
