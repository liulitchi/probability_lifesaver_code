"""
 * Python code for Sum four squares, 2.2.1 Coding Digression              
 * sum_4squares is the number we are investingating will count how often      
 * sum_4squares = a^2 + b^2 + c^2 + d^2 with a <= b <= c <= d                 
 *                                                                            
 * If you find hard to solve, try to think an easy way,                       
 * like in two squares's situation. After this, you can it do better
"""

# the number as a sum of four squares
sum_4squares = input("Please input an integer number:")
sum_4squares = int(sum_4squares)

a = 1
while a * a <= sum_4squares:
	b = a
	while b * b <= sum_4squares - a * a:
		c = b
		while c * c <= sum_4squares - a * a - b * b:
			d = c
			while d * d <= sum_4squares - a * a - b * b - c * c:
				diff = sum_4squares - a * a - b * b - c * c - d * d
				if diff == 0:
					print("%d = %d^2 + %d^2 + %d^2 + %d^2" % (sum_4squares, a, b, c, d))  
				d += 1
			c += 1
		b += 1
	a += 1
