def first_element_k_times(arr, k):  
    count = {}     
    for num in arr:  
        if num in count:  
            count[num] += 1  
        else:  
            count[num] = 1  
    
    for num in arr:  
        if count[num] == k:  
            return num  
    
    return -1  # If none found, return -1  

