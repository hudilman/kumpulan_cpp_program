<?php

echo "Masukkan skor siswa (0-100): ";
$skor = intval(trim(fgets(STDIN)));

// Mohamad Ilman Huda

if ($skor >= 90 && $skor <= 100) {
    echo "Nilai: A\n";
    if ($skor == 100) {
        echo "Skor sempurna!\n";
    }
} elseif ($skor >= 80 && $skor < 90) {
    echo "Nilai: B\n";
} elseif ($skor >= 70 && $skor < 80) {
    echo "Nilai: C\n";
} elseif ($skor >= 60 && $skor < 70) {
    echo "Nilai: D\n";
} else {
    echo "Nilai: F\n";
}
?>
