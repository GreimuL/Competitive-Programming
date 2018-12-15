import java.util.Scanner;

public class Main {

	static int pac(int i) {
		int a=1;
		for (int b = 1; b <= i; b++) {
			a *= b;
		}
		return a;
	}
	
	public static void main(String[] args) {
		String str;
		Scanner scanner = new Scanner(System.in);
		while (true) {
			int sum = 0;
			str = scanner.next();

			if (str.length() == 1&&str.charAt(0) == '0') {
				break;
			}
			for (int i = 1; i <= str.length(); i++) {
				sum += (str.charAt(str.length()-i) - '0')*pac(i);
			}
			System.out.println(sum);
			sum = 0;
		}
		scanner.close();
	}

}
