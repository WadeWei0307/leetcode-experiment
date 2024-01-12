<h2><a href="https://leetcode.com/problems/longest-common-prefix/">14. Longest Common Prefix</a></h2><h3>Easy</h3><hr><div><p>Write a function to find the longest common prefix string amongst an array of strings.</p>

<p>If there is no common prefix, return an empty string <code>""</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> strs = ["flower","flow","flight"]
<strong>Output:</strong> "fl"
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> strs = ["dog","racecar","car"]
<strong>Output:</strong> ""
<strong>Explanation:</strong> There is no common prefix among the input strings.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= strs.length &lt;= 200</code></li>
	<li><code>0 &lt;= strs[i].length &lt;= 200</code></li>
	<li><code>strs[i]</code> consists of only lowercase English letters.</li>
</ul>
<h3>Thinking</h3><hr>
<p>
1. Sort the string, then compare each element string of character from start to end. <br> </p>
<hr>
<h3>Time complexity</h3><hr>
<p>
<p>1. The best sort is <strong>O(nlogn)</strong>. <br> </p>
<p>2. Compare each character of string is <strong>O(n)</strong>. <br> </p>
<p>3. So, final time complexity is <strong>O(nlogn)</strong>. </p>
</p>
</div>