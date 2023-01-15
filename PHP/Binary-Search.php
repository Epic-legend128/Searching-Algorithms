<?php
function binary($array, $key) {
    $right = count($array)-1;
    $left = 0;
    while ($left <= $right) {
        $mid = floor(($left+$right)/2);
        if ($array[$mid] > $key) {
            $right = $mid-1;
        }
        else if ($array[$mid] < $key) {
            $left = $mid+1;
        }
        else {
            return $mid;
        }
    }
    return -1;
}
?>
