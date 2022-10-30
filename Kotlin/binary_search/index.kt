fun binarySearch(arr: List<Int>, x: Int, low: Int, high: Int) : Int {
    if(low > high) {
        return -1
    } else {
        val mid: Int = (low + high)/2
        if(x == arr.get(mid)) {
            return mid
        } else if(x > arr.get(mid)) {
            return binarySearch(arr, x, mid + 1, high)
        } else {
            return binarySearch(arr, x, low, mid - 1)
        }
    }
}

fun main(args: Array<String>) {
    val target: Int = args[0].toInt()
    val arr: List<Int>? = readLine()?.split(",")?.map {
        it.toInt()
    }
    val result: Int = binarySearch(arr!!, target, 0, arr.size - 1)
    if(result > -1){
        println("Number is on the $result position")
    } else {
        println("Number is not in the array")
    }
}
