char findGrade(double x) {
    if (x>90) {
        return 'A';
    } else if (x>75) {
        return 'B';
    } else if (x>60) {
        return 'C';
    } else if (x>45) {
        return 'D';
    } else {
        return 'F';
    }
}