<h2><a href="https://leetcode.com/problems/single-number-ii/">137. Single Number II</a></h2><h3>Medium</h3><hr><div><p>Given an integer array <code>nums</code> where&nbsp;every element appears <strong>three times</strong> except for one, which appears <strong>exactly once</strong>. <em>Find the single element and return it</em>.</p>

<p>You must&nbsp;implement a solution with a linear runtime complexity and use&nbsp;only constant&nbsp;extra space.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> nums = [2,2,3,2]
<strong>Output:</strong> 3
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> nums = [0,1,0,1,0,1,99]
<strong>Output:</strong> 99
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 3 * 10<sup>4</sup></code></li>
	<li><code>-2<sup>31</sup> &lt;= nums[i] &lt;= 2<sup>31</sup> - 1</code></li>
	<li>Each element in <code>nums</code> appears exactly <strong>three times</strong> except for one element which appears <strong>once</strong>.</li>
</ul>
<hr>
<h3>Thinking</h3><hr>
<p>
1. Use bit operation to check every num in <code>nums</code>.
</p>
<p>
2. If current bit didn't appear three times, it is the single number, so use or bit operation to record current bit = 1.
</p>
<hr>
<h3>Time complexity</h3><hr>
<p>1. Go through int size is 32 bit, so is <strong>O(32) = O(1)</strong>.</p>
<p>2. Go through the vector, so is <strong>O(n)</strong>.</p>
<p>3. Final is <strong>O(n)</strong>.</p>
</div>