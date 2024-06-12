# Base 2 - Binary

- Definition
Binary is the base of information in computers. It is a sequence of 0s and 1s.

## Binary to Decimal

$$0b1010 = 10$$

$$(10)_{10} = 1 * 2^{3} + 0 * 2^{2} + 1 * 2^{1} + 0 * 2^{0}$$

where `2` is the base.

`the exponents are the weights of the binary digits` (1010 is of length 4 therefore we start with 2^{3} to 2^{0}).

The `1s` and `0s` are the binary digits from our input.

## Binary to Hexadecimal

$$0b1010 = 0\text{x}A$$

1. The conversion starts with splitting the binary number into groups of exactly 4 bits (ex: 0b11001011 => 1100 1011).

2. then we convert every group of 4 bits into their equivalent hexadecimal number.
$$1100 \rightarrow 0\text{x}C$$
$$1011 \rightarrow 0\text{x}B$$
3. Now we end up with `0xCB` which is the equivalent of `(0b11001011 / 1100 1011)`.

## Binary to Octal

$$0\text{b}1010 = 0\text{o}12$$

1. The conversion starts with splitting the binary number into groups of exactly 3 bits (ex: 0b1010 => 001 010).
2. then we convert every group of 3 bits into their equivalent octal number.
$$0\text{b}001 \rightarrow 0\text{o}1$$
$$0\text{b}010 \rightarrow 0\text{o}2$$
3. Now we concatenate the octal numbers we got `(0o1 + 0o2)` and we end up with `0o12` which is the equivalent of `(0b1010 / 001 010)`.

## Binary to Gray Code

$$0b1010 = 0\text{g}1111$$

1010
1111

1001
1101
