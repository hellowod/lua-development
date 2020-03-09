function func1(c)
    for i = 1, c do
        local t = {}
        t[1] = 1
        t[2] = 2
        t[3] = 3
    end
end

function func2(c)
    for i = 1, c do
        local t = {0, 0, 0}
        t[1] = 1
        t[2] = 2
        t[3] = 3
    end
end

local curTime = os.clock()
func1(922222)
local endTime = os.clock()

print(endTime - curTime)