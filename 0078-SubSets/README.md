<h2><a href="https://leetcode.com/problems/subsets/">78. Subsets</a></h2><h3>Medium</h3><hr>
<div class="elfjS" data-track-load="description_content"><p>Given an integer array <code>nums</code> of <strong>unique</strong> elements, return <em>all possible</em> <span data-keyword="subset" class=" cursor-pointer relative text-dark-blue-s text-sm"><div class="popover-wrapper inline-block" data-headlessui-state=""><div><div aria-expanded="false" data-headlessui-state="" id="headlessui-popover-button-:rt:"><div><em>subsets</em></div></div><div style="position: fixed; z-index: 40; inset: 0px auto auto 0px; transform: translate(467px, 183px);"></div></div></div></span> <em>(the power set)</em>.</p>

<p>The solution set <strong>must not</strong> contain duplicate subsets. Return the solution in <strong>any order</strong>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre><strong>Input:</strong> nums = [1,2,3]
<strong>Output:</strong> [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre><strong>Input:</strong> nums = [0]
<strong>Output:</strong> [[],[0]]
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums.length &lt;= 10</code></li>
	<li><code>-10 &lt;= nums[i] &lt;= 10</code></li>
	<li>All the numbers of&nbsp;<code>nums</code> are <strong>unique</strong>.</li>
</ul>
</div>
<hr>
<h3>Thinking</h3><hr>
<p>1. Use binary bit to represent each element is in the Subsets or not. For example below:</p>

|Input|Binary|Subset|
|:--:|:-----:|:----:|
|[1,2,3]|000|[]
|[1,2,3]|001|[3]
|[1,2,3]|010|[2]
|[1,2,3]|011|[2,3]
|[1,2,3]|100|[1]

<hr>
<h3>Time complexity</h3><hr>
<p>
1. We have 2^nums.size() subSets, and each subSets need to check nums.size() bits, so final is O(2<sup>nums.size()</sup>*nums.size())
</p>
</div>