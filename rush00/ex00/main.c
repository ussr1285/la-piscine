/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minjaech <minjaech@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:46:31 by yejshin           #+#    #+#             */
/*   Updated: 2023/08/29 12:40:11 by minjaech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	rush(int x, int y);
extern	void	ft_putchar(char c);

int	get_string_size(char *string) // 인자로 받은 문자열의 사이즈를 반환하는 함수.
{
	int	size; // 반환할 사이즈 변수 선언.
	// 참고: '\0'은 null과 같은 의미이다.
	size = 0; // 각 문자를 카운트하며 1씩 더할 것이니, 초기 값은 0으로 설정.
	while (string[size] != '\0' && size < 12) // 다음 항목의 not(!) 값이다(정 반대값). -> 현재 문자열[사이즈]가 '\0'이라면 문자열의 마지막에 도달한 것이므로 종료. 그리고 size가 10 이상이라면 에러가 나는데, 이미 10보다 큰데 계속해서 카운트하면 컴퓨팅 자원의 낭비이므로, 임의로 12값을 줌. 11 을 주면 더 좋았을지도? ex. 11로 하면 0~10 까지를 처리할 수 있는데, 만약 10자리 숫자를 받은 것이라면 0~9(10개)는 숫자고 마지막은 문자열의 끝을 알리는 '\0'일 것이다.
	{
		if (string[size] >= 48 && string[size] <= 57) // 아스키 코드를 활용하여 숫자만 처리한다. 이 코드는 다음 코드와 같다. => string[size] >= '0' && string[size] <= '9'
			size++; // 해당 문자(string[size])가 숫자라면 사이즈 1 더함.
		else if (string[size] == '\0') // 문자열의 끝에 도달했다면
			break ;  // 반복 중지하고 사이즈 반환 준비.
		else
			return (-1); // 위의 두 경우가 아니면 숫자가 아니거나 음수아므로, 에러를 의미하는 예외처리 -1 반환.
	}
	return (size); // 사이즈 반환
}

long	get_value(char string[]) // 문자열을 숫자로 반환해주는 함수. int 범위보다 큰 것을 처리하기 위해서 long 자료형을 사용했다.
{
	int		ten_size; // 해당 자리수를 구하기 위해 나눗셈과 mod 연산에 사용되는 수. ex. 1 -> 10 -> 100 이런 순으로 점점 증가한다.
	int		str_size; // 자리수를 나타내는 index(주소값).
	long	result; // 반환할 숫자.

	str_size = get_string_size(string); // 문자열 크기를 일단 얻어온다.
	if (str_size > 10 || str_size < 1) // 문자열(숫자)의 자릿수가 10 이상이면 int형 최대 초과이고, 자릿수가 1보다 작으면 get_string_size에서 숫자가 아닌 것을 변환 시도한다고 알리는 것이므로, 예외처리 해주고 함수를 종료한다.
		return (-1); // 에러가 발생할 수도 있으므로, 예외처리로 인해 함수 종료.
	result = 0; // 반환할 숫자 0으로 초기화. 여기에 각 문자열의 문자들을 숫자로 바꾼 후(문자+'0') 자리수에 맞춰 곱하고(숫자*ten_size), 이것들을 전부 더하면 숫자로 변한다. 그 숫자를 반환한다.
	ten_size = 1; // 자리수에 맞춰 곱할 숫자(숫자*ten_size)
	while (str_size > 0) // 숫자의 1의 자리부터 시작할 것이므로, 문자열의 크기부터 시작할 것입니다. 그러므로 1의 자리(문자열의 끝)부터 읽다가 맨 앞(string[0])을 지나치면, 그만 읽습니다. 더 읽을 것도 없고 읽으면 오류.
	{
		result += (string[--str_size] - 48) * ten_size; // 반환할 숫자에, 해당 자릿수의 숫자를 더해준다.
		ten_size *= 10; // 자리수에 맞춰서 숫자 더 키워줌
		if (result > 2147483647) // 만약에 지금 숫자가 int 최대값보다 크면 에러가 나므로, 예외처리 해줘서 함수를 그냥 끝낸다. 
		{
			return (-1); // 예외처리.
		}
	}
	return (result); // 숫자값 반환.
}

void	print_err_msg(void) // 에러 메세지 출력.
{
	ft_putchar('e'); // 에
	ft_putchar('r'); // 러
	ft_putchar('r'); // 출
	ft_putchar('o'); // 력
	ft_putchar('r'); // !
	ft_putchar('\n'); // !
}

int	main(int argc, char *argv[]) // 프로그램 실행시킬때, argc 로 갯수+1 받아오고, argv로 문자열들 받아 옴.
{
	long	x; // x축 숫자
	long	y; // y축 숫자
	int		i; // 아 이거 뭐야. 안 쓰이는 변수 있어서 main.c는 아마 기계 채점 오답 나올 수도 있습니다.

	if (argc != 3) // argc는 갯수+1 이므로, 2개를 받으면 argc는 3이 된다. 그러므로 2개(3)을 받은 것이 아니라면 예외처리.
	{
		print_err_msg(); // 에러 발생해서 에러메세지 출력
		return (-1); // 에러가 발생할 수도 있으므로, 예외처리로 인해 프로그램 종료.
	}
	else
	{
		x = get_value(argv[1]); // get_value에 첫번째 인자를 보내서, int 형으로 변환해 온다.
		y = get_value(argv[2]); // get_value에 두번째 인자를 보내서, int 형으로 변환해 온다.
		if (x < 1 || y < 1) // x와 y가 1이하라면 오류. (이미 get_value에서 잡히긴 함.)
		{
			print_err_msg(); // 에러 발생해서 에러메세지 출력
			return (-1); // 에러가 발생할 수도 있으므로, 예외처리로 인해 프로그램 종료.
		}
		else // 정상적인 인자들이라면 rush 함수에 x와 y 인자로 넣고 실행.
			rush(x, y);
	}
	return (0); // 프로그램 끝.
}
