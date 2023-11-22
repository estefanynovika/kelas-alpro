static void editBuah() throws IOException{
    showAllBuah();
    System.out.print("Pilih nomer buah: ");
    int indexBuah = Integer.valueOf(input.readLine());
    
    System.out.print("Nama Baru: ");
    String namaBaru = input.readLine();
    
    // ubah nama buah
    listBuah.set(indexBuah, namaBaru);
}