import java.io.*;
public class fileinfo{
    public static String getextension(String path)
    {
        int i=path.lastIndexOf(".");
        String ext=path.substring(i+1);
        return ext;
    }
    public static void main(String args[])throws IOException{
        File file =new File(args[0]);
        String path=file.getAbsolutePath();
        file.createNewFile();
        System.out.println("file exist"+file.exists());
        System.out.println("file readable"+file.canRead());
        System.out.println("file writable"+file.canWrite());
        System.out.println("file path"+path);
        String ext=getextension(path);
        System.out.println("the extension of the file is "+ext);

    } {
        
    }
}