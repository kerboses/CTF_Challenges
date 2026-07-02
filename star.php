<?php

// Read value from GET request
$value = $_GET['value'];

// Build the command

$output = shell_exec("/var/www/html/dir/star $value");
echo $output;

// Display result
echo "<h2>Try Again</h2>";
echo "<pre>";

if ($return_code == 0) {
    echo implode("\n", $output);
} else {
    echo "Execution Failed";
}

echo "</pre>";

?>
