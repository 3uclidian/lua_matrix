

local function range(a, b)
	local t = {}
	for i = a, b do
		table.insert(t, i)
	end
	return t
end

for i = 2, 8 do
	print(i .. "x" .. i .. " matrix:")
	local tab = {}
	for j = 1, i do
		local start = (j-1)*i + 1
		local finish = start + i - 1
		table.insert(tab, range(start, finish))
	end
	print(matrix.new(tab))
	print()
end


for i = 2, 5 do
	for j = 2, 5 do
		print(matrix.random(i, j))
		print()
	end
end
