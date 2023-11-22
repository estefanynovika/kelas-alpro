static void deleteBuah() throws IOException{
    showAllBuah();
    System.out.print("Pilih nomer buah: ");
    int indexBuah = Integer.valueOf(input.readLine());
    // hapus buah
    listBuah.remove(indexBuah);
}