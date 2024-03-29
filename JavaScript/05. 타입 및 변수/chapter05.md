#### 타입이란?

타입은 프로그램에서 다룰 수 있는 값의 종류를 말한다.

자바 스크립트에서는 대표적으로 5가지 형태의 타입을 미리 정의하고 있다.



#### 1. 숫자(Number)

다른 언어와 다르게 자바스크립트는 정수와 실수를 따로 구분하지 않는다.

```js
var num1 = 10;
var num2 = 10.1;
```



#### 2. 문자열(String)

큰 따옴표나 작은 따옴표로 둘러싸인 문자의 집합을 문자열이라고 한다.

```js
var str1 = "문자열1";
var str2 = '문자열2';
var str3 = "'문자열'입니다.";
var str4 = '"문자열"입니다.';
```

또한 자바스크립트는 문자열과 숫자를 합칠 수 있는 기능도 있다.

```js
var num = 5;
var str = "Hello";
```

num + str 연산 실행 시 num이 자동 문자열로 변환되어 연결괴어 5Hello가 된다.



#### 3. 불리언(Boolean)

불리언이란 참과 거질을 표현하는 타입이다.

```js
var trueValue = true;
var falseValue = false;
```



#### 4. null과 undefined

- null : 값이 정해지지 않은 것을 의미한다.
- undefined : 타입이 정해지지 않은 것을 의미한다.



#### 5. 객체(Object)

자바스크립트를 이루고 있는 거의 모든 것이 객체이다.

객체에는 함수, 배열, 정규표현식 등 위에서 소개한 타입을 제외하고는 모두 객체라고 할 수 있다.

자바스크립트에서의 객체는 키와 값으로 이루어져 있고, 키로 값을 불러올 수 있다.

```js
var dog = {name : "하하", age : 5};
// dog.name => 하하
// dog.age => 5
```



#### 변수

변수랑 데이터를 저장할 수 있는 메모리 공간이며, 그 값은 변경 가능하다.

js에서 var라는 키워드를 통해 변수 선언할 수 있다.

선언되지 않은 변수를 사용하려고 하거나 접근하려고 하면 오류가 생긴다.

또한 선언된 변수는 나중에 초기화할 수도 있고, 선언하면서 동시에 초기화도 가능하다.