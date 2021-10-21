    string KetQua = "True";
    /*
    n là số lượng phần tử trong mảng
    a là mảng  
    */
    for (int i=0; i<n; i++) {
        if (a[i]%2!=0) {
            KetQua = "False";    
            break;
        }   
    }
    cout << KetQua;
