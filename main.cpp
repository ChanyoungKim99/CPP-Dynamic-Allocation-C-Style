#include <iostream>
// 동적 메모리 할당 (Dynamic Memory Allocation)
// 프로그래머가 필요할 때 만들고 제거할 수 있는 메모리

// C Style
/*
  calloc = Contiguous Allocation(연속된 할당)

  형식 = void* calloc (size_t num, size_t size);
  num = 객체 개수, size = 각 객체의 크기

  void 타입인 이유 = int, char 등 다양한 타입으로 반환해야하기 때문
 */

/*
  malloc = Memory Allocation (메모리 할당)

  형식 = void* malloc(size_t size);
 */


int main()
{
	int numbers[10];
	// 위의 배열을 밑과 같이 표현하면,

	// calloc(10, sizeof(int));

	// 위는 compile 때 결정
	// 밑은 Runtime 때 결정

	// int로 바꾸고 싶다면 
	// int* p = (int*)calloc(10, sizeof(int)); 같이 명시적 형변환 하면 된다.

	int* p = (int*)calloc(10, sizeof(int));

	// calloc(10, sizeof(int)) 에는 이름이 없다.
	// 그래서 void*을 반환하는 calloc이 객체의 주소를 알려준다.

	p[0] = 0;

	std::cout << p[0] << std::endl;

	// 동적 메모리 할당에서
	// 우리가 만든 메모리는 우리가 반드시 지워야 한다.
	

	// void free( void* ptr );
	free(p);

	// free를 쓰지 않는다면
	// 로컬 변수인 p가 사라져버린다.
	// 결국, calloc(10, sizeof(int)) 으로 접근할 수 있는 길이 사라진다.

	// free를 할때, 굳이 다시 void*를 안하는 이유는
	// 묵시적 형변환이 일어났기 때문 (Type Casting 의 Rule)
	// void 가 int, char등 보다 더 큰 개념이라고 생각하면 된다.

	int* p2 = (int*)malloc(40);

	free(p2);
}