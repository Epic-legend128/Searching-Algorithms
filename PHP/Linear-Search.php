function linear($array, $key) {
	for ($i = 0; $i<count($array); $i++) {
    	if ($array[$i] == $key) return $i;
    }
    return -1;
}
