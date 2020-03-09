function profiler(func, count)
    if type(func) ~= "function" then
        return
    end
    
    if count == nil then
        count = 100
    end

    local total_time = 0
    for i = 1, count do
        local startTime = os.clock()
        func()
        local endTime = os.clock()
        total_time = total_time + (endTime - startTime)
    end

    local average_time = total_time / count

    print("function run times=" .. count .. ",average cost time=".. average_time)
end

function func_table_1(c)
    for i = 1, c do
        local t = {}
        t[1] = 1
        t[2] = 2
        t[3] = 3
    end
end

function func_table_2(c)
    for i = 1, c do
        local t = {0, 0, 0}
        t[1] = 1
        t[2] = 2
        t[3] = 3
    end
end

function func_var_1(c)
	r = 0
	for i = 1, c do
		r = r + i
		math.type(i)
	end
end

function func_var_2(c)
	local r = 0
	local t = math.type
	for i = 1, c do
		r = r + i
		t(i)
	end
end

profiler(function()
    func_var_1(1000000)
end)