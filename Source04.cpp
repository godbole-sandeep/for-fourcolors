int main() {
	/* Sequence 1 */
	int a = 5, b = 0;
	b = --a; // first value of 'a' is decremented and then assigned to 'b'

	/* Sequence 2 */
	int c = 5, d = 0;
	d = c--; // first value of 'c' is assinged to 'd' and then 'c' is decremented by one

	return 0;
}

/*
What is the -- operator known as?
- The -- operator is known as the decrement operator.
- If -- occurs before the variable, for example, --a, it is referred to as
  a pre-decrement operator.
- Pre means before.
- If -- appears after the variable, for example, c--, it is referred to as
  a post decrement operator.
- Post implies after.

What does the -- oerpator do?
- It combines the two operations decrement and assignment (or usage)
  into one operation.

How does the pre-decrement operator works?
- The pre-decrement operator (--a) first decrements the value of a and
  then returns the decremented value.

How does the post-decrement operator works?
- The post-decrement operator (a--) first returns the current value of a and
  then decrements it by one.
*/