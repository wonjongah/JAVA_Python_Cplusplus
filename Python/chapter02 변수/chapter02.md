#### 2.1 기본 구조



- 소스의 형식



전통적인 C, 자바는 {}로 블록을 표시하고, 파스칼은 begin, end로 코드 블록을 형성한다. 이에 비해 파이썬은 명시적인 블록을 사용하지 않으며 왼쪽을 공백으로 적당히 띄워 들여쓰기(Indent)함으로써 구조를 만든다.

파이썬은 세미콜론을 무시할 뿐 에러로 처리하지 않는다. 한 줄에 두 개의 명령을 작성하고 싶을 때 명령끼리 구분하는 역할을 한다.

```python
a = 3; b = 4
```

파이썬은 대소문자를 구분하며, 주석은 #를 사용한다. 하지만 여러 줄 주석은 지원하지 않는다.



- 출력



```python
print(출력 내용, [, sep=구분자][, end=끝문자])
```



sep의 디폴트는 공백(' ')이고, end의 디폴트는 개행문자('\n')이다.

sep=''로 빈 문자열을 지정하면 두 변수 사이에 아무런 구분자를 넣지 않고 두 값을 붙여서 출력한다.

end=''로 빈 문자열을 지정하면 연이은 print 호출이 출력된다.

literal (글자 그대로) -> 상수, 변경 X

파이썬은 문자열과 문자를 구분하지 않는다.

만일 아무런 내용 없이 줄바꿈만 하고 싶다면 print() 명령을 내리면 된다.



- 입력



```python
변수 = input("질문 내용")
```



사용자가 정보를 입력 후 Enter를 누르면 input은 입력한 값을 리턴하는데 이 값은 보통 변수로 대입한다.

input 함수로 입력받은 값은 항상 문자열이다. 입력받은 문자열을 정수로 바꾸려면 int() 함수를 호출한다.

처음부터 정수를 입력받기 위해선 input() 호출문을 int()로 감싼다.

```python
변수 = int(input("질문 내용"))
```



하드코딩(hard coding) -> 변수의 값을 고정하여 코딩하는 것을 말한다. 소스 내에 프로그램을 코딩하는 방식.



#### 2.2 변수



- 변수 이름 법칙

  

  - 알파벳, 밑줄, 숫자 구성
  - 첫 글자로 숫자 사용 불가
  - 대소문자 구분
  - 키워드 사용 불가



변수를 읽을 때 없으면 에러 + 쓰기는 없으면 생성



- 변수 사용



파이썬 이외는 변수 타입을 고정해서 쓴다. 파이썬은 실행 중에 변수의 타입을 바꿀 수 있다. 어떤 값이 대입되는가에 따라서 타입이 결정된다. 

변수의 현재 타입을 조사할 때는 type 명령을 사용한다.

```python
a = 1234
type(a)
```

파이썬의 모든 값은 객체여서 숫자나 문자열도 클래스의 일종이다. 123은 int 클래스 소속이며, 'string' 문자열은 str 클래스 소속이다. 

변수는 일단 만들어지면 계속 존재하며 값을 유지한다. 이미 만들어놓은 변수를 없애버릴 때는 del 명령을 사용한다. 변수를 삭제하면 메모리에서 사라지며 이후 이 변수를 참조하는 것은 에러이다. 만들어놓은 변수는 프로그램이 끝날 때나 더 쓸 일이 없을 때 알아서 사라지므로 굳이 삭제할 필요는 없다.