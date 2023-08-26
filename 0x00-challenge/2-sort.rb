###
#
#  Integer arguments are sorted in ascending order 
#
###

result = []
ARGV.each do |arg|
    # If it is not an integer, then skip
    next if arg !~ /^-?[0-9]+$/

    # Converted into an integer
    i_arg = arg.to_i
    
    # Result is inserted at the right position
    is_inserted = false
    i = 0
    l = result.size
    while !is_inserted && i < l do
        if result[i] < i_arg
            i += 1
        else
            result.insert(i, i_arg)
            is_inserted = true
            break
        end
    end
    result << i_arg if !is_inserted
end

puts result
