package Ex03.Programming;
import java.util.ArrayList;
import java.util.Scanner;

public class Ex12 {
    public static void main(String[] args) {
        ArrayList<Integer> list = new ArrayList<Integer>();

        int count=0;
        int sum=0;
        Scanner sc = new Scanner(System.in);
        while(true){
            System.out.print("성적을 입력하세요: ");
            list.add(sc.nextInt());
            if(list.get(list.size()-1)==-1){//배열 0부터 시작하기때문에 사이즈는 0부터 시작안함
                list.remove(list.size()-1);
                break;
            }
            sum=sum+ list.get(list.size()-1);
        }
        System.out.println("합계: "+sum);
        System.out.println("평균: "+(double)(sum/ list.size()));
    }

}
