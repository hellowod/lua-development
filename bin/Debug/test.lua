--test function 1
function max(num1, num2)
   if (num1 > num2) then
	  r = num1
   else
	  r = num2
   end
   return r
end

--test function 2
function add(num1, num2)
	return num1 + num2
end

console("hello world")
console("max ", max(10,8))