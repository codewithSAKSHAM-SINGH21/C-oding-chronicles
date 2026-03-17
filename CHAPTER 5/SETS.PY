# 🔹 What is a Set in Python?
# - A set is a collection of unique, unordered elements.
# - Defined using curly braces {} or the set() constructor.
# - No duplicates allowed → {1, 2, 2, 3} becomes {1, 2, 3}.
# - Unordered → elements don’t have a fixed position, so indexing doesn’t work.
# Example:
# myset = {1, 2, 3, 4}
# print(myset)  # Output: {1, 2, 3, 4}


# 🔹 Creating Sets
# - Literal way: myset = {1, 2, 3}
# - Constructor: myset = set([1, 2, 3])
# - Empty set: myset = set() (⚠️ {} creates a dictionary, not a set)

# 🔹 Common Set Operations
# |  |  |  |  | 
# |  | A | BA.union(B) | {1,2,3} | {3,4} | {1,2,3,4} | 
# |  | A & BA.intersection(B) | {1,2,3} & {2,3,4} | {2,3} | 
# |  | A - BA.difference(B) | {1,2,3} - {2,3} | {1} | 
# |  | A ^ BA.symmetric_difference(B) | {1,2,3} ^ {2,3,4} | {1,4} | 
# |  | A <= BA.issubset(B) | {1,2} <= {1,2,3} | True | 
# |  | A >= BA.issuperset(B) | {1,2,3} >= {2} | True | 
# |  | A.isdisjoint(B) | {1,2} isdisjoint {3,4} | True | 



# 🔹 Set Methods You Must Know
# - add(x) → Adds element x.
# - remove(x) → Removes x (error if not present).
# - discard(x) → Removes x (no error if missing).
# - pop() → Removes and returns a random element.
# - clear() → Removes all elements.
# - copy() → Returns a shallow copy.


# Example:
# A = {1, 2, 3}
# A.add(4)        # {1,2,3,4}
# A.remove(2)     # {1,3,4}
# A.discard(10)   # No error



# 🔹 Advanced Tricks
# - Set Comprehension:
# squares = {x*x for x in range(5)}
# print(squares)  # {0,1,4,9,16}


# - Convert list to set to remove duplicates:
# nums = [1,2,2,3,4,4]
# unique = set(nums)  # {1,2,3,4}


# - Frozen Sets → Immutable version of sets:
# fset = frozenset([1,2,3])



# 🔹 Key Points to Remember
# - Sets are unordered → no indexing.
# - Elements must be hashable (immutable types like int, str, tuple).
# - Great for membership tests (in operator is super fast).
# - Perfect for removing duplicates and performing mathematical set operations.

# ⚡ So, if you master sets, you’ll handle problems involving uniqueness, membership, and mathematical operations much faster.
