<h2><a href="https://leetcode.com/problems/pascals-triangle/">118. Pascal's Triangle</a></h2><h3>Easy</h3><hr><div><p>Given an integer <code>numRows</code>, return the first numRows of <strong>Pascal's triangle</strong>.</p>

<p>In <strong>Pascal's triangle</strong>, each number is the sum of the two numbers directly above it as shown:</p>
<img alt="" src="https://upload.wikimedia.org/wikipedia/commons/0/0d/PascalTriangleAnimated2.gif" style="height:240px; width:260px">
<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>
<pre><strong>Input:</strong> numRows = 5
<strong>Output:</strong> [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
</pre><p><strong class="example">Example 2:</strong></p>
<pre><strong>Input:</strong> numRows = 1
<strong>Output:</strong> [[1]]
</pre>
<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= numRows &lt;= 30</code></li>
</ul>
<hr>
<h3>Thinking</h3><hr>
<p>
1. If current level not the hypotenuse, its value would be <code>preLevel</code> last index + <code>preLevel</code> current index; Otherwise, if is hypotenuse, it will be 1. 
</p>
<hr>
<h3>Time complexity</h3><hr>
<p>
<p>1. Go through each level's every index, so is <strong>O(n<sup>2</sup>)</strong>.</p> 
</p>
</div>