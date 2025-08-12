guest = input().strip()
host = input().strip()
pile = input().strip()

# Combine guest and host names
combined = guest + host

# Sort both combined names and pile letters
if sorted(combined) == sorted(pile):
    print("YES")
else:
    print("NO")
