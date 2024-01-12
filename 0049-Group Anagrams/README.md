<h2><a href="https://leetcode.com/problems/group-anagrams/">49. Group Anagrams</a></h2><h3>Medium</h3><hr><div><p>Given an array of strings <code>strs</code>, group <strong>the anagrams</strong> together. You can return the answer in <strong>any order</strong>.</p>

<p>An <strong>Anagram</strong> is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> strs = ["eat","tea","tan","ate","nat","bat"]
<strong>Output:</strong> [["bat"],["nat","tan"],["ate","eat","tea"]]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> strs = [""]
<strong>Output:</strong> [[""]]
</pre><p><strong class="example">Example 3:</strong></p>
<pre><strong>Input:</strong> strs = ["a"]
<strong>Output:</strong> [["a"]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= strs.length &lt;= 10<sup>4</sup></code></li>
	<li><code>0 &lt;= strs[i].length &lt;= 100</code></li>
	<li><code>strs[i]</code> consists of lowercase English letters.</li>
</ul>
<hr>
<h3>Thinking</h3><hr>
<p>
1. After sort, we can use first charcter by each string to judge belong to which group.<br> 
</p>
<hr>
<h3>Time complexity</h3><hr>
<p>
<p>1. Best sort algorithm is <strong>O(nlogn)</strong>.</p> 
<p>2. Go through the str vector once for each element, so is <strong>O(n)</strong>.</p>
<p>3. Final is <strong>O(nlogn)</strong>.</p>
</p>
</div>