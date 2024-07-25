int main() {
	/* Sequence 1 */
	int a = 5, b = 0;
	a = a - 1; // first value of 'a' is decremented by one
	b = a; // then assigned to 'b'

	/* Sequence 2 */
	int c = 5, d = 0;
	d = c; // first value of 'c' is assigned to 'd'
	c = c - 1; // then 'c' is decremented by one

	return 0;
}

/*
What is the above program doing?
- The program presents two sequences, namely Sequence 1 and Sequence 2.
- In both sequences, two main operations are performed: decrement and assignment.
- The order in which the two operations are performed is important.
- In Sequence1, fist 'a' is decremented by one and then assigned to 'b'.
- In Sequence2, first the value of 'a' is assigned to 'b', and
  then 'a' is decremented by one.
- In Sequence 1, the value of 'a' is decremented before assignment,
  hence we will call such operation as pre-decrement operation. Pre means before.
- In Sequence 2, the value of 'a' is decremented after assignment,
  hence we will call such operation as post-decrement. Post means after.
*/