# Python 3 code to find last
# k digits of a^b

# Iterative Function to calculate
# (x^y)%p in O(log y)
def power(x, y, p):

	res = 1 # Initialize result

	x = x % p # Update x if it is more
			# than or equal to p

	while (y > 0) :

		# If y is odd, multiply
		# x with result
		if (y & 1):
			res = (res * x) % p

		# y must be even now
		y = y >> 1 # y = y/2
		x = (x * x) % p

	return res

# function to calculate
# number of digits in x
def numberOfDigits(x):

	i = 0
	while (x) :
		x //= 10
		i += 1

	return i

# function to print last k digits of a^b
def printLastKDigits( a, b, k):

	print("Last " + str( k)+" digits of " +
					str(a) + "^" + str(b), end = " = ")

	# Generating 10^k
	temp = 1
	for i in range(1, k + 1):
		temp *= 10

	# Calling modular exponentiation
	temp = power(a, b, temp)

	# Printing leftmost zeros. Since (a^b)%k
	# can have digits less then k. In that
	# case we need to print zeros
	for i in range( k - numberOfDigits(temp)):
		print("0")

	# If temp is not zero then print temp
	# If temp is zero then already printed
	if (temp):
		print(temp)

# Driver Code
if __name__ == "__main__":
	a = 11
	b = 3
	k = 2
	printLastKDigits(a, b, k)

# This code is contributed
# by ChitraNayal
