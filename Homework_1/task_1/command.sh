# 1. Count how many lines are there in “data.dat”.
wc -l data/data.dat

# 2.Count how many lines of those contain “dolor” or “dalor”?
less data/data.dat | grep -c "dalor\|dolor"

# 3.Count how many words are there in “data.dat”?
wc -w data/data.dat 

# 4.Count how many of those start with “mol”?
grep -o -i mol data/data.dat|wc -c

# 5.Count how many files in “test folder” are “.txt” files?
ls -l data/test_folder/*.txt | wc -l

