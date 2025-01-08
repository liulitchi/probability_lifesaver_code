""" 
Python language code to compute birthday probabilities    
Book: The probability lifesaver by Steven J. Miller       
Chapter 1, Figure 1-2                                     
                                                          
now 365 - (n - 1) equals 366 - n                          
"""

# at start 100% chance don’t share a birthday
noshare = 1

for n in range(2, 51):
    noshare *= (366 - n) / 365
    # at start 0% chance share a birthday
    share = 1 - noshare
    print("p(", n, ") = ", "%.2f"%(share * 100), "%")
