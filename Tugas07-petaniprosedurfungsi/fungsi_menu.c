static void showMenu() throws IOException {
        
    System.out.println("========= MENU ========");
    System.out.println("[1] Show All Buah");
    System.out.println("[2] Insert Buah");
    System.out.println("[3] Edit Buah");
    System.out.println("[4] Delete Buah");
    System.out.println("[5] Exit");
    System.out.print("PILIH MENU> ");
    
    int selectedMenu = Integer.valueOf(input.readLine());
    
    switch(selectedMenu){
        case 1:
            showAllBuah();
            break;
        case 2:
            insertBuah();
            break;
        case 3:
            editBuah();
            break;
        case 4:
            deleteBuah();
            break;
        case 5:
            System.exit(0);
            break;
        default:
            System.out.println("Pilihan salah!");
                 
    }
        
}