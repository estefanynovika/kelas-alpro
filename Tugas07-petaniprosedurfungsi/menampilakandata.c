static void showAllBuah(){
    if(listBuah.isEmpty()){
       System.out.println("Belum ada data");
    } else {
         // tampilkan semua buah
        for(int i = 0; i < listBuah.size(); i++){
            System.out.println(String.format("[%d] %s",i, listBuah.get(i)));
        }
    }
}