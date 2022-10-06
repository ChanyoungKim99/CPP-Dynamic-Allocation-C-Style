#include <iostream>
// ���� �޸� �Ҵ� (Dynamic Memory Allocation)
// ���α׷��Ӱ� �ʿ��� �� ����� ������ �� �ִ� �޸�

// C Style
/*
  calloc = Contiguous Allocation(���ӵ� �Ҵ�)

  ���� = void* calloc (size_t num, size_t size);
  num = ��ü ����, size = �� ��ü�� ũ��

  void Ÿ���� ���� = int, char �� �پ��� Ÿ������ ��ȯ�ؾ��ϱ� ����
 */

/*
  malloc = Memory Allocation (�޸� �Ҵ�)

  ���� = void* malloc(size_t size);
 */


int main()
{
	int numbers[10];
	// ���� �迭�� �ذ� ���� ǥ���ϸ�,

	// calloc(10, sizeof(int));

	// ���� compile �� ����
	// ���� Runtime �� ����

	// int�� �ٲٰ� �ʹٸ� 
	// int* p = (int*)calloc(10, sizeof(int)); ���� ����� ����ȯ �ϸ� �ȴ�.

	int* p = (int*)calloc(10, sizeof(int));

	// calloc(10, sizeof(int)) ���� �̸��� ����.
	// �׷��� void*�� ��ȯ�ϴ� calloc�� ��ü�� �ּҸ� �˷��ش�.

	p[0] = 0;

	std::cout << p[0] << std::endl;

	// ���� �޸� �Ҵ翡��
	// �츮�� ���� �޸𸮴� �츮�� �ݵ�� ������ �Ѵ�.
	

	// void free( void* ptr );
	free(p);

	// free�� ���� �ʴ´ٸ�
	// ���� ������ p�� �����������.
	// �ᱹ, calloc(10, sizeof(int)) ���� ������ �� �ִ� ���� �������.

	// free�� �Ҷ�, ���� �ٽ� void*�� ���ϴ� ������
	// ������ ����ȯ�� �Ͼ�� ���� (Type Casting �� Rule)
	// void �� int, char�� ���� �� ū �����̶�� �����ϸ� �ȴ�.

	int* p2 = (int*)malloc(40);

	free(p2);
}