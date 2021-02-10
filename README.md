_University Course Assignment_

# SimpleHashFunction

I set myself the following additional goal (devised by me):

Assessment 2 Computing Exercises were focused on loops. I was interested in checksums, CRCs and hash functions, and they must loop through all the data since the algorithms usually come with a limited/fixed block size.

I wanted to experiment with designing my own hash function. The message digest algorithm I have created accepts input data and a salt. The block size is 64-bits (8-bytes) and the message + salt must be padded if the total length of data is not a multiple of 64-bits. My function uses XOR. Finally, a fixed-length hexadecimal message digest of 64-bits is produced. This hash function was not designed to be cryptographically secure.

I took the opportunity to try some bitwise operators like left shifting and XOR, learn some of the design considerations of a hash function, and to practise writing code more professionally. To train myself to write code more professionally, I used Git, attached a licence, and wrote code documentation as comments. The Git repository can be found here: https://github.com/GavinChoy/SimpleHashFunction

Assessment 2 had been quite fun for me!

My solution was in two files called Hasher.cpp and Hash_function.hpp
