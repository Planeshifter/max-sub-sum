# max-sub-sum
return the maximum sum found in any contiguous (possibly empty) subvector of a given vector

# The Algorithm
There exists a very fast algorithm originally proposed by Jay Kadane from Carnegie Mellon University that scales with linear time, i.e. O(n). 

The algorithm works recursively: Suppose we have a vector of length n, with elements x_1, ..., x_n. We might ask the following question: If we would add an additional element x_{n+1}, what would be the maximum-sum-subvector *ending at position n+1*? Answer: If it is not empty (in which case the sum is zero), it will be the maximum sum of the subvectors ending at n plus x_{n+1}. 

Let us denote with S_i the maximum sub of the subectors ending at position i. From above discussion, it follows that S_1 =  max(x_1, 0), S_2 = max(S_1 + x_2, 0) etc. The maximum sum is then found by taking the maximum of S_1, ..., S_n.  

# Building from Source

To build the project from source, first run the shell script `download.sh` to download the [Google C++ testing framework](https://code.google.com/p/googletest/). Then run 

```
make max-sub-sum-tests
```

to compile the unit-tests and 

```
make max-sub-sum-cli
```

to build the command line application. 

The executable file `max-sub-sum-test` runs the specified unit tests and prints the results. From the terminal, execute it via 

```
./max-sub-sum-tests 
```

Similarly, 

```
./max-sub-sum-cli
```

will output the maximum length for an input vector. 
