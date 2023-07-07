# Ticket sellers
## Easy
<div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px">There are <strong>N</strong> ticket sellers where the <strong>ith</strong> ticket seller has <strong>A[i]</strong> tickets. </span></p>

<p><span style="font-size:18px">The price of a ticket is the number of tickets remaining with the ticket seller. They are allowed to&nbsp;sell at most&nbsp;<strong>K</strong> tickets. Find the maximum amount they can earn by selling <strong>K</strong> tickets. </span></p>

<p><span style="font-size:18px">The amount of tickets of each seller is provided in array <strong>A</strong>. Give the answer modulo <strong>10<sup>9</sup>&nbsp;+ 7.</strong></span></p>

<p><strong><span style="font-size:18px">Example 1:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 5, K = 3
A = {4, 3, 6, 2, 4}
<strong>Output:</strong> 15
<strong>Explaination:</strong> Consider 0 based indexing. 
For first two turns the 2nd seller sells. 
For the third turn either 0th or 2nd 
seller can sell. So the total becomes 
6 + 5 + 4 = 15.</span></pre>

<p><strong><span style="font-size:18px">Example 2:</span></strong></p>

<pre><span style="font-size:18px"><strong>Input:</strong> N = 6, K = 2
A = {5, 3, 5, 2, 4, 4}
<strong>Output:</strong> 10
<strong>Explaination:</strong> The turns are taken by 
0th and 2nd seller. 5 + 5 = 10 is the 
maximum amount.</span></pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You do not need to take input or print anything. Your task is to complete the function <strong>maxAmount()</strong> which takes <strong>N, K</strong>, and the array <strong>A</strong> as input parameters and returns the maximum amount they can get by selling K tickets.</span></p>

<p><span style="font-size:18px"><strong>Expected Time Complexity:</strong> O(N*log(N))<br>
<strong>Expected Auxiliary Space:</strong> O(N)</span></p>

<p><span style="font-size:18px"><strong>Constraints:</strong><br>
1 ≤ N ≤ 10<sup>5</sup><br>
1 ≤ A[i], K ≤ 10<sup>6</sup></span></p>
</div>