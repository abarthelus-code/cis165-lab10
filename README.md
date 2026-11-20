# cis165-lab10


Test / data	                                                        Expected result
Fixed winning [7,4,9,1,3]; player [4,2,9,7,3]	                        2 matches.   (x,x,match,x,match)
Same fixed winning array; player [7,4,9,1,3]	                        5 matches.   (match,match,match,match,match)
Same fixed winning array; player [0,0,0,0,0]	                        0 matches.   (x,x,x,x,x)
Fixed winning [1,1,2,2,3]; player [1,2,2,3,3]	                        3 matches.   (match,x,match,x,match)

Additional Test
Winning [8,3,6,2,9]; Player [8,5,6,4,9]                               3 matches. (positions where 8,6,9 match the others don't)



Explain Your Code

1) How does the random expression keep every digit between 0 and 9?
   - It keeps everything between that because rand 10% uses remainders for anything divided by 10
2) Why does a matching digit in another position not count?
   - Because the numbers have to be in the same position in both arrays
3) Trace the count through the example arrays.
   - Traced in the test/expected next to the matches.
4) Why do array loops stop before SIZE, and what did your fixed tests establish?
   - the array positions start at 0, so the positions are 0-4 for the matches. which the fixed test establish with how they match the numbers in positions.
  
  To run in onlineGDB open the file on the site check to see if its on c++ then input asked values and run the code.
