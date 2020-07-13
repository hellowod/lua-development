
function add(a, b)
    return a + b
end

function sub(a, b)
    local v = 100
    local action = function()
        return v
    end
    return a - b
end

local r = add(100, 200)
print(r)
local max = math.max(1, 2)
print(max)